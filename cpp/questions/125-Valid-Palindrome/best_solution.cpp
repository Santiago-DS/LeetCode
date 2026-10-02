// solucao da IA
#include <string>
#include <iostream>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int esq = 0;                  // Ponteiro/índice do início
        int dir = s.size() - 1;       // Ponteiro/índice do fim

        while (esq < dir) {
            // Avança o ponteiro da esquerda se não for caractere válido
            if (!std::isalnum(s[esq])) {  //isalnum veririca se e um caractere alfanumerico, logo o if verifica se NAO e alfanumerico
                esq++;
                continue;
            }

            // Recua o ponteiro da direita se não for caractere válido
            if (!std::isalnum(s[dir])) {
                dir--;
                continue;
            }

            // Compara os dois caracteres válidos convertidos para minúsculo
            if (std::tolower(s[esq]) != std::tolower(s[dir])) {
                return false; // Se forem diferentes, não é palíndromo!
            }

            // Se forem iguais, move ambos os ponteiros para o centro
            esq++;
            dir--;
        }

        return true; // Se os ponteiros se cruzaram sem erros, é palíndromo!
    }
};

int main() {
    Solution minha_solucao;
    bool result = minha_solucao.isPalindrome("A man, a plan, a canal: Panama");

    std::cout << "Solucao: " << (result ? "true" : "false") << std::endl;

    return 0;
}