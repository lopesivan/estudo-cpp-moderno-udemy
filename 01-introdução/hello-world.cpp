#include <iostream>
#include <string>

class HelloWorld {

public:
    // construtor!
    HelloWorld() {
        this->_mensagem = "Hello World!";
    }
    HelloWorld(std::string mensagem) {
        this->_mensagem = mensagem;
    }

    // metodo show
    void show() const {
        std::cout << "mensagem: "
                  << this->_mensagem
                  << std::endl;
    }

private:
    std::string _mensagem;
};

//
// main
//
int main() {
    HelloWorld hello_world ("ola mundo");
    hello_world.show();

    HelloWorld hello_world2;
    hello_world2.show();

    return 0; // success return
}

// vim: set ts=4 sw=4 tw=78 ft=cpp:
