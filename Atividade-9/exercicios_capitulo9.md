# Exercícios – Capítulo 9: Subprogramas

## Exercício 1 – Passagem de Parâmetros por Valor e por Referência

Considere o seguinte pseudocódigo de uma função que tenta dobrar o valor de um número:

```text
procedure dobrar(x)
    x := x * 2
end
```

1. Implemente esse subprograma em **C** duas vezes:

   - A primeira versão recebendo o parâmetro **por valor**.
   - A segunda versão recebendo o parâmetro **por referência** (usando ponteiros).

2. Escreva um programa principal que:
   - Crie uma variável inteira com valor inicial 10.
   - Chame a função `dobrar` por valor e exiba o resultado.
   - Chame a função `dobrar` por referência e exiba o resultado.

**Questões:**

- Qual a diferença observada entre as duas versões?
- Por que o valor da variável só se altera na versão por referência?
- Relacione essa diferença com as estratégias de passagem de parâmetros discutidas no Capítulo 9.

Diferença observada:

Na versão por valor, a variável fora da função não muda, porque a função recebe apenas uma cópia.

Na versão por referência, a variável é alterada, pois passamos o endereço de memória da variável original.

Por que só altera na versão por referência?
Porque nesse caso a função acessa diretamente a variável original através do ponteiro, modificando-a na memória.

Relação com Capítulo 9:

Por valor: a função só recebe uma cópia → mudanças não afetam a variável original.

Por referência: a função recebe um "atalho" para a variável → mudanças afetam diretamente o valor original.

Essa diferença é um exemplo clássico das estratégias de passagem de parâmetros estudadas: cópia vs. referência.

---

## Exercício 2 – Corrotinas em GoLang (primeiro contato)

As **corrotinas** permitem a execução concorrente de rotinas dentro de um programa. Em Go, isso é feito com a palavra-chave `go`.

1. Crie um arquivo chamado `main.go`.
2. Implemente o seguinte programa simples:

```go
package main

import (
    "fmt"
    "time"
)

func escrever(texto string) {
    for i := 0; i < 5; i++ {
        fmt.Println(texto, i)
        time.Sleep(time.Millisecond * 500)
    }
}

func main() {
    go escrever("Corrotina")  // executa em paralelo
    escrever("Função normal") // executa no fluxo principal
}
```

3. Compile e execute o programa com:
   ```bash
   go run main.go
   ```

**Questões:**

- O que acontece com a ordem das mensagens exibidas?
- Por que as mensagens da corrotina e da função normal se intercalam?
- Relacione esse comportamento com a definição de **corrotinas** estudada no Capítulo 9.

O que acontece com a ordem das mensagens?
Elas aparecem intercaladas de forma imprevisível. A função normal e a corrotina compartilham o tempo de execução.

Por que se intercalam?
Porque as corrotinas permitem que várias funções sejam executadas de forma concorrente, o agendador do Go alterna a execução entre elas.

Relação com Capítulo 9:

Subprogramas tradicionais seguem execução sequencial.

Corrotinas permitem que várias funções cooperem na execução, alternando sem esperar que uma termine.

Isso ilustra o conceito de programação concorrente, essencial para sistemas modernos.
