#!/usr/bin/make

.DEFAULT_GOAL := all

CC := gcc-8
CFLAGS := -Wall -Wextra -Wpedantic -Werror -pedantic-errors -c -O3
AR := ar
ARFLAGS := -rcs

all: ./std.tar.gz;
.PHONY: all

./std.tar.gz: ./std.tar
	gzip -k $^

./std.tar: ./libstd.a ./std.h ./maths.h ./package.json ./std.eh.json.gz
	tar -c -f $@ $^

%.eh.json.gz: %.eh.json;
	gzip -k $^

%.eh.json:;

./libstd.a: ./std.o ./maths.o
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c %.h
	$(CC) $(CFLAGS) $< -o $@

%.h: %.c;

clean:
	$(RM) *.o *.a *.tar *.gz
.PHONY: clean
