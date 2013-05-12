

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
