from cs50 import get_int

notas = []

for i in range(3):
    nota = get_int("Nota: ")
    notas += [nota]


media = sum(notas) / len(notas)

print(f"Média: {media}")
