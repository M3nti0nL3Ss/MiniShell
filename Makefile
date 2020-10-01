CC=gcc
TARGET=minishell
all:
	$(CC) -I./libft/ -g -Wall -o $(TARGET) src/*.c
optimize:
	$(CC) -I./libft/ -g -Wall -O2 -o $(TARGET) src/*.c
clean:
	$(RM) $(TARGET)
