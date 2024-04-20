Algoritmo Menu
	Definir opcion Como Entero
	Definir cantidad,precio1,precio2,precio3,total Como Real
	// Escribir un menú que muestre las opciones 
	Escribir 'Ingrese el combo que quiere comprar:'
	Leer opcion
	Escribir '¿Cuántas órdenes quiere?'
	Leer cantidad
	Segun opcion  Hacer
		1:
			Escribir 'Seleccionaste las papas y soda.'
			precio1 <- 2.99
			total <- cantidad*precio1
			Escribir 'Ha ordenado ',cantidad,'órdenes del combo #1. Su total es: $',total
		2:
			Escribir 'Seleccionaste las hamburguesas y papas.'
			precio2 <- 6.99
			total <- cantidad*precio2
			Escribir 'Ha ordenado ',cantidad,'órdenes del combo #2. Su total es: $',total
		3:
			Escribir 'Seleccionaste el combo completo.'
			precio3 <- 8.99
			total <- cantidad*precio3
			Escribir 'Ha ordenado ',cantidad,'órdenes del combo #3: Su total es: $',total
		De Otro Modo:
			Escribir 'No tenemos esa opción disponible.'
	FinSegun
FinAlgoritmo
