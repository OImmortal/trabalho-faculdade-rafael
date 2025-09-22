import java.util.ArrayList;

class Livro {
    String titulo;
    String autor;
    int ano;

    Livro(String titulo, String autor, int ano) {
        this.titulo = titulo;
        this.autor = autor;
        this.ano = ano;
    }
}

public class Main {
    public static void main(String[] args) {
        ArrayList<Livro> livros = new ArrayList<>();
        livros.add(new Livro("Dom Casmurro", "Machado de Assis", 1899));
        livros.add(new Livro("Memórias Póstumas", "Machado de Assis", 1881));
        livros.add(new Livro("O Alienista", "Machado de Assis", 1882));

        for (Livro l : livros) {
            System.out.println(l.titulo);
        }
    }
}
