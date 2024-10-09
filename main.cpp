#include <iostream>
#include "Huffman.h"

int main() {
    std::string message = "Huffman coding is a popular algorithm used for lossless data compression. "
                          "It assigns variable-length codes to input characters based on their frequencies. "
                          "The more frequent a character, the shorter its code. This way, we can reduce the "
                          "overall size of the data without losing any information.";

    Huffman huff(message);

    for (const auto &[ch, code]: huff.codes) {
        std::cout << "The character: `" << ch << "` has code: " << code << '\n';
    }

    return 0;
}
