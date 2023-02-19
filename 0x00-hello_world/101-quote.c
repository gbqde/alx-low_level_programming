#!/bin/bash
gcc -Wall -w -o /dev/stderr -x c - <<<'int main(void) {return write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);}'
