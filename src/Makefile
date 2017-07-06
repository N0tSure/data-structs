CC = gcc
CFLAGS = -ggdb3 -O0 -std=c11 -Wall -Werror
TEST_RUNNER = test
HDRS = object.h linked_list.h
LINS = 
SRCS = test.c object.c linked_list.c
OBJS = $(SRCS:.c=.o)

$(TEST_RUNNER): $(OBJS) Makefile
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LINBS)
	
$(OBJS): $(HDRS) Makefile

clean:
	rm -f core $(TEST_RUNNER) *.o
