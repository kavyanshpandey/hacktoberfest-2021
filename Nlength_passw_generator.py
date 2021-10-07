import random
import string as sg


# letters to generate password from
letters = list(sg.ascii_letters + sg.digits + "$!@#()%^&*")

def password_generator():
    
	## Taking password length as input from the user
	passwd_length = int(input("Enter password length: "))

	## shuffling the letters
	random.shuffle(letters)
	
	## picking random letters from the list and storing in passwd
	passwd = []
	for i in range(passwd_length):
		passwd.append(random.choice(letters))

	## Again ,shuffling the generated password
	random.shuffle(passwd)

	## converting the list to string and storing into password variable.

	password="".join(passwd)

	return password


