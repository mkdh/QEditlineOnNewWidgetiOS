#ifndef SUBVIEW_H
#define SUBVIEW_H

#include <QWidget>
#include <QDialog>
namespace Ui {
class SubView;
}

class SubView : public QDialog
{
    Q_OBJECT

public:
    explicit SubView(QWidget *parent = 0);
    ~SubView();

private:
    Ui::SubView *ui;
};

#endif // SUBVIEW_H
