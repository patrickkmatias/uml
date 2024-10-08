from cs50 import get_string

s = get_string("Você concorda? ")

s = s.upper()

if s in ["S", 'SIM']:
    print("Eu concordo.")
elif s in ["N", "NAO", "NÃO"]:
    print("Não concordo")
