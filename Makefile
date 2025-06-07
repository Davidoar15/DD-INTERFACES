# MakeFile

CC = gcc
OBJ = Conversion.o TablasDeConversion.o 

# Compilar archivos objetos
Conversion.o: Conversion.c Conversion.h
	$(CC) -c Conversion.c 

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	$(CC) -c TablasDeConversion.c 

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) -c ConversionTest.c 

# Comandos
hacerTablas: tablas
	    ./tablas

tablas: $(OBJ)
	$(CC) -o tablas $(OBJ)

ConversionTest: ConversionTest.o Conversion.o 
	$(CC) -o ConversionTest ConversionTest.o Conversion.o 

test: ConversionTest
	./ConversionTest

clean: 
	rm -f *.o tablas ConversionTest

.PHONY: all test clean
