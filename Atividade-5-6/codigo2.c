#include <stdio.h>

struct Livro {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
};

int main() {
    struct Livro l1 = {"Dom Casmurro", "Machado de Assis", 1899};
    printf("Titulo: %s\nAutor: %s\nAno: %d\n", l1.titulo, l1.autor, l1.anoPublicacao);
    return 0;
}
