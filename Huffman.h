#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <queue>
#include <map>

class Node {
public:
    char value;
    int freq;
    std::shared_ptr< Node > left;
    std::shared_ptr< Node > right;

    Node(char value, int freq) : value(value), freq(freq), left(nullptr), right(nullptr) {}

    struct Compare {
        bool operator()(const std::shared_ptr< Node > &a, const std::shared_ptr< Node > &b) {
            return a->freq > b->freq;
        }
    };
};

class Huffman {
public:
    std::priority_queue< std::shared_ptr< Node >, std::vector< std::shared_ptr< Node>>, Node::Compare > heap;
    std::map< char, std::string > codes;

    explicit Huffman(const std::string &msg);
    void generateCode(const std::shared_ptr< Node > &node, const std::string &code);

private:
    const char internal_char = '0';
};

#endif // HUFFMAN_H
