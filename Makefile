CC=g++
CFLAGS=-c -Wall
LDFLAGS=

all: 
	cd sorts; make;
clean:
	cd sorts; make clean;
