# Huffman Coding Implementation

This repository contains a C++ implementation of the Huffman coding algorithm, a lossless data compression method. Huffman coding assigns variable-length binary codes to characters based on their frequencies, allowing more frequent characters to have shorter codes and reducing the overall data size. This project demonstrates how the algorithm works by encoding a text message into Huffman codes.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Example](#example)
- [Output](#output)

## Introduction

Huffman coding is a widely-used algorithm in data compression. It works by building a binary tree where each character in the input string is represented as a leaf node. The most frequent characters are closer to the root, and therefore have shorter binary codes. This results in a compressed version of the original message that uses fewer bits.

This project provides an easy-to-understand implementation of Huffman coding in C++, using a priority queue (min-heap) to build the Huffman tree, and recursively generating codes for each character.

## Features

- Build a Huffman tree based on the frequency of characters in a given message.
- Generate optimal prefix codes for characters to achieve data compression.
- Encode any message and output the corresponding Huffman codes.
- Simple and easy-to-read C++ implementation.

## Example

Here is an example of how you can use the Huffman coding algorithm to encode a message:

```cpp
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
```

## Output

```text
The character: ` ` has code: 110
The character: `,` has code: 0100110
The character: `-` has code: 01001000
The character: `.` has code: 011001
The character: `H` has code: 01001011
The character: `I` has code: 01001001
The character: `T` has code: 0011010
The character: `a` has code: 1110
The character: `b` has code: 0110001
The character: `c` has code: 10101
The character: `d` has code: 01000
The character: `e` has code: 000
The character: `f` has code: 111111
The character: `g` has code: 011011
The character: `h` has code: 11110
The character: `i` has code: 0101
The character: `l` has code: 10100
The character: `m` has code: 111110
The character: `n` has code: 0010
The character: `o` has code: 1001
The character: `p` has code: 011010
The character: `q` has code: 0110000
The character: `r` has code: 0111
The character: `s` has code: 1011
The character: `t` has code: 1000
The character: `u` has code: 00111
The character: `v` has code: 0100111
The character: `w` has code: 001100
The character: `y` has code: 0011011
The character: `z` has code: 01001010
```