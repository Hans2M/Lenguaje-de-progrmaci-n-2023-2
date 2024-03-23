class Animal {
public:
    virtual void comer() {
        std::cout << "El animal come" << std::endl;
    }
};

class Mamifero : public Animal {
public:
    void amamantar() {
        std::cout << "El mamífero amamanta a sus crías" << std::endl;
    }
};

class Perro : public Mamifero {
public:
    void ladrar() {
        std::cout << "El perro ladra" << std::endl;
    }
};
