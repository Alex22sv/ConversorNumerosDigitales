Algoritmo Login
    Definir user, pass, inputPass, inputUser Como Caracter
    Definir contador Como Entero
    // Definir usuario y contrase�a verdaderos
    user = "00024123"
    contra = "1234567890" 
    contador = 0
    Mientras contador < 3 Hacer
		// Obtener usuario
		Escribir "Ingrese el usuario:"
		Leer inputUser
		// Obtener contrase�a
		Escribir "Ingrede su contrase�a:"
		Leer inputContra
        // Operaci�n l�gica Y
        Si usuario = inputUsuario Y contra = inputContra Entonces
			Escribir "El usuario y la contrase�a son correctos. Bienvenido al sistema"
			// Colocar sentencia para terminar el c�digo
			contador = 3
        SiNo
			Escribir "El usuario y la contrase�a ingresados no son correctos."
        FinSi
        contador = contador + 1
   Fin Mientras
  
FinAlgoritmo
