CC := gcc
CFLAGS := -Wall -Werror -g

TARGET := writer
OBJS := writer.o

CROSS_COMPILE ?=
CC := $(CROSS_COMPILE)gcc

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET) *.o

.PHONY: all clean
