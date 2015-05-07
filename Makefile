CFLAGS=-Wall -g
EXECUTABLE = /home/paul/Devel/Learn-C-The-Hard-Way/ex??

all:
	$(EXECUTABLE) run
clean:
	rm -f ex??

.PHONY: run
run: $(EXECUTABLE)
