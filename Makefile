CC=g++
CFLAGS=-c -Wall
LDFLAGS=
#SOURCES=main.cpp sorts.cpp 
SOURCES= $(wildcard sorts/*.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=sorts

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o sorts/$@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	\rm sorts/*.o sorts/sorts
