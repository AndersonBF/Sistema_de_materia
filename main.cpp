#include <iostream>
#include <stdlib.h>
#include "aluno.hpp"
#include "professor.hpp"
#include "materia.hpp"
#include <vector>


using namespace std;

int main () {
    Materia materia1;
    Professor professor1;
    Aluno aluno1;
    Aluno aluno2;

//    Aluno aluno2;
    string nome;
    cin >> nome;
    aluno1.setNome(nome);
    cin >> nome;
    aluno2.setNome(nome);
    //cin >> aluno.setNome() ;
    //cin >> aluno.nome();
    //aluno1.setNome("aluno");
    professor1.setNome("Leandro");
    aluno1.setRA(2331980);
    materia1.setNome("materiacomnome");
    materia1.setProfessor(professor1);
    materia1.matricular(aluno1);
    materia1.matricular(aluno2);
    //lista_alunos[1];
//    lista_alunos.size();
    cout << "Materia: " << materia1.getNome() << endl;
     cout << "Nome: " << aluno1.getNome() << endl;
     cout << "RA: " << aluno1.getRA() << endl;
     cout << "lista alunos:" << endl;
     materia1.printaralunos();
     cout << "Nome do professor: " << professor1.getNome() << endl;
    return 0;
    //sem comentarios
}
