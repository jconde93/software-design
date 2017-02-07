test_static: test_static.o matrix_static.o transpose.o matrix_static.h matrix_static.c transpose.h transpose.c
	gcc -o test_static test_static.o transpose.o matrix_static.o

test_dynamic: test_dynamic.o matrix_dynamic.o transpose.o matrix_dynamic.h matrix_dynamic.c transpose.h transpose.c
	gcc -o test_dynamic test_dynamic.o transpose.o matrix_dynamic.o

test_static.o: test_static.c matrix_static.h transpose.c transpose.h
	gcc -Wall -g -c test_static.c

test_dynamic.o: test_dynamic.c matrix_dynamic.h transpose.c transpose.h
	gcc -Wall -g -c test_dynamic.c

transpose.o: matrix_dynamic.h matrix_static.h transpose.c transpose.h
	gcc -Wall -g -c transpose.c

clean:
	rm *.o -f
