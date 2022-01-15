var number = Number(prompt("Please enter a number between 1 and 1000 so that your computer can guess: " ))
alert("Your number has been registered")
alert("Guessing process: The computer expresses your number. You must help the computer with the + and - signs that the number it says is greater than or smaller than your number, and use the = sign to express the number that the computer guessed is your number. Is.")
var smaller = 0
var greater = 1000
var getrandom = Math.floor(Math.random() * (greater - smaller + 1)) + smaller
var result = prompt("Remember your number was " + number + "\r\n" + "Is your number " + getrandom  + " ? " + " (+ Or - or =)? ")
var min = 0
var max = 1000
while ( result != "=" ) {
	if ( result == "+" ) {
		smaller = getrandom
		greater = max
		getrandom = Math.floor(Math.random() * (greater - smaller + 1)) + smaller
	}
	else if ( result == "-" ) {
		smaller = min
		greater = getrandom
		getrandom = Math.floor(Math.random() * (greater - smaller + 1)) + smaller
	}
	else {
		alert("Your answer is not defined")
		break
	}
	var result = prompt("Remember your number was " + number + "\r\n" + "Is your number " + getrandom  + " ? " + " (+ Or - or =)? ")
	if ( result == "+" ) {
		min = getrandom
	}
	else if ( result == "-" ) {
		max = getrandom
	}
}
if (result == "=" ) {
alert("Yes, the computer guessed your number. Your number is " + getrandom)
}
else {
alert("END")
}

