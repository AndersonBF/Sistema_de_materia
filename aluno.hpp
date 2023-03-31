#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>

using namespace std;

class Aluno {
    private:
        string nome;
        int RA;
    public:
        void setNome (string nome);
        string getNome();
        void setRA(int RA);
        int getRA();
       // Aluno(string nome, int RA) {
         //   this-> nome = nome;
           // this-> RA = RA;
        //}
        //criarAluno(string nome,int RA);
};


#endif
