# CTHULHU

C To Huffman Unary Library (Head Unit)

CTHULHU is a system for converting C code through brainfsck into huffman-encoded unary.

![GPL](http://www.gnu.org/graphics/gplv3-127x51.png)

## Central design:

### C to Huffman Unary Conversion

1. C --> brainfsck (via http://savannah.nongnu.org/projects/libbf )
2. brainfsck --> unary (via custom compilation)
3. unary --> hexadecimal string
4. The final string is huffman encoded and stored in a binary file.

### Runtime interpretation

1. Huffman decoding
2. Compilation to brainfsck
3. brainfsck interpreter

## Implementation

CTHULHU will be implemented in C.
