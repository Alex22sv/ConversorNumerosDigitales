Algoritmo SumaDiezNumerosIngresados
	
	// Opci�n del bucle WHILE
	Definir numero, suma, promedio Como Real
	Definir contador Como Entero
	contador = 0
	Mientras contador < 10 Hacer
		contador = contador + 1
		Escribir "Ingrese el n�mero #", contador
		Leer numero 
		suma = suma + numero
	FinMientras
	Escribir "El resultado de sumar esos 10 n�meros es: ", suma
	promedio = suma / contador
	Escribir "El promedio de esos 10 n�meros es: ", promedio
	
	// Opci�n del bucle FOR
	Definir num, sum, prom Como Real
	Definir cont Como Entero
	Para cont <- 1 Hasta 20 Con Paso 2 Hacer
		Escribir "Ingrese el n�mero #", cont
		Leer num
		sum = sum + num
	FinPara
	Escribir "El resultado de sumar esos 10 n�meros es: ", sum
	prom = sum / cont
	Escribir "El promedio de esos 10 n�meros es: ", prom
	
	// Opci�n del bucle DO WHILE
	Definir number, resultado, average Como Real
	Definir counter Como Entero
	counter = 0
	resultado = 0
	Repetir
		counter = counter + 1
		Escribir "Ingrese el n�mero #", counter
		Leer number
		resultado = resultado + number
	Hasta Que counter >= 10
	Escribir "El resultado de sumar esos 10 n�meros es: ", resultado
	average = resultado / counter
	Escribir "El promedio de esos 10 n�meros es: ", average
	
FinAlgoritmo
