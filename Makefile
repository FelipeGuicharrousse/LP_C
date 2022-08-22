# Make File para la simulacion
programa: simulacion.c animal.o animal.h
	gcc -o programa.exe simulacion.c -lm

clean:
	rm -f programa.exe *.o