CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -fPIE
SRC_DIR = src
OBJ_DIR = obj
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/cfiles.o $(OBJ_DIR)/web.o $(OBJ_DIR)/pyBasic.o $(OBJ_DIR)/node.o
TARGET = fsc
MOVETO= /bin

install:all
	echo "it will require sudo"
	sudo mv ./fsc $(MOVETO)


all:$(TARGET)

$(TARGET):$(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

main:$(SRC_DIR)/main.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
## for cfiles

cfiles.o: $(SRC_DIR)/cfiles.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
cfiles.h: $(SRC_DIR)/cfiles.h
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ_DIR) $(TARGET)
