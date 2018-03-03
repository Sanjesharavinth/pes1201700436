a.out: client.o stack.out	
	gcc client.o stack.o
	
client.o : client.c stack.h
	gcc -c client.c

stack : stack.c stack.h
	gcc -c stack.c