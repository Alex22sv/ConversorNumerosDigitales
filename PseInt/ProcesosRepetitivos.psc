Algoritmo SumaDiezNumerosIngresados
	
	// Opción del bucle WHILE
	Definir numero, suma, promedio Como Real
	Definir contador Como Entero
	contador = 0
	Mientras contador < 10 Hacer
		contador = contador + 1
		Escribir "Ingrese el número #", contador
		Leer numero 
		suma = suma + numero
	FinMientras
	Escribir "El resultado de sumar esos 10 números es: ", suma
	promedio = suma / contador
	Escribir "El promedio de esos 10 números es: ", promedio
	
	// Opción del bucle FOR
	Definir num, sum, prom Como Real
	Definir cont Como Entero
	Para cont <- 1 Hasta 20 Con Paso 2 Hacer
		Escribir "Ingrese el número #", cont
		Leer num
		sum = sum + num
	FinPara
	Escribir "El resultado de sumar esos 10 números es: ", sum
	prom = sum / cont
	Escribir "El promedio de esos 10 números es: ", prom
	
	// Opción del bucle DO WHILE
	Definir number, resultado, average Como Real
	Definir counter Como Entero
	counter = 0
	resultado = 0
	Repetir
		counter = counter + 1
		Escribir "Ingrese el número #", counter
		Leer number
		resultado = resultado + number
	Hasta Que counter >= 10
	Escribir "El resultado de sumar esos 10 números es: ", resultado
	average = resultado / counter
	Escribir "El promedio de esos 10 números es: ", average
	
FinAlgoritmo
