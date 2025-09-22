def DobroNumero(n):
    for i in n:
        if i == 0:
            break
        if i < 0:
            continue
        if i % 2 == 0:
            print(f"O dobro de {i} é {i * 2}")

def main():
    numeros = []
    while True:
        num = int(input("Digite um número (0 para sair): "))
        numeros.append(num)
        if num == 0:
            break
    DobroNumero(numeros)