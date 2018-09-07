#include "controls.h"
#include "ui_controls.h"

Controls::Controls(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Controls)
{
    ui->setupUi(this);

    connect(ui->translateXSpinBox, SIGNAL(valueChanged(int)), this, SLOT(slot_TX(int)));
    connect(ui->translateYSpinBox, SIGNAL(valueChanged(int)), this, SLOT(slot_TY(int)));
    connect(ui->rotateSpinBox, SIGNAL(valueChanged(int)), this, SLOT(slot_R(int)));
    connect(ui->scaleXSpinBox, SIGNAL(valueChanged(int)), this, SLOT(slot_SX(int)));
    connect(ui->scaleYSpinBox, SIGNAL(valueChanged(int)), this, SLOT(slot_SY(int)));

    connect(ui->scene1RadioButton, SIGNAL(clicked(bool)), this, SLOT(slot_Scene1()));
    connect(ui->scene2RadioButton, SIGNAL(clicked(bool)), this, SLOT(slot_Scene2()));
    connect(ui->scene3RadioButton, SIGNAL(clicked(bool)), this, SLOT(slot_Scene3()));
}

Controls::~Controls()
{
    delete ui;
}

void Controls::slot_TX(int i)
{
    emit sig_TX(i);
}

void Controls::slot_TY(int i)
{
    emit sig_TY(i);
}

void Controls::slot_R(int i)
{
    emit sig_R(i);
}

void Controls::slot_SX(int i)
{
    emit sig_SX(i);
}

void Controls::slot_SY(int i)
{
    emit sig_SY(i);
}

void Controls::slot_Scene1()
{
    emit sig_Scene1();
}

void Controls::slot_Scene2()
{
    emit sig_Scene2();
}

void Controls::slot_Scene3()
{
    emit sig_Scene3();
}
