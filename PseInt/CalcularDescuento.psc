Algoritmo CalcularDescuento
	// Si el precio es mayor que $50, aplicar descuento
	Definir total, recibido, vuelto Como Real
	Definir metodoPago Como Entero
	Escribir "Ingrese el precio total a pagar: "
	Leer total
	Escribir "---------------------------------------------"
	Escribir "Ingrese el m�todo de pago: "
	Escribir "Ingrese 1 si pagar� en efectivo."
	Escribir "Ingrese 2 si pagar� con otro m�todo de pago." 
	Escribir "---------------------------------------------"
	Leer metodoPago
	Si total > 50 Entonces
		total = total * 0.80
		Escribir "Su total a pagar es mayor a $50, recibe un 20% de descuento."
	FinSi
	Si metodoPago = 1 Entonces
		Escribir "Su total es $", total
		Escribir "Ingrese con cu�nto va a pagar: "
		Leer recibido
		Si recibido >= total Entonces
			vuelto = recibido - total
			Escribir "Su vuelto a recibir es $", vuelto	
		SiNo
			vuelto = total - recibido
			Escribir "�Alto! Usted todav�a debe $", vuelto
		FinSi
	SiNo
		Escribir "Su total a pagar es $", total, " y no debe recibir vuelto."
	FinSi
FinAlgoritmo
