main.o: main.c complex.h mandelbrot.h
	gcc -c main.c
mandelbrot.o: mandelbrot.c complex.h mandelbrot.h
	gcc -c mandelbrot.c
complex.o: complex.c complex.h
	gcc -c complex.c

mandelbrot: main.o mandelbrot.o complex.o
	gcc -o mandelbrot main.o complex.o mandelbrot.o -lm

clean:
	rm *.o
	ls -l



