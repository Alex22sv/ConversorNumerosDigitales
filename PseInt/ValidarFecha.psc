Algoritmo ValidarFecha
	Definir day, month, year Como Entero
	Definir fechaValida Como Logico
	Definir signoZodiacal, epocaClimatica Como Cadena
	
	Escribir "Ingrese el d�a del mes: "
	Leer day
	Escribir "Ingrese el mes del a�o: "
	Leer month
	Escribir "Ingrese el a�o: "
	Leer year
	
	Segun month Hacer
		1:
			Si 0<day Y day<32 Entonces
				fechaValida = Verdadero
				epocaClimatica = "verano"
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
				Escribir "Has ingresado un d�a no v�lida. Finalizando el programa..."	
			FinSi
		2:
			Si year%4 == 0 Entonces
				Si 0<day Y day<30 Entonces
					fechaValida = Verdadero
					epocaClimatica = "verano"
					Si dia>=20 Entonces
						signoZodiacal = "Piscis"
					SiNo
						signoZodiacal = "Acuario"
					FinSi
				SiNo
					Escribir "Has ingresado una fecha no v�lida. Finalizando el programa..."
					fechaValida = Falso
				FinSi
			SiNo
				Si 0<day Y day<29 Entonces
					fechaValida = Verdadero
					epocaClimatica = "verano"
					Si dia>=20 Entonces
						signoZodiacal = "Piscis"
					SiNo
						signoZodiacal = "Acuario"
					FinSi
				SiNo
					Escribir "Has ingresado una fecha no v�lida. Finalizando el programa..."
					fechaValida = Falso
				FinSi
			FinSi
		3:
			Si 0<day Y day<32 Entonces
				fechaValida = Verdadero
				epocaClimatica = "verano"
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
				Escribir "Has ingresado un d�a no v�lida. Finalizando el programa..."	
			FinSi
		4:
			Si 0<day Y day<31 Entonces
				fechaValida = Verdadero
				epocaClimatica = "verano"
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
				Escribir "Has ingresado un d�a no v�lida. Finalizando el programa..."	
			FinSi
		5:
			Si 0<day Y day<32 Entonces
				fechaValida = Verdadero
				epocaClimatica = "invierno"
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
				Escribir "Has ingresado un d�a no v�lida. Finalizando el programa..."	
			FinSi
		6:
			Si 0<day Y day<31 Entonces
				fechaValida = Verdadero
				epocaClimatica = "invierno"
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
				Escribir "Has ingresado un d�a no v�lida. Finalizando el programa..."	
			FinSi
		7:
			Si 0<day Y day<32 Entonces
				fechaValida = Verdadero
				epocaClimatica = "invierno"
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
				Escribir "Has ingresado un d�a no v�lida. Finalizando el programa..."	
			FinSi
		8:
			Si 0<day Y day<32 Entonces
				fechaValida = Verdadero
				epocaClimatica = "invierno"
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
				Escribir "Has ingresado un d�a no v�lida. Finalizando el programa..."	
			FinSi
		9:
			Si 0<day Y day<31 Entonces
				fechaValida = Verdadero
				epocaClimatica = "invierno"
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
				Escribir "Has ingresado un d�a no v�lida. Finalizando el programa..."	
			FinSi
		10:
			Si 0<day Y day<32 Entonces
				fechaValida = Verdadero
				epocaClimatica = "invierno"
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
				Escribir "Has ingresado un d�a no v�lida. Finalizando el programa..."	
			FinSi
		11:
			Si 0<day Y day<31 Entonces
				fechaValida = Verdadero
				epocaClimatica = "verano"
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
				Escribir "Has ingresado un d�a no v�lida. Finalizando el programa..."	
			FinSi
		12:
			Si 0<day Y day<32 Entonces
				fechaValida = Verdadero
				epocaClimatica = "verano"
				Si dia>=21 Entonces
					signoZodiacal = "Acuario"
				SiNo
					signoZodiacal = "Capricornio"
				FinSi
			SiNo
				fechaValida = Falso
				Escribir "Has ingresado un d�a no v�lida. Finalizando el programa..."	
			FinSi
		De Otro Modo:
			fechaValida = Falso
			Escribir "Has ingresado un mes no v�lido. Finalizando el programa..."	
	FinSegun
	// Determinar �poca clim�tica
	Escribir "Seg�n la fecha ingresada, usted se encuentra en: ", epocaClimatica
	
	// Determinar signo zodiacal
	Escribir "Seg�n la fecha ingresada, su signo zodiacal es: ", signoZodiacal	
FinAlgoritmo
