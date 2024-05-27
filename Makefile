
all: build run

build: clean
	gcc -s -Wall -O2 src/main.c -o bin/password-generator

run:
	./bin/password-generator 15

clean:
	rm -rf bin/
	mkdir bin

install:
	cp bin/password-generator /bin/
