# Becoming a Human Decompiler

## Intro

This repository contains the course materials for a two-hour reverse engineering workshop that I taught at Yuan Ze University (YZU) on August 16, 2026.

Most of the course focuses on learning how to become a "human decompiler" with the goal of helping participants become more comfortable with x86-64 assembly and build a solid foundation for reverse engineering.

The course progresses from basic concepts to more advanced topics and covers the following sections:

- 0x00-Variables
- 0x01-Arithmetic-Ops
- 0x02-Control-Flow
- 0x03-Bitwise-Ops
- 0x04-Function-Call
- 0x05-Type-Conversion
- 0x06-Various-Data-Type
- 0x07-Signed-Unsigned
- 0x08-String-Ops

In each section, we work through several short disassembly snippets. As a participant, your task is to analyze these snippets **without looking at the original source code**, _decompile them by hand, and reconstruct the corresponding C source code._

## Getting Started

Directories 0x00 through 0x08 contain the source code and serve as the _answers to the exercises_. **I highly recommend that you only look at the contents of the `dist` directory (`dist` stands for “distribution”) and practice reverse engineering on your own before taking a peek at the answers.** You can then use the answers to check your work later.

If you want to compile the code on your own machine, simply run:

```bash
make all
```

Happy reversing!

## Credit

Much of the content and code used in this course is derived from **Asuka Nakajima’s [Reverse Engineering Dojo](https://www.slideshare.net/slideshow/reverse-engineering-dojo-enhancing-assembly-reading-skills-234802605/234802605) presentation**.

After reading her slides, I found them extremely helpful as an introduction to reverse engineering and as a resource for developing practical reverse engineering skills. I merely serve as an instructor presenting and organizing these materials.

I would therefore like to give **full credit** for this course and repository to Asuka Nakajima, and sincerely thank her for creating such solid and valuable materials for others to learn from.
