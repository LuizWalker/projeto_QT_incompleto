#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabela_dados->setColumnWidth(0,160);
    ui->tabela_dados->setColumnWidth(1,135);
    ui->tabela_dados->setColumnWidth(2,120);
    ui->tabela_dados->setColumnWidth(3,70);
    ui->tabela_dados->setColumnWidth(4,100);
    ui->tabela_dados->setColumnWidth(5,100);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_BT1_cadastro_clicked()
{

       Receitas receita;
       Livro l;

       QString msg;
       double stars=0;


       if(ui->RB4->isChecked()){
           stars=1;
       }else if(ui->RB5->isChecked()){
           stars=2;
       }else if(ui->RB6->isChecked()){
           stars=3;
       }else if(ui->RB7->isChecked()){
           stars=4;
       }else if(ui->RB8->isChecked()){
           stars=5;
       }

       if(ui->input_link->text().size()<3){
          msg="É obrigatório preencher corretamente todos os campos";
           QMessageBox::warning(this,"Erro",msg);
        }else if(ui->input_nome_receita->text().size()<3){
           msg="É obrigatório preencher corretamente todos os campos";
           QMessageBox::warning(this,"Erro",msg);
       }else if(ui->input_dificuldade->currentText().size()==0){
           msg="É obrigatório preencher corretamente todos os campos";
           QMessageBox::warning(this,"Erro",msg);
       }else if(stars<1){
           msg="É obrigatório preencher corretamente todos os campos";
           QMessageBox::warning(this,"Erro",msg);
       }else if(ui->input_categoria->currentText().size()==0){
           msg="É obrigatório preencher corretamente todos os campos";
           QMessageBox::warning(this,"Erro",msg);

       } else if((stars>0)and(ui->input_nome_receita->text().size()>3)and(ui->input_dificuldade->currentText().size()!=0)and(ui->input_categoria->currentText().size()!=0)and(ui->input_link->text().size()>3)){

           receita.setNome(ui->input_nome_receita->text().toLower());
           receita.setCategoria(ui->input_categoria->currentText().toLower());
           receita.setDificuldade(ui->input_dificuldade->currentText().toLower());
           receita.setEstrelas(stars);
           receita.setLink(ui->input_link->text());

           int quantidade_linhas = ui->tabela_dados->rowCount();

           if(livro.evitarRepitir(receita) == 1){

           QMessageBox::critical(this,"Atenção: ","Essa receita já foi cadastrada");

           }else{
            //codigo novo//
           ui->input_nome_receita->clear();
           ui->input_link->clear();
           ui->input_categoria->setCurrentIndex(0);
           ui->input_dificuldade->setCurrentIndex(0);
            //codigo novo//


              ui->tabela_dados->insertRow(quantidade_linhas);

              inserirNaTabela(receita,quantidade_linhas);


              livro.inserirReceita(receita);
              atualizarDados();
           }
       }


}

void MainWindow::atualizarDados()
{
    ui->numero_receitas->setText(QString::number(livro.size()));
    ui->media_estrelas_geral->setText(QString::number(livro.getMediaDasReceitas(),'f',1));
}

void MainWindow::inserirNaTabela(Receitas R, int linha)
{
        ui->tabela_dados->setItem(linha,0, new QTableWidgetItem(R.getNome()));
        ui->tabela_dados->setItem(linha,1, new QTableWidgetItem(R.getCategoria()));
        ui->tabela_dados->setItem(linha,2, new QTableWidgetItem(R.getDificuldade()));
        ui->tabela_dados->setItem(linha,3, new QTableWidgetItem(QString::number(R.getEstrelas())));
        //codigo novo//
        ui->tabela_dados->setItem(linha,4,new QTableWidgetItem(R.getLink()));
        //codigo novo//
        ui->tabela_dados->setItem(linha,5, new QTableWidgetItem(R.classificacao()));


}

void MainWindow::on_BT_ordenarPorNome_clicked()
{
    livro.OrdenarPorNome();
    ui->tabela_dados->clearContents();
    for(int i=0; i<livro.size();i++){
        inserirNaTabela(livro[i],i);
    }
}

void MainWindow::on_BT_organizarPelasEstrelas_clicked()
{
    livro.OrdenarPorEstrelas();
    ui->tabela_dados->clearContents();
    for(int i=0; i<livro.size();i++){
        inserirNaTabela(livro[i],i);
    }
}

void MainWindow::on_OrganizarPelaDificuldade_clicked()
{
    livro.OrdenarPorDificuldade();
    ui->tabela_dados->clearContents();
    for(int i=0; i<livro.size();i++){
        inserirNaTabela(livro[i],i);
    }
}


void MainWindow::on_tabela_dados_cellDoubleClicked(int row, int column)
{
    Receitas receita;


    if(column == 0){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Nome", "Você deseja editar este item?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Modificar o nome", "Digite o novo nome", QLineEdit::Normal,"",&ok);
            if(ok and txt.size()>3){
                receita.setNome(txt);
                receita.setCategoria(livro[row].getCategoria());
                receita.setDificuldade(livro[row].getDificuldade());
                receita.setEstrelas(livro[row].getEstrelas());
                receita.setLink(livro[row].getLink());
                livro.eraseNome(txt);
                livro.inserirReceita(receita);
                ui->tabela_dados->setItem(row, column, new QTableWidgetItem(receita.getNome()));
            }else{
                QMessageBox::critical(this, "Erro", "O nome é inválido.");
            }
        }
    }
    if(column == 1){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Categoria", "Você deseja editar este item?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Mudar a categoria", "Digite a nova categora", QLineEdit::Normal,"",&ok);
            if(ok and ((txt.toLower()=="sobremesa")||(txt.toLower()=="salada")||(txt.toLower()=="prato principal")||(txt.toLower()=="acompanhamento")||(txt.toLower()=="aperitivo")||(txt.toLower()=="lanche")||(txt.toLower()=="molho"))){

                receita.setNome(livro[row].getNome());
                receita.setCategoria(txt);
                receita.setDificuldade(livro[row].getDificuldade());
                receita.setEstrelas(livro[row].getEstrelas());
                receita.setLink(livro[row].getLink());
                livro.eraseCategoria(txt);
                livro.inserirReceita(receita);
                ui->tabela_dados->setItem(row, column, new QTableWidgetItem(receita.getCategoria()));
            }else{
                QMessageBox::critical(this, "Erro", "Categoria Inválida.");
            }
        }
    }
    if(column == 2){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Dificuldade", "Alterar a dificuldade?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Alterar grau de dificuldade", "Digite o novo grau", QLineEdit::Normal,"",&ok);
            if(ok and ((txt.toLower()=="fácil")||(txt.toLower()=="média")||(txt.toLower()=="dificil")||(txt.toLower()=="profissional"))){

                receita.setNome(livro[row].getNome());
                receita.setCategoria(livro[row].getCategoria());
                receita.setDificuldade(txt);
                receita.setEstrelas(livro[row].getEstrelas());
                receita.setLink(livro[row].getLink());
                livro.eraseDificuldade(txt);
                livro.inserirReceita(receita);
                ui->tabela_dados->setItem(row, column, new QTableWidgetItem(receita.getDificuldade()));
            }else{
                QMessageBox::critical(this, "Erro", "Grau de Difilcudade inválido");
            }
        }
    }
    if(column == 3){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar o número de estrelas", "Você deseja editar número de estrelas?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Alterar o número de estrelas", "Digite a nova classificação:",QLineEdit::Normal,"",&ok);
            if(ok and (txt.toDouble()>=0 and txt.toDouble()<=5)){

                receita.setNome(livro[row].getNome());
                receita.setCategoria(livro[row].getCategoria());
                receita.setDificuldade(livro[row].getDificuldade());
                receita.setEstrelas(txt.toDouble());
                receita.setLink(livro[row].getLink());
                livro.eraseEstrelas(txt);
                livro.inserirReceita(receita);
                ui->tabela_dados->setItem(row, column, new QTableWidgetItem(QString::number(receita.getEstrelas())));
            }else{
                QMessageBox::critical(this, "Erro", "O objeto a ser editado está vazio ou tem valor indevido.");
            }
        }
    }

    if(column == 4){
        QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Link", "Você deseja editar este item?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Modificar o link", "Digite o novo link", QLineEdit::Normal,"",&ok);
            if(ok and txt.size()>3){
                receita.setNome(livro[row].getNome());
                receita.setCategoria(livro[row].getCategoria());
                receita.setDificuldade(livro[row].getDificuldade());
                receita.setEstrelas(livro[row].getEstrelas());
                receita.setLink(txt);
                livro.eraseLink(txt);
                livro.inserirReceita(receita);
                ui->tabela_dados->setItem(row, column, new QTableWidgetItem(receita.getNome()));
            }else{
                QMessageBox::critical(this, "Erro", "O link é inválido.");
            }
        }
    }

   atualizarDados();
}

//codigo novo;

void MainWindow::on_actionSalvar_triggered()
{
    QString filename;
    filename = QFileDialog::getSaveFileName(this,"Salvar Arquivo","","*.csv");
    livro.salvarDados(filename);
}

void MainWindow::on_actionCarregar_triggered()
{
    QString filename;
      filename = QFileDialog::getOpenFileName(this, "Abrir Arquivo","","*.csv");
      livro.carregarDados(filename);

      for(int i=0;i<livro.size();i++){
          ui->tabela_dados->insertRow(i);
          inserirNaTabela(livro[i],i);
      }
      atualizarDados();
}

void MainWindow::on_actionExcluir_triggered()
{
    QMessageBox::StandardButton resp = QMessageBox::question(this, "Excluir Receitas", "Você deseja excluir um receita?");
        if(resp == QMessageBox::Yes){
            bool ok;
            QString txt = QInputDialog::getText(this, "Excluir receita", "Qual receita será excluida?", QLineEdit::Normal,"",&ok);
            qDebug() << txt;
            if(ok and !txt.isEmpty()){
                if(livro.apagarReceita(txt) != 0){
                    ui->tabela_dados->clearContents();
                    for(int j=0; j < livro.size(); j++){
                        ui->tabela_dados->insertRow(ui->tabela_dados->rowCount());
                        inserirNaTabela(livro[j],j);
                    }
                    QMessageBox::information(this,"Sucesso","A receita foi excluída");
                }else{
                    QMessageBox::warning(this,"Atenção: ","O receita não existe.");
                }
            }else{
                QMessageBox::warning(this,"Atenção","A caixa de texto está vazia ou preenchida incorretamente");
            }
        }
      atualizarDados();
}



void MainWindow::on_ResetarDados_clicked()
{
    int qtdeLinhas = ui->tabela_dados->rowCount();
        for(int i = 0; i < qtdeLinhas ; i++)
            ui->tabela_dados->removeRow(0);

     livro.resetarReceitas();
     ui->tabela_dados->clearContents();
     atualizarDados();
     ui->media_estrelas_geral->clear();

}

void MainWindow::on_AtualizarDados_clicked()
{

   ui->tabela_dados->clearContents();
   for(int i=0; i<livro.size();i++){
       inserirNaTabela(livro[i],i);
   }
   atualizarDados();
}
