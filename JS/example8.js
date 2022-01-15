smaller = 1
greater = 1000
var number = Math.floor(Math.random() * (greater - smaller + 1)) + smaller
alert("The computer considers a number between 1 and 1000." + "\r\n" + "You have to guess that number." + "\r\n" + "Note that the computer helps you by saying that your number is bigger or smaller than its number.")
var guess = Number(prompt("Please enter your guess number : "))
if (guess > 1000) {
	alert("I said less than 1000")
	alert("Reload this Page")
}
else if (guess < 1) {
	alert("I said more than 1")
	alert("Reload this Page")
}
else {
	while ( guess != number ) {
		if (guess > number) {
			alert("My number is smaller than " + guess)
		}
		else if (guess < number) {
			alert("My number is bigger than " + guess)
		}
		else {
			break
		}
		guess = Number(prompt("Please enter your guess number : "))
		if (guess > 1000) {
			alert("I said less than 1000")
			alert("Reload this Page")
			break
		}
		else if (guess < 1) {
			alert("I said more than 1")
			alert("Reload this Page")
			break
		}
	}
}
if (guess == number) {
	alert("good job. You guessed the number correctly. The number was " + number)
}
else {
	alert("END")
}
