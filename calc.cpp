#include <iostream>
#include <cmath>

int main(){
    int opcao, num1, num2;
    std::cout << "Escolha uma opcao:\n" << "1. Soma\n"
    << "2. Subtracao\n" << "3. Divisão\n" << "4. Multiplicacão\n";
    std::cin >> opcao;

switch (opcao)
{
case 1: 
   std::cout << "Primeiro numero: ";
   std::cin >> num1;
   std::cout << "Segundo número: "; 
   std::cin >> num2;
   std::cout << "Resultado: " << num1 + num2;
    break;

case 2:

    std::cout << "Escolha o primeiro número: ";
    std::cin >> num1;
  
    std::cout << "Escolha o segundo número: ";
    std::cin >> num2;
    std::cout << "Resultado: " << num1 - num2;
    break;

case 3:
    std::cout << "Escolha o primeiro número: ";
    std::cin >> num1;
    std::cout << "Escolha o segundo número: ";
    std::cin >> num2; 
     if (num2 == 0){
        std::cout << "Impossivel dividir por zero!";
        break;
    }
    std::cout << "Resultado: " << num1 / num2;
    
    break;

case 4:
std::cout << "Escolha o primeiro número: ";
    std::cin >> num1;
  
    std::cout << "Escolha o segundo número: ";
    std::cin >> num2;
    std::cout << "Resultado: " << num1 * num2;
    break;

}


 


}