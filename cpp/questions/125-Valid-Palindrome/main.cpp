// essa foi a minha solução enviada
#include <string>
#include <iostream>
#include <cctype>

class Solution{
    public:
        bool isPalindrome(std::string s) {
            std::string frase_inversa;
            std::string frase_limpa;

            // gerando o inverso
            for (int i = 0; i <= s.size()-1; i++) {
                if (s[i] != ' ' && std::isalnum(s[i])) {
                    frase_limpa += std::tolower(s[i]);
                }
            }

            for (int j = frase_limpa.size()-1; j >= 0; j--) {
                    frase_inversa += frase_limpa[j];
            }


            return  (frase_limpa == frase_inversa);

    }
};


int main(){
    Solution minha_solucao;
    bool result = minha_solucao.isPalindrome("A man, a plan, a canal: Panama");

    std::cout << "Solucao: " << result << std::endl;

    return 0;
}
