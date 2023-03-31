#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>

using namespace std;

class Professor {
    private:
        string nome;
        string email;
    public:
        void setNome (string nome);
        string getNome();
        void setEmail (string email);
        string getEmail();
};

#endif
