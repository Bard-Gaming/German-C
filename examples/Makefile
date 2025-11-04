##
## EPITECH PROJECT, 2025
## Example: Makefile
## File description:
## Makefile to facilitate
## compiling examples
##

INCLUDE_DIR = -I../

.PHONY: help clean

help:
	@echo "German C examples"
	@echo "Usage:"
	@echo "  make <example>"
	@echo "  make [<command>]"
	@echo ""
	@echo "Commands:"
	@echo "  help		displays this message"
	@echo "  clean		gets rid of compiled files"
	@echo ""
	@echo "Examples:"
	@echo "  strtok	reimplementation of C stdlib's strtok function"
	@echo ""

strtok: strtok.c
	cc $< -o $@ $(INCLUDE_DIR)

clean:
	rm -f strtok
