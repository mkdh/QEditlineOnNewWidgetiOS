#include "dialog.h"
#include "ui_dialog.h"
#include "subview.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    SubView *QQ=new SubView(this);

    QQ->setModal(true);
    QQ->setEnabled(true);
    QQ->showNormal();
}
