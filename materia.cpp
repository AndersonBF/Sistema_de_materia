#include "materia.hpp"
#include "professor.hpp"
#include <iostream>
using namespace std;

void Materia::setNome(string nome){
    this->nome = nome;
}

string Materia::getNome(){
    return this->nome;
}

void Materia::setSemestre(int semestre){
    this->semestre = semestre;
}

int Materia::getSemestre(){
    return semestre;
}

void Materia::setProfessor (Professor professor1) {
    this->professor1 = professor1;
}

void Materia::matricular(Aluno aluno) {
    this->lista_alunos.push_back(aluno);
    //cout << "aluno matriculado" << endl;
}

void Materia::printaralunos() {
    for(auto aluno : lista_alunos) {
        cout << "- " << aluno.getNome() << endl;
    }
}



