Algoritmo LoginAndMenu
     // Definir tipos de valores
     Definir user, pass, userInout, passInput Como Caracter
     Definir contador Como Entero
     contador = 0 
     // Datos del usuario correctos
     user = "admin" 
     pass = "1234"
     // Algún mensaje de bienvenida

     // Leer usuario
     Escribir "Ingrese su usuario:"
     Leer userInput
     // Leer contraseña
     Escribir "Ingrese su contraseña:"
     Leer passInput
     // Comprobar datos, tiene un tres intentos
     Si user = userInput Y pass = passInput Entonces
          // Accede al menú de la calculadora 
     SiNo
          "Usuario o contraseña incorrectos. Tiene " 
FinAlgoritmo
