#include "receitas.h"

QString Receitas::getNome() const
{
    return nome;
}

void Receitas::setNome(const QString &value)
{
    nome = value;
}

QString Receitas::getCategoria() const
{
    return categoria;
}

void Receitas::setCategoria(const QString &value)
{
    categoria = value;
}

QString Receitas::getDificuldade() const
{
    return dificuldade;
}

void Receitas::setDificuldade(const QString &value)
{
    dificuldade = value;
}

double Receitas::getEstrelas() const
{
    return estrelas;
}

void Receitas::setEstrelas(double value)
{
    estrelas = value;
}

QString Receitas::classificacao()
{

    if(estrelas <= 1){
        return "Ruim";
    }else if((estrelas > 1)and(estrelas < 3)){
        return "Razoável";
    }else if((estrelas > 2)and(estrelas < 4)){
        return "Boa";
    }else if((estrelas > 3)and(estrelas < 5)){
        return "Ótima";
    }else{
        return "Excelente";
    }
}

//codigo novo

QString Receitas::getLink() const
{
    return link;
}

void Receitas::setLink(const QString &value)
{
    link = value;
}

//codigo novo

Receitas::Receitas()
{

}
