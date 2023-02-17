import re

str_name = str(input("Full Name: "))
password = input("Password: ")

if len(password) < 8:
    print("Password is too short. It must be at least 8 characters long.")
    
if not re.search(r'[a-z]', password) or not re.search(r'[A-Z]', password):
    print("Password must contain at least one uppercase letter and one lowercase letter.")
    
if not re.search(r'\d', password):
    print("Password must contain at least one numeric digit.")
    
if not re.search(r'[!@#$%^&*(),.?":{}|<>]', password):
    print("Password must contain at least one special character.")
    
if re.search(r'[A-Z]{3,}', password):
    print("Password contains a sequence of consecutive uppercase letters.")
    
if re.search(r'[a-z]{3,}', password):
    print("Password contains a sequence of consecutive lowercase letters.")
    
if re.search(r'\d{3,}', password):
    print("Password contains a sequence of consecutive numeric digits.")
    
if re.search(r'(.)\1{2,}', password):
    print("Password contains a repeating sequence of characters.")
