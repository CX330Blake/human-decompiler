CC := gcc
CFLAGS ?= -Wall -Wextra

SOURCES := $(patsubst ./%,%,$(shell find . -type f -name '*.c'))
BINARIES := $(SOURCES:.c=.bin)
SOURCE_LISTINGS := $(SOURCES:.c=.lst)
DIST_LISTINGS := $(patsubst %.c,dist/%.lst,$(SOURCES))

.PHONY: all dist clean

all: $(BINARIES) $(SOURCE_LISTINGS) dist

dist: $(BINARIES)
	$(RM) -r dist
	$(MAKE) $(DIST_LISTINGS)

%.bin: %.c
	$(CC) $(CFLAGS) $< -o $@

%.lst: %.bin
	# objdump -d -M intel --no-show-raw-insn $< | pygmentize -l objdump -f terminal256 > $@
	objdump -d -M intel --no-show-raw-insn $< > $@

dist/%.lst: %.bin
	mkdir -p "$(@D)"
	# objdump -d -M intel --no-show-raw-insn $< | pygmentize -l objdump -f terminal256 > $@
	objdump -d -M intel --no-show-raw-insn $< > $@

clean:
	$(RM) $(BINARIES) $(SOURCE_LISTINGS)
	$(RM) -r dist
