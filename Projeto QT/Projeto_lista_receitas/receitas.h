#ifndef RECEITAS_H
#define RECEITAS_H

#include <QString>


class Receitas
{
private:

    QString nome;
    QString categoria;
    QString dificuldade;
    double estrelas;

    //codigo novo

    QString link;

public:
    Receitas();

    QString getNome() const;
    void setNome(const QString &value);

    QString getCategoria() const;
    void setCategoria(const QString &value);

    QString getDificuldade() const;
    void setDificuldade(const QString &value);

    double getEstrelas() const;
    void setEstrelas(double value);

    QString classificacao();

    //codigo novo

    QString getLink() const;
    void setLink(const QString &value);
};

#endif // RECEITAS_H
