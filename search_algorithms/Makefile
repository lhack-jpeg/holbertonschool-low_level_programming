CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
RM=rm -rf

TARGET0=a
SRC0=	0-main.c \
	0-linear.c

TARGET1=b
SRC1=	1-main.c \
	1-binary.c

TARGET2=c
SRC2=	100-main.c \
	100-jump.c

TARGET3=d
SRC3=	102-main.c \
	102-interpolation.c

TARGET4=e
SRC4=	103-main.c \
	103-exponential.c

TARGET5=h
SRC5=	104-main.c \
	104-advanced_binary.c

TARGET6=g
SRC6= 	105-main.c \
	105-jump_list.c\
	listint/*.c

TARGET7=i
SRC7=	106-main.c \
	106-linear_skip.c \
	skiplist/*.c

all: 0 1 2 3 4 5 6 7

clean:
	$(RM) *~ \#*\# \.\#* \
        $(TARGET0) $(TARGET1) $(TARGET2) $(TARGET3) $(TARGET4) \
        $(TARGET5) $(TARGET6) $(TARGET7)

re: clean all

0:
	$(CC) $(CFLAGS) $(SRC0) -o $(TARGET0)
1:
	$(CC) $(CFLAGS) $(SRC1) -o $(TARGET1)
2:
	$(CC) $(CFLAGS) $(SRC2) -lm -o $(TARGET2)
3:
	$(CC) $(CFLAGS) $(SRC3) -o $(TARGET3)
4:
	$(CC) $(CFLAGS) $(SRC4) -o $(TARGET4)
5:
	$(CC) $(CFLAGS) $(SRC5) -o $(TARGET5)
6:
	$(CC) $(CFLAGS) $(SRC6) -lm -o $(TARGET6)
7:
	$(CC) $(CFLAGS) $(SRC7) -lm -o $(TARGET7)
8:
	$(CC) $(CFLAGS) $(SRC8) -o $(TARGET8)
