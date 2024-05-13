#include <iostream>

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Erro: Divisão por zero!" << std::endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    
    std::cout << "Soma: " << soma(num1, num2) << std::endl;
    std::cout << "Subtração: " << subtracao(num1, num2) << std::endl;
    std::cout << "Multiplicação: " << multiplicacao(num1, num2) << std::endl;
    std::cout << "Divisão: " << divisao(num1, num2) << std::endl;
    
    return 0;
}