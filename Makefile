#!/usr/bin/make

.DEFAULT_GOAL := all

CC := gcc
CFLAGS := $(shell emperor-setup -cb) -I$(shell echo $$HOME)/.emperor/packages/base/0.0.1/ -L$(shell echo $$HOME)/.emperor/packages/base/0.0.1/
CLIBS := -lbase
AR := ar
ARFLAGS := -rcs

all: ./std.eh.json.gz ./libstd.a;
.PHONY: all

%.eh.json.gz: %.eh.json;
	gzip -kf $^

%.eh.json:;

./libstd.a: ./maths.o ./io/io.o
	$(AR) $(ARFLAGS) $@ $^

./io/%.o: ./io/%.c ./io/%.h
	$(CC) $(CFLAGS) $< -o $@ $(CLIBS)

%.h: %.c;

clean:
	$(RM) *.o *.a *.tar *.gz
.PHONY: clean
