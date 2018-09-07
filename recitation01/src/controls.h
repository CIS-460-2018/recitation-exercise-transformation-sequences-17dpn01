#ifndef CONTROLS_H
#define CONTROLS_H

#include <QWidget>

namespace Ui {
class Controls;
}

class Controls : public QWidget
{
    Q_OBJECT

public:
    explicit Controls(QWidget *parent = 0);
    ~Controls();

private:
    Ui::Controls *ui;

public slots:
    void slot_TX(int);
    void slot_TY(int);
    void slot_R(int);
    void slot_SX(int);
    void slot_SY(int);

    void slot_Scene1();
    void slot_Scene2();
    void slot_Scene3();

signals:
    sig_TX(int);
    sig_TY(int);
    sig_R(int);
    sig_SX(int);
    sig_SY(int);

    sig_Scene1();
    sig_Scene2();
    sig_Scene3();
};

#endif // CONTROLS_H
