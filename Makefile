CC=gcc
TARGET=minishell
all:
	$(CC) -g -Wall -o $(TARGET) src/*.c
optimize:
	$(CC) -g -Wall -O2 $(TARGET) src/*.c
clean:
	$(RM) -rf $(TARGET)
