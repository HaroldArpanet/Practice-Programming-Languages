
// Draw a rectangle //

for ( var row = 10 ; row >= 1 ; row-- ) {
	for ( var column = 10 ; column >= 1 ; column-- ) {
	document.write("*")
	}
	document.write("<br>")
}

// Draw a triangle //

for ( var row = 10 ; row >= 1 ; row-- ) {
	for ( var column = row ; column >= 1 ; column-- ) {
	document.write("*")
	}
	document.write("<br>")
}

// Draw a triangle //

for ( var row = 1 ; row <= 10 ; row++ ) {
	for ( var column = row ; column >= 1 ; column-- ) {
	document.write("*")
	}
	document.write("<br>")
}
