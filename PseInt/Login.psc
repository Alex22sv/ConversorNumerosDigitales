Algoritmo Login
   Definir user, pass, inputPass, inputUser Como Caracter
   Definir contador Como Entero
   // Definir usuario y contraseña verdaderos
   user = "00024123"
   contra = "1234567890" 
   // Obtener usuario
   Escribir "Ingrese el usuario:"
   Leer inputUser
   // Obtener contraseña
   Escribir "Ingrede su contraseña:"
   Leer inputContra
   contador = 0
   Mientras contador < 3 Hacer
        // Operación lógica Y
        Si usuario = inputUsuario Y contra = inputContra Entonces
             Escribir "El usuario y la contraseña son correctos. Bienvenido al sistema"
             // Colocar sentencia para terminar el código
             contador = 3
        SiNo
             Escribir "El usuario y la contraseña ingresados no son correctos."
        FinSi
        contador = contador + 1
   Fin Mientras
  
FinAlgoritmo
