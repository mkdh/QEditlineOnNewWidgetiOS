#include "subview.h"
#include "ui_subview.h"

SubView::SubView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SubView)
{
    ui->setupUi(this);
}

SubView::~SubView()
{
    delete ui;
}
