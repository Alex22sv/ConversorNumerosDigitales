Algoritmo Login
   Definir user, pass, inputPass, inputUser como Caracter
   // Definir usuario y contraseña verdaderos
   user = "00024123"
   contra = "1234567890" 
   // Obtener usuario
   Escribir "Ingrese el usuario:"
   Leer inputUser
   // Obtener contraseña
   Escribir "Ingrede su contraseña:"
   Leer inputContra
   // Condicional si anidado, podríamos haber utilizado la condicional Y para no utilizar el si anidado.
   Si usuario = inputUsuario Entonces
      Si contra = inputContra Entonces
          Escribir "El usuario y la contraseña son correctos. Bienvenido al sistema"
      SiNo
          Escribir "La contraseña ingresada no es correcta."
      FinSi
   SiNo
      "El usuario ingresado no es correcto"
   FinSi
FinAlgoritmo
