all: arg.c
	gcc arg.c

run:
	./a.out

clean:
	rm ./a.out
