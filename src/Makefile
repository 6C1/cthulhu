#    This file is part of CTHULHU.  						\
										\
    CTHULHU is free software: you can redistribute it and/or modify 		\
    it under the terms of the GNU General Public License as published by 	\
    the Free Software Foundation, either version 3 of the License, or 		\
    (at your option) any later version. 					\
										\
    CTHULHU is distributed in the hope that it will be useful, 			\
    but WITHOUT ANY WARRANTY; without even the implied warranty of 		\
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 		\
    GNU General Public License for more details. 				\
										\
    You should have received a copy of the GNU General Public License		\
    along with CTHULHU.  If not, see <http://www.gnu.org/licenses/>.		

CC = gcc
CFLAGS = -Wall -pedantic -std=c99
EXEC = cthulhu
OBJS = cthulhu.o
SRCS = cthultu.c cthulhu.h
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
clean:
	rm -f *~
	rm -f *#
	rm -f ./cthulhu
	rm -f *.o
