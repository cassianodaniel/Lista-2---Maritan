#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <iostream>
#include <exception>



using namespace std;

class ValorAbaixoException : public exception{
    protected:
    public:
        ValorAbaixoException();
};

#endif // VALORABAIXOEXCEPTION_H
