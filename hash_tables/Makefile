CC=gcc
CFLAGS=-Wall -pedantic -Werror -Wextra -std=gnu89
RM=rm -rf
VALGRIND=valgrind --leak-check=full --show-leak-kinds=all
BETTY=betty

TARGET0=a
SRC0= 	0-main.c \
	0-hash_table_create.c

TARGET1=b
SRC1= 	1-main.c \
	1-djb2.c

TARGET2=c
SRC2=	2-main.c \
	1-djb2.c \
	2-key_index.c

TARGET3=d
SRC3= 	3-main.c \
	0-hash_table_create.c\
	1-djb2.c \
	2-key_index.c \
	3-hash_table_set.c

TARGET4=e
SRC4= 	0-hash_table_create.c\
        1-djb2.c \
        2-key_index.c \
        3-hash_table_set.c \
	4-main.c \
	4-hash_table_get.c

TARGET5=f
SRC5= 	5-main.c \
	0-hash_table_create.c \
	1-djb2.c \
	2-key_index.c \
	3-hash_table_set.c \
	4-hash_table_get.c \
	5-hash_table_print.c

TARGET6=g
SRC6= 	6-main.c \
	0-hash_table_create.c \
	1-djb2.c \
	2-key_index.c \
	3-hash_table_set.c \
	4-hash_table_get.c \
	5-hash_table_print.c \
	6-hash_table_delete.c

SRC7= 	0-hash_table_create.c \
	1-djb2.c \
	2-key_index.c \
	3-hash_table_set.c \
	4-hash_table_get.c \
	5-hash_table_print.c \
	6-hash_table_delete.c


all: 0 1 2 3 4 5 6

clean:
	$(RM) *~ \#*\# \.\#* \
        $(TARGET0) $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) \
        $(TARGET5) $(TARGET6)

re: clean all

0:
	$(CC) $(CFLAGS) $(SRC0) -o $(TARGET0)
1:
	$(CC) $(CFLAGS) $(SRC1) -o $(TARGET1)
2:
	$(CC) $(CFLAGS) $(SRC2) -o $(TARGET2)
3:
	$(CC) $(CFLAGS) $(SRC3) -o $(TARGET3)
4:
	$(CC) $(CFLAGS) $(SRC4) -o $(TARGET4)
5:
	$(CC) $(CFLAGS) $(SRC5) -o $(TARGET5)
6:
	$(CC) $(CFLAGS) $(SRC6) -o $(TARGET6)

betty:
	$(BETTY) $(SRC7)
