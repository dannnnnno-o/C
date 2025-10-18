CC = gcc
CFLAGS = -Wall -g
TARGET = main
SRC = main.c lib\ctrl\ctrl.c lib\view\view.c
OBJ = $(SRC:.c=.o)
RM = del /Q

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

run: $(TARGET)
	./$(TARGET)

clean:
	$(RM) $(OBJ) $(TARGET).exe