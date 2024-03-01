TARGET  = $(BIN_DIR)/myprog
OBJS    = $(OBJ_DIR)/main.o \
	  $(OBJ_DIR)/fn.o \
	  $(OBJ_DIR)/ct.o
	  
INC_DIR = ../inc
OBJ_DIR = ../obj
BIN_DIR = ../bin
SRC_DIR = .
CFLAGS = -Wall -Wextra -Wpedantic -I$(INC_DIR)

$(TARGET) : $(OBJS)
	mkdir -p $(BIN_DIR)
	gcc $(CFLAGS) $(OBJS) -o $(TARGET)
	
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	gcc -c -MD $(CFLAGS) $< -o $@
	
-include $(OBJ_DIR)/*.d
	
.PHONY : clean 
clean :
	rm -r $(OBJ_DIR) $(BIN_DIR)
	

