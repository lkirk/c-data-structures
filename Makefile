OBJS := linked-list
INCLUDE_DIR := ./
CFLAGS += -std=c11 -I$(INCLUDE_DIR)
CFLAGS += -Wall -Werror
#TODO: some ifdef DEBUG or something here
CFLAGS += -g

all: $(OBJS)

%: %.c
	$(CC) $(CFLAGS) -c -o $^ $@ 

.PHONY: clean
clean:
	rm -f $(OBJS)
