#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButtonInsert_clicked();

    void on_pushButtonDelete_clicked();

    void on_pushButtonUpdate_clicked();

    void on_pushButtonSearch_clicked();

    void on_pushButtonSearchAll_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
