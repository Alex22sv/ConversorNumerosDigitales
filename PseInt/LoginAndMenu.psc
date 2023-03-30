Algoritmo LoginAndMenu
	// Definir tipos de valores
	Definir user, pass, userInput, passInput Como Caracter
	Definir contador, opcion Como Entero
	Definir num1, num2, num3, resultado Como Real
	contador = 0 
	// La palabra reservada NULL no existe en PseInt
	
	// Datos del usuario correctos
	user = "admin" 
	pass = "1234"
	// Alg�n mensaje de bienvenida
	Escribir "---- �Bienvenid@ a la calculadora! ----"
	// Comprobar datos, tiene un tres intentos
	Mientras contador < 3 Hacer
		// Leer usuario
		Escribir "Ingrese su usuario:"
		Leer userInput
		// Leer contrase�a
		Escribir "Ingrese su contrase�a:"
		Leer passInput
        // Operaci�n l�gica Y
        Si user = userInput Y pass = passInput Entonces
			Escribir "El usuario y la contrase�a son correctos. Bienvenido al sistema de la calculadora."
			// Colocar sentencia para terminar el c�digo
			contador = 3
			Escribir "Ingrese la operaci�n que quiera realizar: "
			Escribir "1. Suma"
			Escribir "2. Resta"
			Escribir "3. Multiplicaci�n"
			Escribir "4. Divisi�n"
			Escribir "5. Ra�z cuadrada"
			Escribir "---------------------"
			Leer opcion
			Segun opcion Hacer
				1:
					Escribir "Ingrese el primer n�mero: "
					Leer num1
					Escribir "Ingrese el segundo n�mero: "
					Leer num2
					Si num1 == NULLNumerico O num2 == NULLNumerico Entonces
						Escribir "No puedes dejar campos vac�os2."
					SiNo
						resultado = num1 + num2
						Escribir "El resultado de la suma de ", num1, " y ", num2, " es: ", resultado
					FinSi
				2:
					Escribir "Ingrese el primer n�mero: "
					Leer num1
					Escribir "Ingrese el segundo n�mero: "
					Leer num2
					resultado = num1 - num2
					Escribir "El resultado de la resta de ", num1, " y ", num2, " es: ", resultado
				3:
					Escribir "Ingrese el primer n�mero: "
					Leer num1
					Escribir "Ingrese el segundo n�mero: "
					Leer num2
					resultado = num1 * num2
					Escribir "El resultado de la multiplicaci�n de ", num1, " por ", num2, " es: ", resultado
				4: 
					Escribir "Ingrese el primer n�mero: "
					Leer num1
					Escribir "Ingrese el segundo n�mero: "
					Leer num2
					Si num2 <> 0 Entonces
						resultado = num1 / num2
						Escribir "El resultado de la divisi�n de ", num1, " por ", num2, " es: ", resultado
					SiNo 
						Escribir "�NO DIVIR�S POR CERO!"
					FinSi
				5:	
					Escribir "Ingrese el n�mero: "
					Leer num3
					resultado = raiz(num3)
					Escribir "El resultado de la ra�z cuadrada de ", num3,  " es: ", resultado
				De Otro Modo:
					Escribir "La opci�n ingresada no es v�lida."
			Fin Segun
        SiNo
			contador = contador + 1
			Escribir "El usuario y la contrase�a ingresados no son correctos. Te quedan ", 3-contador, " intentos."
        FinSi
	Fin Mientras
FinAlgoritmo
