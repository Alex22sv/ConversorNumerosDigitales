/* Conversor de decimal a binario */
function convertirDecimalBinario() {
    var input = document.getElementById("decimalInput");
    var decimalOriginal = input.value;
    var decimal = input.value;
    var resultadoMsg = document.getElementById("resultadoMsg");
    var resultado = "";
    if(decimal == ""){
        resultadoMsg.classList.add("errorAlert");
        return resultadoMsg.innerHTML = "¡Error! No puedes dejar campos vacíos.";
    }
    if(decimal < 2){
        resultado = decimal;
    }
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
    resultadoMsg.style.display = "block";
    if(esNulo(resultado)){
        resultadoMsg.innerHTML = `Has ingresado valores no válidos. No se puede convertir <b>${decimalOriginal}<sub>(10)</sub></b> de decimal a binario.`;
        resultadoMsg.classList.add("errorAlert");
    } else {
        resultadoMsg.innerHTML = `El resultado de convertir el valor <b>${decimalOriginal}<sub>(10)</sub></b> de decimal a binario es <b>${resultado}<sub>(2)</sub></b>`;
    }
}
function convertirDecimalOctal(){
    var input = document.getElementById("decimalInput");
    var decimalOriginal = input.value;
    var decimal = input.value;
    var resultadoMsg = document.getElementById("resultadoMsg");
    var resultado = "";
    if(decimal == ""){
       resultadoMsg.classList.add("errorAlert");
       return resultadoMsg.innerHTML = "¡Error! No puedes dejar campos vacíos."; 
    }
    if(decimal < 8){
        resultado = decimal;
    }
    while(decimal >= 8){
        // console.log(`Dividiendo ${decimal} por ocho.`);
        residuo = decimal % 8;
        decimal = Math.floor(decimal / 8);
        // console.log(`Cociente: ${decimal} \nResiduo: ${residuo}`);
        resultado = String(residuo) + resultado;
        if(decimal < 8){
            // console.log("Valor es menor que 8, antiguo resultado: " + resultado);
            resultado = String(decimal) + resultado;
        }
    }
    // console.log(`El resultado es ${resultado}`);
    resultadoMsg.style.display = "block";
    if(esNulo(resultado)){
        resultadoMsg.innerHTML = `Has ingresado valores no válidos. No se puede convertir <b>${decimalOriginal}<sub>(10)</sub></b> de decimal a octal.`;
        resultadoMsg.classList.add("errorAlert");
    } else {    
        resultadoMsg.innerHTML = `El resultado de convertir el valor <b>${decimalOriginal}<sub>(10)</b> de decimal a octal es <b>${resultado}<sub>(8)</sub>`;
    }
}
function convertirDecimalHexadecimal(){
    var input = document.getElementById("decimalInput");
    var decimalOriginal = input.value;
    var decimal = input.value;
    var resultadoMsg = document.getElementById("resultadoMsg");
    var resultado = "";
    if(decimal == ""){
       resultadoMsg.classList.add("errorAlert");
       return resultadoMsg.innerHTML = "¡Error! No puedes dejar campos vacíos."; 
    } 
    if(decimal < 16){
        switch(String(decimal)){
            case "10":
                resultado = String('A') + resultado;
                break;
            case "11":
                resultado = String('B') + resultado;
                break;
            case "12":
                resultado = String('C') + resultado;
                break;
            case "13":
                resultado = String('D') + resultado;
                break;
            case "14":
                resultado = String('E') + resultado;
                break;
            case "15":
                resultado = String('F') + resultado;
                break;
            default:
                resultado = String(decimal) + resultado;
                break;
        }
    }
    while(decimal >= 16){
        console.log(`Dividiendo ${decimal} por dieciséis.`);
        residuo = decimal % 16;
        decimal = Math.floor(decimal / 16);
        console.log(`Cociente: ${decimal} \nResiduo: ${residuo}`);
        switch(String(residuo)){
            case "10":
                resultado = String('A') + resultado;
                break;
            case "11":
                resultado = String('B') + resultado;
                break;
            case "12":
                resultado = String('C') + resultado;
                break;
            case "13":
                resultado = String('D') + resultado;
                break;
            case "14":
                resultado = String('E') + resultado;
                break;
            case "15":
                resultado = String('F') + resultado;
                break;
            default:
                resultado = String(residuo) + resultado;
                break;
        }
        if(decimal < 16){
            // console.log("Valor es menor que 16, antiguo resultado: " + resultado);
            switch(String(decimal)){
                case "10":
                    resultado = String('A') + resultado;
                    break;
                case "11":
                    resultado = String('B') + resultado;
                    break;
                case "12":
                    resultado = String('C') + resultado;
                    break;
                case "13":
                    resultado = String('D') + resultado;
                    break;
                case "14":
                    resultado = String('E') + resultado;
                    break;
                case "15":
                    resultado = String('F') + resultado;
                    break;
                default:
                    resultado = String(decimal) + resultado;
                    break;
            }
        }
    }
    //console.log(`El resultado es ${resultado}`);
    resultadoMsg.style.display = "block";
    if(esNulo(resultado)){
        resultadoMsg.innerHTML = `Has ingresado valores no válidos. No se puede convertir <b>${decimalOriginal}<sub>(10)</sub></b> de decimal a hexadecimal.`;
        resultadoMsg.classList.add("errorAlert");
    } else {
        resultadoMsg.innerHTML = `El resultado de convertir el valor <b>${decimalOriginal}<sub>(10)</b> de decimal a hexadecimal es <b>${resultado}<sub>(16)</sub>`;
    }
}
function convertirBinarioDecimal(){
    var input = document.getElementById("binarioInput");
    var binarioOriginal = input.value;
    var binario = input.value;
    binario = binario.split("").reverse().join("");
    var resultadoMsg = document.getElementById("resultadoMsg");
    var resultado = 0;
    if(binario == ""){
        resultadoMsg.classList.add("errorAlert");
        return resultadoMsg.innerHTML = "¡Error! No puedes dejar campos vacíos.";
    }
    for(var i = 0; i < String(binario).length; i++){
        valor = Math.pow(2, i) * binario[i];
        // console.log("I: " + i + " \nBinario: " + binario[i]+ " \nValor: " + valor);
        resultado = resultado + valor;
    }
    // console.log(resultado);
    resultadoMsg.style.display = "block";
    if(esNulo(resultado)){
        resultadoMsg.innerHTML = `Has ingresado valores no válidos. No se puede convertir <b>${binarioOriginal}<sub>(10)</sub></b> de binario a decimal.`;
        resultadoMsg.classList.add("errorAlert");
    } else {
        resultadoMsg.innerHTML = `El resultado de convertir el valor <b>${binarioOriginal}<sub>(2)</sub></b> de binario a decimal es <b>${resultado}<sub>(10)</sub></b>`;
    }
}
function convertirOctalDecimal(){
    var input = document.getElementById("octalInput");
    var octalOriginal = input.value;
    var octal = input.value;
    octal = octal.split("").reverse().join("");
    var resultadoMsg = document.getElementById("resultadoMsg");
    var resultado = 0;
    if(octal == ""){
        resultadoMsg.classList.add("errorAlert");
        return resultadoMsg.innerHTML = "¡Error! No puedes dejar campos vacíos.";
    }
    for(var i = 0; i < String(octal).length; i++){
        valor = Math.pow(8, i) * octal[i];
        // console.log("I: " + i + " \nOctal: " + octal[i]+ " \nValor: " + valor);
        resultado = resultado + valor;
    }
    // console.log(resultado);
    resultadoMsg.style.display = "block";
    if(esNulo(resultado)){
        resultadoMsg.innerHTML = `Has ingresado valores no válidos. No se puede convertir <b>${octalOriginal}<sub>(10)</sub></b> de octal a decimal.`;
        resultadoMsg.classList.add("errorAlert");
    } else {
        resultadoMsg.innerHTML = `El resultado de convertir el valor <b>${octalOriginal}<sub>(8)</sub></b> de octal a decimal es <b>${resultado}<sub>(10)</sub></b>`;
    }
}
function convertirHexadecimalDecimal(){
    var input = document.getElementById("octalInput");
    var hexadecimalOriginal = input.value;
    var hexadecimal = input.value;
    hexadecimal = hexadecimal.split("").reverse().join("");
    var resultadoMsg = document.getElementById("resultadoMsg");
    var resultado = 0;
    if(hexadecimal == ""){
        resultadoMsg.classList.add("errorAlert");
        return resultadoMsg.innerHTML = "¡Error! No puedes dejar campos vacíos.";
    }
    for(var i = 0; i < String(hexadecimal).length; i++){
        console.log(`El valor actual es ${hexadecimal[i]}`);
        switch(String(hexadecimal[i])){
            case "A":
                valor = String('10');
                break;
            case "B":
                valor = String('11');
                break;
            case "C":
                valor = String('12');
                break;
            case "D":
                valor = String('13');
                break;
            case "E":
                valor = String('14');
                break;
            case "F":
                valor = String('15');
                break;
            default:
                valor = String(hexadecimal[i]);
                break;
        }
        mult = Math.pow(16, i) * valor;
        // console.log("I: " + i + "\nHexadecimal: " + valor+ "\nValor: " + mult);
        resultado = resultado + mult;
    }
    // console.log(resultado);
    resultadoMsg.style.display = "block";
    if(esNulo(resultado)){
        resultadoMsg.innerHTML = `Has ingresado valores no válidos. No se puede convertir <b>${hexadecimalOriginal}<sub>(10)</sub></b> de hexadecimal a decimal.`;
        resultadoMsg.classList.add("errorAlert");
    } else {
        resultadoMsg.innerHTML = `El resultado de convertir el valor <b>${hexadecimalOriginal}<sub>(16)</sub></b> de hexadecimal a decimal es <b>${resultado}<sub>(10)</sub></b>`;
    }
}
/* Revisión si es entero o no */
function esEntero(n){
    return n === +n && n === (n|0);
}
function esNulo(n){
    if(n == "" || n == null || String(n) == "NaN"){
        return true;
    } else {
        return false;
    }
}