
// Draw a rectangle //

var row = 10
var column = 10
while ( row >= 1 ) {
	while ( column >= 1 ) {
		document.write("*")
		column--
		}
	column = 10
	document.write("<br>")
	row--
}

// Draw a triangle //

var row = 10
var column
while ( row >= 1 ) {
	column = row
	while ( column >= 1 ) {
		document.write("*")
		column--
	}
	document.write("<br>")
	row--
}

// Draw a triangle //

var row = 1
var column
while ( row <= 10 ) {
	column = row
	while ( column >= 1 ) {
		document.write("*")
		column--
	}
	document.write("<br>")
	row++
}
