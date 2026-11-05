//primeiro projeto em C++ a configuração do projeto foi meio complicada mas acho que entendi a lógica
//código copiado da w3 schools
#include<iostream>
using namespace std;
#include <string>

/*#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!";
  return 0;
}*/

//desafio solo 1



// int main() {
//   // std:: cout << "Texto de C++ >_<";
//   // std:: cout << "teste com mais de um cout";
//   std:: cout << "I lov you <3" << "\n";
//   std:: cout << 100 + 43;

//   return 0;
// }



//cout não pula linha ou dá espaço sozinho
//cout pode imprimir números sem aspas e fazer operações


//desafio solo 2

// int main() {
//   std:: cout << "esse eh um codigo de C++" << "\n \n";
//   std:: cout << "eu gosto de evangelion \n";
//   int myNum = 143;
//   std:: cout << myNum;

//   return 0;
// }

// cout NÃO aceita caracteres especiais

/*diferentes jeitos de declarar variáveis:
int X = 1, Y = 2,
ou
int x, y, z;
x = y = z = 50;
separando tudo por vírgula
*/

//variáveis imutáveis são sinalizadas com const antes do atributo:
// const int pedra = 1

//desafio 3

// int main() {
//   const int base = 15;
//   const int altura = 8;
//   int areaTotal = base * altura;

//   cout << "a area total eh igual a: \n";
//   cout << areaTotal;
// }


// int main() {
//   int Input;

//   cout << "digite um numero! eu vou repiti-lo :D \n";

//   cin >> Input;

//   cout << Input << "!";
// }

/*float f1 = 35e3;
double d1 = 12E4;
cout << f1;
cout << d1;

números com potenciação

int myNum = 1000;
cout << myNum;
float myNum = 5.75;
cout << myNum;
double myNum = 19.99;
cout << myNum;*/

//booleanas (minhas favoritas) (˶>⩊<˶)

// int main() {
//   bool TuGostadepeixe = true;
//   bool Edefarinha = false;
//   cout << TuGostadepeixe;  // Outputs 1 (true)
//   cout << Edefarinha;  // Outputs 0 (false)
// }

// Variável Auto é o schrodinger das variáveis. o próprio compilador decide 
// auto myNum = 5; // int
// auto myFloatNum = 5.99f; // float
// auto myDoubleNum = 9.98; // double
// auto myLetter = 'D'; // char
// auto myBoolean = true; // bool
// auto myString = string("Hello"); // std::string

//detalhe. ele funciona como const ou seja: precisa atribuir valor assim que há declara


//desafio 4

// int main() {
//     string nome;
//     int idade;
//     float dinheiro;
//     char letra;

//     cout << "Qual o seu nome? ";  
//     getline(cin, nome); // Pega o nome completo, mesmo se tiver espaço

//     cout << "E a sua idade? ";
//     cin >> idade;

//     cout << "Quanto voce tem na conta do banco no dia presente, chefia? R$ ";
//     cin >> dinheiro;

//     cout << "Qual sua letra favorita? ";
//     cin >> letra;

//     cout << "\nOpa, " << nome << "! Voce tem " << idade << " anos de existencia, "
//          << "esta com R$ " << dinheiro << " na caixinha do Nubank "
//          << "e gosta da letra '" << letra << "'!\n";

//     return 0;
// }


//operadores (˶˃ᆺ˂˶)

/*int x = 10;
int y = 3;

cout << (x + y) << "\n"; // 13
cout << (x - y) << "\n"; // 7
cout << (x * y) << "\n"; // 30
cout << (x / y) << "\n"; // 3 (integer division)
cout << (x % y) << "\n"; // 1

int z = 5;
++z;
cout << z << "\n"; // 6
--z;
cout << z << "\n"; // 5

int x = 10;
int y = 3;
cout << (x / y) << "\n";   // Integer division, result is 3

double a = 10.0;
double b = 3.0;
cout << (a / b) << "\n";   // Decimal division, result is 3.333...
*/

// exemplo dos contadores

// int PessoasNumaSala = 0;

// // 3 people enter
// PessoasNumaSala++;
// PessoasNumaSala++;
// PessoasNumaSala++;

// cout << PessoasNumaSala << "\n"; // 3

// // 1 person leaves
// PessoasNumaSala--;

// cout << PessoasNumaSala << "\n"; // 2

// operadores compostos

/*int x = 10;

x += 5;  // same as x = x + 5
cout << x << "\n"; // 15

x *= 2;  // same as x = x * 2
cout << x << "\n"; // 30*/