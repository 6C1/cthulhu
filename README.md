<!---
    This file is part of CTHULHU.

    CTHULHU is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    CTHULHU is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with CTHULHU.  If not, see <http://www.gnu.org/licenses/>.
-->

CTHULHU is a system for converting C code into huffman-encoded unary.

# Design

## C to Huffman Unary Conversion

1. C --> brainfsck (via http://savannah.nongnu.org/projects/libbf )
2. brainfsck --> unary (via custom compilation)
3. unary --> hexadecimal string
4. The final string is huffman encoded and stored in a binary file.

## Runtime interpretation

1. Huffman decoding
2. Compilation to brainfsck
3. brainfsck interpreter

# Background

## Unary and Brainfsck

Unary is an ultra-minimalist [esoteric language](http://esolangs.org/wiki/Esoteric_programming_language) 
consisting of repetitions of a single character. This string represents a series of commands in 
[brainfsck](http://esolangs.org/w/index.php?title=Brainfsck), a tape-based esoteric language consisting 
of eight pointer commands invented by [Urban Müller](http://esolangs.org/wiki/Urban_M%C3%BCller).

## Huffman Encoding

[Huffman encoding](http://en.wikipedia.org/wiki/Huffman_coding) is an entropy encoding algorithm based on a code table.

# Implementation

CTHULHU will be implemented in C, adhering to the ISO/IEC 9899:1999 standard.

# Documentation

CTHULHU is documented using the Doxygen system, in both hyperlinked HTML and Latex PDF formats.

# License

CTHULHU is developed under the [GNU General Public License](http://www.gnu.org/licenses/gpl.html).

![GPL](http://www.gnu.org/graphics/gplv3-127x51.png)
