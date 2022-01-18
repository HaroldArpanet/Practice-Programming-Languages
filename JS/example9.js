var name = prompt("Please enter your first and last name and separate by underline : ")
function split(flname) {
	return flname.split("_")
}
var result = split(name)
alert("Your First name : " + result[0] + "\r\n" + "Your Last name : " + result[1])
