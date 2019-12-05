#include "livro.h"

Livro::Livro()
{

}



void Livro::inserirReceita(Receitas R)
{
    livro.push_back(R);
}

bool Livro::evitarRepitir(Receitas R)
{
    if(livro.size() > 0){
            for(int i = 0; i < livro.size(); i++){
                if(R.getNome() == livro[i].getNome()){
                    return 1;
                }
            }

        }
     return 0;

}

void Livro::resetarReceitas()
{
    livro.clear();

}

double Livro::getMediaDasReceitas()
{
    double temp1=0;
    double med=0;

    if(livro.size()>0){
     for(auto a : livro){
         temp1=temp1+a.getEstrelas();
     }
     med= temp1/livro.size();
     QString::number(med,'f',1);
     return med;
    }else return med;
}

void Livro::OrdenarPorNome()
{
      std::sort(livro.begin(),livro.end(),organizarnomes);
}

void Livro::OrdenarPorEstrelas()
{
    std::sort(livro.begin(),livro.end(),organizarestrelas);
}

void Livro::OrdenarPorDificuldade()
{
    std::sort(livro.begin(),livro.end(),organizardificuldade);
}

//codigo novo

void Livro::salvarDados(QString file)
{
    QFile arquivo(file);

       arquivo.open(QIODevice::WriteOnly);

       for(auto a:livro){
           QString linha = a.getNome() + "," + a.getCategoria() + "," + a.getDificuldade() + "," + QString::number(a.getEstrelas())+ "," + a.getLink()+ "\n";
           arquivo.write(linha.toLocal8Bit());
       }
       arquivo.close();
}

void Livro::carregarDados(QString file)
{
    QFile arquivo(file);
    arquivo.open(QIODevice::ReadOnly);

    QString linha;
    QStringList dados;
    while(!arquivo.atEnd()){
        Receitas temp;
        linha = arquivo.readLine();
        dados = linha.split(",");
        temp.setNome(dados[0]);
        temp.setCategoria(dados[1]);
        temp.setDificuldade(dados[2]);
        temp.setEstrelas(dados[3].toDouble());
        temp.setLink(dados[4]);
        inserirReceita(temp);
    }
    arquivo.close();
}

//codigo novo;

int Livro::size()
{
    return livro.size();
}

Receitas Livro::operator[](int indice)
{
    return livro[indice];
}



void Livro::eraseNome(QString txt)
{
    for(int i = 0; i < livro.size(); i++){
            if(livro[i].getNome() != txt){
                livro.erase(livro.begin()+i);
            }
    }
}

void Livro::eraseCategoria(QString txt)
{
    for(int i = 0; i < livro.size(); i++){
            if(livro[i].getCategoria() != txt){
                livro.erase(livro.begin()+i);
            }
    }
}

void Livro::eraseDificuldade(QString txt)
{
    for(int i = 0; i < livro.size(); i++){
            if(livro[i].getDificuldade() != txt){
                livro.erase(livro.begin()+i);
            }
    }
}

void Livro::eraseEstrelas(QString txt)
{
    for(int i = 0; i < livro.size(); i++){
            if(livro[i].getEstrelas() != txt.toDouble()){
                livro.erase(livro.begin()+i);
            }
    }
}

//codigo novo

void Livro::eraseLink(QString txt)
{
    for(int i = 0; i < livro.size(); i++){
            if(livro[i].getLink() != txt){
                livro.erase(livro.begin()+i);
            }
    }
}

//codigo novo

bool Livro::apagarReceita(QString txt)
{
    for(int i = 0; i<livro.size(); i++){
            if(livro[i].getNome() == txt){
                livro.erase(livro.begin()+i);
            }
        }return 1;
}



bool organizarnomes(Receitas a, Receitas b){
    return a.getNome()<b.getNome();
}

bool organizarestrelas(Receitas a, Receitas b){
    return a.getEstrelas()>b.getEstrelas();
}

bool organizardificuldade(Receitas a, Receitas b){
    return a.getDificuldade().size()<b.getDificuldade().size();
}
