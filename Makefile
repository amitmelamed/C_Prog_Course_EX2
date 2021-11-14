CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=my_mat.o
FLAGS= -Wall -g

all: libmylib.a progmains	
progmains: $(OBJECTS_MAIN) libmylib.a 
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN) libmylib.a

libmylib.a: $(OBJECTS_LIB)
	$(AR) -rcs libmylib.a $(OBJECTS_LIB)	
mylib.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections
