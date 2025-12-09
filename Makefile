CC=gcc
CFLAGS=-Wall
OBJ=main.o auth.o student.o meal.o billing.o file_handler.o

all: mess

mess: $(OBJ)
	$(CC) $(CFLAGS) -o mess $(OBJ)

clean:
	rm -f *.o mess
