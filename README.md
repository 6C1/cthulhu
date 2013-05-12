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

# CTHULHU

C To Huffman Unary Library (Head Unit)

CTHULHU is a system for converting C code through brainfsck into huffman-encoded unary.

![GPL](http://www.gnu.org/graphics/gplv3-127x51.png)

## Central design

### C to Huffman Unary Conversion

1. C --> brainfsck (via http://savannah.nongnu.org/projects/libbf )
2. brainfsck --> unary (via custom compilation)
3. unary --> hexadecimal string
4. The final string is huffman encoded and stored in a binary file.

### Runtime interpretation

1. Huffman decoding
2. Compilation to brainfsck
3. brainfsck interpreter

## Background

Unary is an ultra-minimalist [esoteric language](http://esolangs.org/wiki/Esoteric_programming_language) 
consisting of repetitions of a single character. This string represents a series of commands in 
[brainfsck](http://esolangs.org/w/index.php?title=Brainfsck), a tape-based esoteric language consisting 
of eight pointer commands invented by [Urban Müller](http://esolangs.org/wiki/Urban_M%C3%BCller).

## Implementation

CTHULHU will be implemented in C.
