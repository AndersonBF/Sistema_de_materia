#pragma once

#include <string>
#include "professor.hpp"
#include "aluno.hpp"
#include <vector>

using namespace std;

class Materia {
    private:
        string nome;
        int semestre;
        Professor professor1;
        vector<Aluno> lista_alunos;
    public:
        //falta colocar o professor e lista de vetores
        void setProfessor ( Professor professor1);
        void setNome (string nome);
        string getNome();
        void setSemestre (int semestre);
        int getSemestre();
        void matricular(Aluno aluno);
        void printaralunos ();

};



