#include "aluno.hpp"

using namespace std;

void Aluno::setNome(string nome){
    this->nome = nome;
}

string Aluno::getNome(){
    return this->nome;
}

void Aluno::setRA(int RA){
    this->RA = RA;
}

int Aluno::getRA(){
    return RA;
}

//criarAluno(string nome, int RA) {;

