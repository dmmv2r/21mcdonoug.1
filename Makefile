C = gcc
CFLAGS = -Wall -g

TARGETS = doenv

all: $(TARGETS)

doenv: doenv.o
	$(C) $(CFLAGS) -o $@ doenv.o

clean:
	rm -rf *.o $(TARGETS)
