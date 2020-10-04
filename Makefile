CC=gcc
TARGET=minishell
all:
	$(CC) -c -fPIC libft/ft_strcmp.c -o ft_strcmp.o
	$(CC) -c -fPIC libft/ft_strcpy.c -o ft_strcpy.o
	$(CC) -c -fPIC libft/ft_strlen.c -o ft_strlen.o
	$(CC) -c -fPIC libft/ft_strsplit.c -o ft_strsplit.o
	$(CC) -c -fPIC libft/ft_strstr.c -o ft_strstr.o
	$(CC) -shared -o libft.so  *.o  -lm
	$(RM) *.o
	$(CC) -I. -L$(PWD) -Wl,-rpath,$(PWD) -g -Wall -o $(TARGET) src/*.c -lft
optimize:
	$(CC) -c -fPIC libft/ft_strcmp.c -o ft_strcmp.o
	$(CC) -c -fPIC libft/ft_strcpy.c -o ft_strcpy.o
	$(CC) -c -fPIC libft/ft_strlen.c -o ft_strlen.o
	$(CC) -c -fPIC libft/ft_strsplit.c -o ft_strsplit.o
	$(CC) -c -fPIC libft/ft_strstr.c -o ft_strstr.o
	$(CC) -shared -o libft.so  *.o  -lm
	$(RM) *.o
	$(CC) -I. -L$(PWD) -Wl,-rpath,$(PWD) -g -Wall -o $(TARGET) src/*.c -lft -O2
clean:
	$(RM) $(TARGET) libft.so
