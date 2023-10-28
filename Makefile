CC = gcc
CCARGS = -Wall -Wextra -std=c17
SRC = src
OUT = build/bin/tmat
INC = inc
OBJ = build/obj


$(OUT): $(SRC)/main.c
	$(CC) $(CCARGS) -o $(OUT) $(SRC)/main.c


clean:
	rm $(OBJ)/*.o $(OUT)

run: $(OUT)
	$(OUT)