Algoritmo CalcularEdad
	// Obtener la edad
	Definir anioNacimiento, anioActual Como Entero
	Escribir "Ingrese su año de nacimiento"
	Leer anioNacimiento
	anioActual = 2023
	// Comprobar que año de nacimiento sea válido
	Si anioNacimiento > 0
		// Obtener edad
		edad = anioActual - anioNacimiento
		// Comprobar que sea mayor de edad
		Si edad >= 18 Entonces
			Escribir "Usted puede ver películas de clasificación C"
		SiNo
			Escribir "Usted sólo puede ver películas de clasificación A y B"
		FinSi
	SiNo 
		Escribir "El año ingresado no es válido."
	FinSi
FinAlgoritmo
