def calcular_quadrado(numero):
    return numero * numero

def calcular_fatorial(numero):
    if numero == 0 or numero == 1:
        return 1
    else:
        return numero * calcular_fatorial(numero - 1)

def main():
    
    escolha = -1
    while escolha != 3:
        print("1 - Calcular quadrado de um número")
        print("2 - Calcular fatorial de um número")
        print("3 - Sair")

        escolha = int(input("Escolha uma opção: "))

        if escolha == 1:
            num = int(input("Digite um número para calcular o quadrado: "))
            resultado = calcular_quadrado(num)
            print(f"O quadrado de {num} é {resultado}")
        elif escolha == 2:
            num = int(input("Digite um número para calcular o fatorial: "))
            resultado = calcular_fatorial(num)
            print(f"O fatorial de {num} é {resultado}")
        elif escolha == 3:
            print("Saindo...")
        else:
            print("Opção inválida. Tente novamente.")

main()