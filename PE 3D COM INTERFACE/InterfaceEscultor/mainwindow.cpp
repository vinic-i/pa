#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sculptor.h"
#include "plotter.h"
#include <cstdlib>
#include "QMessageBox"
#include "QProcess"
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){

    ui->setupUi(this);
            ui->horizontalSliderDimX->setMaximum(ui->widget->sx-1);
            ui->horizontalSliderDimY->setMaximum(ui->widget->sy-1);
            ui->horizontalSliderDimZ->setMaximum(ui->widget->sz-1);
            ui->horizontalSliderRaio->setMaximum(ui->widget->sx/2 -1);
            ui->horizontalSliderRx->setMaximum(ui->widget->sx/2 -1);
            ui->horizontalSliderRy->setMaximum(ui->widget->sy/2 -1);
            ui->horizontalSliderRz->setMaximum(ui->widget->sz/2 -1);
            ui->horizontalSliderProf->setMaximum(ui->widget->sz -1);
            ui->horizontalSliderAlfa->setValue(10);

            connect(ui->horizontalSliderProf,
                                SIGNAL(valueChanged(int)),
                                ui->widget, //Envia a informação da interface para o desenho.
                                SLOT(changePlano(int)));

                        connect(ui->horizontalSliderRed,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(changeRed(int)));

                        connect(ui->horizontalSliderRed,
                                SIGNAL(actionTriggered(int)),
                                ui->widget,
                                SLOT(changeGreen(int)));

                        connect(ui->horizontalSliderBlue,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(changeBlue(int)));

                        connect(ui->horizontalSliderBlue,
                                SIGNAL(actionTriggered(int)),
                                ui->widget,
                                SLOT(changeGreen(int)));

                        connect(ui->horizontalSliderGreen,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(changeGreen(int)));
                        connect(ui->horizontalSliderGreen,
                                SIGNAL(actionTriggered(int)),
                                ui->widget,
                                SLOT(changeGreen(int)));

                        connect(ui->horizontalSliderAlfa,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(changeAlfa(int)));

                        connect(ui->horizontalSliderDimX,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(changeDimX(int)));

                        connect(ui->horizontalSliderDimY,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(changeDimY(int)));

                        connect(ui->horizontalSliderDimZ,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(changeDimZ(int)));

                        connect(ui->horizontalSliderRaio,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(changeRaio(int)));

                        connect(ui->horizontalSliderRx,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(changeRx(int)));

                        connect(ui->horizontalSliderRy,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(changeRy(int)));

                        connect(ui->horizontalSliderRz,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(changeRz(int)));

                        connect(ui->actionSave,
                                SIGNAL(triggered(bool)),
                                ui->widget,
                                SLOT(criaOff()));

                        connect(ui->pushButtonCriaCanvas,
                                SIGNAL(clicked(bool)),
                                this,
                                SLOT(CriaCanvas()));

                        connect(ui->horizontalSliderXCanvas,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(CriaCanvas()));

                        connect(ui->horizontalSliderYCanvas,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(CriaCanvas()));

                        connect(ui->horizontalSliderZCanvas,
                                SIGNAL(valueChanged(int)),
                                ui->widget,
                                SLOT(CriaCanvas()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::sair(){
    exit(0);
}

void MainWindow::CriaCanvas(){


      ui->widget->sx = ui->horizontalSliderXCanvas->value();
      ui->widget->sy = ui->horizontalSliderYCanvas->value();
      ui->widget->sz = ui->horizontalSliderZCanvas->value();
      ui->widget->s->~Sculptor();
      ui->widget->s = new Sculptor(ui->widget->sx,ui->widget->sy,ui->widget->sz);
      ui->horizontalSliderDimX->setMaximum(ui->widget->sx-1);
      ui->horizontalSliderDimY->setMaximum(ui->widget->sy-1);
      ui->horizontalSliderDimZ->setMaximum(ui->widget->sz-1);
      ui->horizontalSliderRaio->setMaximum(ui->widget->sx/2 -1);
      ui->horizontalSliderRx->setMaximum(ui->widget->sx/2 -1);
      ui->horizontalSliderRy->setMaximum(ui->widget->sy/2 -1);
      ui->horizontalSliderRz->setMaximum(ui->widget->sz/2 -1);
      ui->horizontalSliderProf->setMaximum(ui->widget->sz -1);
      ui->widget->repaint();
}

void MainWindow::ChamaPutVoxel(){ //PutVoxel
    ui->widget->sh = 1;
}
void MainWindow::ChamaCutVoxel(){ //CutVoxel
    ui->widget->sh = 2;
}
void MainWindow::ChamaPutBox(){ //PutBox
    ui->widget->sh = 3;
}
void MainWindow::ChamaCutBox(){ //CutBox
    ui->widget->sh= 4;
}
void MainWindow::ChamaPutSphere(){ //PutSphere
    ui->widget->sh = 5;
}
void MainWindow::ChamaCutSphere(){ //CutSphere
    ui->widget->sh = 6;
}
void MainWindow::ChamaPutEllipsoid(){ //PutEllipsoid
    ui->widget->sh = 7;
}
void MainWindow::ChamaCutEllipsoid(){ //PutEllipsoid
    ui->widget->sh= 8;
}

