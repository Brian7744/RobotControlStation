#include "robotcontrolstation.h"
#include "ui_robotcontrolstation.h"

RobotControlStation::RobotControlStation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RobotControlStation)
{
    ui->setupUi(this);
}

RobotControlStation::~RobotControlStation()
{
    delete ui;
}
