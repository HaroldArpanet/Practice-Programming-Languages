var name = prompt("Please enter your first and last name and separate by underline : ")
var number = name.length - 1
for ( i = 0 ; i <= number ; i++ ) {
	var result = name[i]
	if (result == "_") {
		var j = i
		break	
	}
}
var first = " "
for ( i = 0 ; i < j ; i++ ) {
	if ( i == 0 ) {
		first = name[i]
	}
	else {
		first = first + name[i]
	}
}
j = j + 1
var last = " "
for ( j ; j <= number ; j++ ) {
	if ( j == i + 1 ) {
		last = name[j]
	}
	else {
		last = last + name[j]
	}
}
alert("Your First name : " + first + "\r\n" + "Your Last name : " + last)
