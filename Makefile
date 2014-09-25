INCLUDE=/home/a/include
LIB=/home/a/lib


CC=gcc
all:
	$(CC) -o test test.cpp -I$(INCLUDE) -L$(LIB) -lgtest -lpthread -fprofile-arcs -ftest-coverage

test: all
	./test

clean:
	rm -f test
