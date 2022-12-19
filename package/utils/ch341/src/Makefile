all: ch341prog

ch341prog:
	$(CC) $(CFLAGS) -o $@ ch341a.c main.c $(LDFLAGS) -lusb-1.0

clean:
	rm -f ch341prog
