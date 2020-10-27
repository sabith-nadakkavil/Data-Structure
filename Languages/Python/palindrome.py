#Input a value
value = input("Enter a word or phrase here: ")

#Remove special characters and lowercase the text
import re
value = re.sub('[^A-Za-z0-9]+', ' ', value)
value = value.replace(" ", "").lower()
max = len(value) - 1 

#Palindrome check
val = True
for i in range(len(value)):
    for k in range(len(value)):
        if (value[i] != value[max - i]):
            val = False

#Display the result       
if (val):
    print("Palindrome!")
else:
    print("Not Palindrome.")
