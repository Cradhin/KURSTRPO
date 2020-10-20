flags = -Wall -Werror

all: src	

test: test

#src

src: build/src build/src/main.o build/src/func.o
	gcc $(flags) build/src/*.o -o bin/bulls

build/src:
	mkdir -p build/src

build/src/main.o: src/main.c
	gcc $(flags) -c src/main.c -o build/src/main.o

build/src/func.o: src/func.c
	gcc $(flags) -c src/func.c -o build/src/func.o

#test

build/test:
	mkdir -p build/test	

test: build/test build/test/main.o build/test/func.o
	gcc $(flags) build/test/*.o build/src/func.o -o bin/t

build/test/main.o: test/main.c
	gcc $(flags) -c test/main.c -o build/test/main.o

build/test/func.o: test/func.c
	gcc $(flags) -c test/func.c -o build/test/func.o

.PHONY: clean all

clean:
	rm -rf build/src/* bin/* build/test/*
