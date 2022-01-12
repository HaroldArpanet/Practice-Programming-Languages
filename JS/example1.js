var number1
var number2
var ope
number1 = Number(prompt("PLEASE ENTER FIRST NUMBER : "))
number2 = Number(prompt("PLEASE ENTER SECOND NUMBER : ")) 
ope = prompt("PLEASE ENTER YOUR OPERATOR (+ or - or * or / ) : ")
if (ope=="+"){
	var equ = number1 + number2
	alert( number1 + "+" + number2 + " : " + equ)
}
else{
	if (ope=="-"){
		var equ = number1 - number2
		alert( number1 + "-" + number2 + " : " + equ)
	}
	else{
		if (ope=="*"){
			var equ = number1 * number2
			alert( number1 + "*" + number2 + " : " + equ)
		}
		else{
			if (ope=="/"){
				var equ = number1 / number2
				alert( number1 + "/" + number2 + " : " + equ)
			}
			else{
				alert("YOUR OPERATOR IS NOT SUPPORTED")
			}}}}
