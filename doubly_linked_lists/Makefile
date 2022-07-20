CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
RM=rm -rf

TARGET0=a
SRC0=	0-main.c \
	0-print_dlistint.c

TARGET1=b
SRC1=	1-main.c \
	1-dlistint_len.c

TARGET2=c
SRC2=	2-main.c \
	2-add_dnodeint.c \
	0-print_dlistint.c

TARGET3=d
SRC3=	3-main.c \
	3-add_dnodeint_end.c \
	0-print_dlistint.c

TARGET4=e
SRC4=	4-main.c \
	3-add_dnodeint_end.c \
	0-print_dlistint.c \
	4-free_dlistint.c

TARGET5=h
SRC5=	5-main.c \
	3-add_dnodeint_end.c \
	0-print_dlistint.c \
	4-free_dlistint.c \
	5-get_dnodeint.c

TARGET6=i
SRC6=	3-add_dnodeint_end.c \
	4-free_dlistint.c \
	6-sum_dlistint.c

TARGET7=j
SRC7= 	7-main.c \
	2-add_dnodeint.c \
	3-add_dnodeint_end.c \
	0-print_dlistint.c \
	4-free_dlistint.c \
	7-insert_dnodeint.c

TARGET8=k
SRC8=	8-main.c \
	3-add_dnodeint_end.c \
	0-print_dlistint.c \
	4-free_dlistint.c \
	8-delete_dnodeint.c

all: 0 1 2 3 4 5 6 7 8

clean:
	$(RM) *~ \#*\# \.\#* \
        $(TARGET0) $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) \
        $(TARGET5) $(TARGET6) $(TARGET7) $(TARGET8)

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
7:
	$(CC) $(CFLAGS) $(SRC7) -o $(TARGET7)
8:
	$(CC) $(CFLAGS) $(SRC8) -o $(TARGET8)
