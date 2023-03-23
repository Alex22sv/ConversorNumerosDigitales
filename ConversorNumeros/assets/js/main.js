/* Conversor de decimal a binario */
function convertirDecimalBinario() {
    var input = document.getElementById("decimalInput");
    var decimalOriginal = input.value;
    var decimal = input.value;
    var resultadoDiv = document.getElementById("resultado");
    var resultadoMsg = document.getElementById("resultadoMsg");
    var resultado = "";
    while(decimal >= 2){
        // console.log(`Dividiendo ${decimal} por dos.`);
        residuo = decimal % 2;
        decimal = Math.floor(decimal / 2);
        // console.log(`Cociente: ${decimal} \nResiduo: ${residuo}`);
        resultado = String(residuo) + resultado;
        if(decimal == 1){
            resultado = String(1) + resultado;
        }
        // console.log(`El resultado es ${resultado}`);
    }
    // console.log(`El resultado es ${resultado}`);
    resultadoDiv.style.display = "block";
    resultadoMsg.innerHTML = `El resultado de convertir el valor <b>${decimalOriginal}<sub>(10)</sub></b> de decimal a binario es <b>${resultado}<sub>(2)</sub></b>`;
}
function convertirDecimalOctal(){
    var input = document.getElementById("decimalInput");
    var decimalOriginal = input.value;
    var decimal = input.value;
    var resultadoDiv = document.getElementById("resultado");
    var resultadoMsg = document.getElementById("resultadoMsg");
    var resultado = "";
    while(decimal >= 8){
        residuo = decimal % 8;
        decimal = Math.floor(decimal / 8);
        resultado = String(residuo) + resultado;
        if(decimal < 8){
            resultado = String(resultado) + resultado;
        }
    }
    resultadoDiv.style.display = "block";
    resultadoMsg.innerHTML = `El resultado de convertir el valor <b>${decimalOriginal}<sub>(10)</b> de decimal a octal es <b>${resultado}<sub>(8)</sub>`;
}

/* Revisión si es entero o no */
function esEntero(n){
    return n === +n && n === (n|0);
}