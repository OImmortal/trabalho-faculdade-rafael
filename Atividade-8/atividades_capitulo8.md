# Atividades para Casa – Capítulo 8

## Atividade 1 – Reescrevendo código sem `goto`

Você recebeu o seguinte pseudocódigo, escrito de forma semelhante ao estilo das primeiras versões do Fortran, utilizando `goto`:

```text
i := 1
goto check

loop:
    print(i)
    i := i + 1

check:
    if (i <= 10) then
        goto loop
```

**Tarefas:**

1. Reescreva o código acima utilizando um laço de repetição pré-teste (`while`) em uma linguagem de sua escolha (C, Java, Python, etc.).
2. Reescreva novamente utilizando um laço de repetição controlado por contador (`for`).
3. Compare os três códigos (original com `goto`, versão com `while` e versão com `for`) e escreva um pequeno parágrafo discutindo qual forma é mais legível e por quê.

Resposta: Utilizar laços como `while` e `for`, é melhor do que usar `goto` porque tornam o código mais simples e entendivel. O uso de `goto` pode levar a fluxos de execução confusos, dificultando a manutenção. O laço `while` mostra que a repetição depende de uma condição, enquanto o laço `for` é ainda mais indicado quando ja se sabe o número de repetições, ja que em uma única linha se inicializa o loop. Assim, o `for` é geralmente mais legível e direto, facilitando a compreensão.

---

## Atividade 2 – Seleção múltipla em diferentes linguagens

Muitos programas oferecem menus interativos. Suponha que você precisa implementar um menu com as seguintes opções:

1. Calcular o quadrado de um número.
2. Calcular o fatorial de um número.
3. Sair do programa.

**Tarefas:**

1. Implemente esse menu em **C** utilizando `switch/case`.
2. Implemente o mesmo menu em **Python**, utilizando apenas `if/elif/else`.
3. Execute os dois programas e compare as soluções em relação à clareza e quantidade de código.
4. Escreva um comentário final destacando em qual linguagem foi mais simples de implementar e justificar o motivo.

Resposta: Codificar em Python foi bem mais fácil e direto que em C. A sintaxe é muito mais limpa (nada de declarar tipos, ponto e vírgula ou chaves!), e a entrada e saída são super simplificadas (input() e print() versus scanf() e printf()).

---

## Atividade 3 – Explorando alternativas ao `goto`

Historicamente, o `goto` foi usado para resolver diferentes tipos de desvio. Hoje, a maioria das linguagens fornece alternativas como `break`, `continue` e `return`.

**Tarefas:**

1. Escreva um programa que percorra uma lista de números inteiros e:
   - Pare imediatamente a execução ao encontrar o número 0 (`break`).
   - Pule os números negativos sem processá-los (`continue`).
   - Retorne o dobro do primeiro número par encontrado (`return`).
2. Comente sobre como seria a implementação desse mesmo programa utilizando apenas `goto` e rótulos, destacando as vantagens da abordagem moderna.

Resposta:

o código bem complicado, com um monte de saltos e chances de dar erro. Já break, continue e return deixam tudo mais claro, mostram o que o programador quer fazer e facilitam a manutenção do código.
