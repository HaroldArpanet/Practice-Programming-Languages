var number1 = Number(prompt("PLEASE ENTER NUMBER 1 : "))
var number2 = Number(prompt("PLEASE ENTER NUMBER 2 : "))
var ope = prompt("PLEASE ENTER YOUR OPERATOR : ( + OR - OR * OR / OR ** ) : ")
if (ope == "+") {
	var equ = number1 + number2
	alert( number1 + " + " + number2 + " : " + equ )
}
else if (ope == "-") {
	var equ = number1 - number2
	alert( number1 + " - " + number2 + " : " + equ )
}
else if (ope == "*") {
	var equ = number1 * number2
	alert( number1 + " * " + number2 + " : " + equ )
}
else if (ope == "/") {
	var equ = number1 / number2
	alert( number1 + " / " + number2 + " : " + equ )
}
else if (ope == "**") {
	var equ = number1 ** number2
	alert( number1 + " ** " + number2 + " : " + equ )
}
else {
	alert("YOUR OPERATOR IS NOT SUPPORTED")
}
