CC = gcc
CFLAGS = -Wall -g
TARGET = main
SRC = lib\ctrl\ctrl.c lib\mode\mode.c lib\view\view.c main.c
OBJ = $(SRC:.c=.o)
RM = del /Q

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

run: $(TARGET)
	./$(TARGET)

clean:
	$(RM) $(OBJ) $(TARGET).exe