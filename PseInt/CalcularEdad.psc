Algoritmo CalcularEdad
	// Obtener la edad
	Definir anioNacimiento, anioActual Como Entero
	Escribir "Ingrese su a�o de nacimiento"
	Leer anioNacimiento
	anioActual = 2023
	// Comprobar que a�o de nacimiento sea v�lido
	Si anioNacimiento > 0
		// Obtener edad
		edad = anioActual - anioNacimiento
		// Comprobar que sea mayor de edad
		Si edad >= 18 Entonces
			Escribir "Usted puede ver pel�culas de clasificaci�n C"
		SiNo
			Escribir "Usted s�lo puede ver pel�culas de clasificaci�n A y B"
		FinSi
	SiNo 
		Escribir "El a�o ingresado no es v�lido."
	FinSi
FinAlgoritmo
