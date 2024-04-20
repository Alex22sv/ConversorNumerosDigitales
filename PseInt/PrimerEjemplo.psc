Algoritmo ConversionDolarColor
	Definir dolar, colon Como Real
	// Insertar valor 
	Escribir "Ingrese el valor de la cantidad en dólar"
	Leer dolar
	colon = 8.75
	resultado =  dolar * colon
	Si dolar > 0 Entonces
		Escribir "El valor en colones es " resultado
	SiNo
		Escribir "El valor obtenido es negativo, no es válido."
	FinSi
FinAlgoritmo
