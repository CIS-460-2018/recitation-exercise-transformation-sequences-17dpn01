#include "mainwindow.h"
#include <ui_mainwindow.h>
#include <QDesktopWidget>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    controls(new Controls())
{
    ui->setupUi(this);
    ui->mygl->setFocus();

    connect(controls, SIGNAL(sig_TX(int)), ui->mygl, SLOT(slot_setTranslateX(int)));
    connect(controls, SIGNAL(sig_TY(int)), ui->mygl, SLOT(slot_setTranslateY(int)));
    connect(controls, SIGNAL(sig_R(int)), ui->mygl, SLOT(slot_setRotate(int)));
    connect(controls, SIGNAL(sig_SX(int)), ui->mygl, SLOT(slot_setScaleX(int)));
    connect(controls, SIGNAL(sig_SY(int)), ui->mygl, SLOT(slot_setScaleY(int)));

    connect(controls, SIGNAL(sig_Scene1()), ui->mygl, SLOT(slot_setScene1()));
    connect(controls, SIGNAL(sig_Scene2()), ui->mygl, SLOT(slot_setScene2()));
    connect(controls, SIGNAL(sig_Scene3()), ui->mygl, SLOT(slot_setScene3()));

    controls->show();
    controls->move(QApplication::desktop()->screen()->rect().center() - this->rect().center() + QPoint(this->width(), 0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    QApplication::exit();
}
