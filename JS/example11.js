var name = prompt("Please enter your first and last name and separate by underline : ")
var number = name.length
var underline = false
var first = " "
var last = " "
for ( i = 0 ; i < number ; i ++ ) {
	if ( name[i] == "_" ) {
		underline = true
		continue
	}
	else if ( underline == false ) {
		first = first + name[i]
	}
	else if ( underline == true ) {
		last = last + name[i]
	}
}
alert("Your First name : " + first + "\r\n" + "Your Last name : " + last)
