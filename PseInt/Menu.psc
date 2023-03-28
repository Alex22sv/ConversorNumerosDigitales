Algoritmo Menu
    Definir opcion Como Entero
    Definir cantidad, precio1, precio2, precio3, total Como Real
    Segun opcion Hacer 
        1:
            Escribir "Seleccionaste las papas y soda."
            Escribir "¿Cuánta órdenes quiere?"
            Leer cantidad
            precio1 = 2.99
            total = cantidad * precio1
            Escribir "Ha ordenado ", cantidad, "órdenes del combo #1. Su total es: $", total
        2: 
            Escribir "Seleccionaste las hamburguesas y papas."
            Escribir "¿Cuánta órdenes quiere?"
            Leer cantidad
            precio2 = 6.99
            total = cantidad * precio2
            Escribir "Ha ordenado ", cantidad, "órdenes del combo #2. Su total es: $", total
        3:  
            Escribir "Seleccionaste el combo completo." 
            Escribir "¿Cuánta órdenes quiere?"
            Leer cantidad
            precio3 = 8.99
            total = cantidad * precio3
            Escribir "Ha ordenado ", cantidad, "órdenes del combo #3: Su total es: $", total
        De Otro Modo:
            Escribir "No tenemos esa opción disponible."
    Fin Segun
FinAlgoritmo
