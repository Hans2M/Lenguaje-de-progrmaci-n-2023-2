class Libro {
  private:
    string titulo;
    string autor;
    int paginas;

  public:
    Libro(string t, string a, int p) {
      titulo = t;
      autor = a;
      paginas = p;
    }
    void mostrar() {
      cout << "Titulo: " << titulo << ", Autor: " << autor << ", Paginas: " << paginas << endl;
    }
