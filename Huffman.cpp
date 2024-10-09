#include "Huffman.h"

Huffman::Huffman(const std::string &msg) {
    std::map< char, int > freq;
    for (const char &ch: msg) {
        freq[ch]++;
    }

    for (const auto &[value, frq]: freq) {
        std::shared_ptr< Node > new_node = std::make_shared< Node >(value, frq);
        heap.push(new_node);
    }

    while (heap.size() > 1) {
        std::shared_ptr< Node > left = heap.top();
        heap.pop();
        std::shared_ptr< Node > right = heap.top();
        heap.pop();

        std::shared_ptr< Node > root = std::make_shared< Node >(internal_char,
                                                                left->freq + right->freq);
        root->left = left;
        root->right = right;
        heap.push(root);
    }

    generateCode(heap.top(), "");
}

void Huffman::generateCode(const std::shared_ptr< Node > &node, const std::string &code) {
    if (!node) return;

    if (node->value != internal_char) {
        codes[node->value] = code;
    }

    generateCode(node->left, code + "0");
    generateCode(node->right, code + "1");
}
