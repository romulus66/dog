CFLAGS=-Wall -g
EXECUTABLE = /home/paul/Devel/Learn-C-The-Hard-Way/ex??

all:
	$(EXECUTABLE) run
clean:
	rm -f ex0?

.PHONY: run
run: $(EXECUTABLE)
