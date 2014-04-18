function rotate(str, key) {
	var result = "";
	for (var i = 0; i < str.length; i++) {
		var c = str.charCodeAt(i);
		if      (c >= 65 && c <=  90) result += String.fromCharCode(mod(c - 65 + key, 26) + 65);  // Uppercase
		else if (c >= 97 && c <= 122) result += String.fromCharCode(mod(c - 97 + key, 26) + 97);  // Lowercase
		else result += str.charAt(i);  // Copy
	}
    console.log(result);
	return result;
}

function mod(x, y) {
	return (x % y + y) % y;
}


rotate(4,"Hi my name is Dylan");
