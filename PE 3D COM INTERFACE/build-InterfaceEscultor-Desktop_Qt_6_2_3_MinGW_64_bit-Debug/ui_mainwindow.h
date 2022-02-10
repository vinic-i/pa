/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "color.h"
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionPutVoxel;
    QAction *actionPutSphere;
    QAction *actionPutBox;
    QAction *actionPutEllipse;
    QAction *actionCutVoxel;
    QAction *actionCutSphere;
    QAction *actionCutBox;
    QAction *actionCutEllipse;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonCriaCanvas;
    QSlider *horizontalSliderProf;
    QSpinBox *spinBoxYCanvas;
    QSpinBox *spinBoxXCanvas;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *Vermelho;
    QSpinBox *spinBoxG;
    QSlider *horizontalSliderGreen;
    QLabel *Verde;
    QSpinBox *spinBoxR;
    QSlider *horizontalSliderRed;
    QLabel *Azul;
    QSpinBox *spinBoxB;
    QSlider *horizontalSliderBlue;
    QLabel *Alfa;
    QSpinBox *spinBoxA;
    QSlider *horizontalSliderAlfa;
    QLabel *labelBox_2;
    QLabel *Rx;
    QSpinBox *spinBoxRx;
    QSlider *horizontalSliderRx;
    QLabel *Ry;
    QSpinBox *spinBoxRy;
    QSlider *horizontalSliderRy;
    QLabel *Rz;
    QSpinBox *spinBoxRz;
    QSlider *horizontalSliderRz;
    QLabel *labelBox;
    QLabel *DimX;
    QSpinBox *spinBoxDimX;
    QSlider *horizontalSliderDimX;
    QLabel *DimY;
    QSpinBox *spinBoxDimY;
    QSlider *horizontalSliderDimY;
    QLabel *DimZ;
    QSpinBox *spinBoxDimZ;
    QSlider *horizontalSliderDimZ;
    QLabel *labelSphere;
    QLabel *Raio;
    QSpinBox *spinBoxRaio;
    QSlider *horizontalSliderRaio;
    Color *widget_2;
    QSpinBox *spinBox;
    QSpinBox *spinBoxZCanvas;
    QLabel *Profundidade;
    QLabel *ZGeral;
    QLabel *YGeral;
    QSlider *horizontalSliderYCanvas;
    Plotter *widget;
    QSlider *horizontalSliderZCanvas;
    QSlider *horizontalSliderXCanvas;
    QLabel *XGeral;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(792, 580);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/fotoefeitos.com_ (1).jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon);
        actionPutVoxel = new QAction(MainWindow);
        actionPutVoxel->setObjectName(QString::fromUtf8("actionPutVoxel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/voxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutVoxel->setIcon(icon1);
        actionPutSphere = new QAction(MainWindow);
        actionPutSphere->setObjectName(QString::fromUtf8("actionPutSphere"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/sphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutSphere->setIcon(icon2);
        actionPutBox = new QAction(MainWindow);
        actionPutBox->setObjectName(QString::fromUtf8("actionPutBox"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/box.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutBox->setIcon(icon3);
        actionPutEllipse = new QAction(MainWindow);
        actionPutEllipse->setObjectName(QString::fromUtf8("actionPutEllipse"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/elipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPutEllipse->setIcon(icon4);
        actionCutVoxel = new QAction(MainWindow);
        actionCutVoxel->setObjectName(QString::fromUtf8("actionCutVoxel"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/cutVoxel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutVoxel->setIcon(icon5);
        actionCutSphere = new QAction(MainWindow);
        actionCutSphere->setObjectName(QString::fromUtf8("actionCutSphere"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/cutSphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutSphere->setIcon(icon6);
        actionCutBox = new QAction(MainWindow);
        actionCutBox->setObjectName(QString::fromUtf8("actionCutBox"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/cutBox.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutBox->setIcon(icon7);
        actionCutEllipse = new QAction(MainWindow);
        actionCutEllipse->setObjectName(QString::fromUtf8("actionCutEllipse"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/cutElipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCutEllipse->setIcon(icon8);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonCriaCanvas = new QPushButton(centralwidget);
        pushButtonCriaCanvas->setObjectName(QString::fromUtf8("pushButtonCriaCanvas"));

        gridLayout_2->addWidget(pushButtonCriaCanvas, 6, 1, 1, 1);

        horizontalSliderProf = new QSlider(centralwidget);
        horizontalSliderProf->setObjectName(QString::fromUtf8("horizontalSliderProf"));
        horizontalSliderProf->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderProf, 2, 3, 1, 1);

        spinBoxYCanvas = new QSpinBox(centralwidget);
        spinBoxYCanvas->setObjectName(QString::fromUtf8("spinBoxYCanvas"));

        gridLayout_2->addWidget(spinBoxYCanvas, 4, 1, 1, 1);

        spinBoxXCanvas = new QSpinBox(centralwidget);
        spinBoxXCanvas->setObjectName(QString::fromUtf8("spinBoxXCanvas"));

        gridLayout_2->addWidget(spinBoxXCanvas, 3, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 4);

        Vermelho = new QLabel(centralwidget);
        Vermelho->setObjectName(QString::fromUtf8("Vermelho"));

        gridLayout->addWidget(Vermelho, 1, 0, 1, 1);

        spinBoxG = new QSpinBox(centralwidget);
        spinBoxG->setObjectName(QString::fromUtf8("spinBoxG"));
        spinBoxG->setMinimum(1);
        spinBoxG->setMaximum(255);

        gridLayout->addWidget(spinBoxG, 1, 1, 1, 2);

        horizontalSliderGreen = new QSlider(centralwidget);
        horizontalSliderGreen->setObjectName(QString::fromUtf8("horizontalSliderGreen"));
        horizontalSliderGreen->setMinimum(1);
        horizontalSliderGreen->setMaximum(255);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderGreen, 1, 3, 1, 1);

        Verde = new QLabel(centralwidget);
        Verde->setObjectName(QString::fromUtf8("Verde"));

        gridLayout->addWidget(Verde, 2, 0, 1, 1);

        spinBoxR = new QSpinBox(centralwidget);
        spinBoxR->setObjectName(QString::fromUtf8("spinBoxR"));
        spinBoxR->setMinimum(1);
        spinBoxR->setMaximum(255);

        gridLayout->addWidget(spinBoxR, 2, 1, 1, 2);

        horizontalSliderRed = new QSlider(centralwidget);
        horizontalSliderRed->setObjectName(QString::fromUtf8("horizontalSliderRed"));
        horizontalSliderRed->setMinimum(1);
        horizontalSliderRed->setMaximum(255);
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRed, 2, 3, 1, 1);

        Azul = new QLabel(centralwidget);
        Azul->setObjectName(QString::fromUtf8("Azul"));

        gridLayout->addWidget(Azul, 3, 0, 1, 1);

        spinBoxB = new QSpinBox(centralwidget);
        spinBoxB->setObjectName(QString::fromUtf8("spinBoxB"));
        spinBoxB->setMinimum(1);
        spinBoxB->setMaximum(255);

        gridLayout->addWidget(spinBoxB, 3, 1, 1, 2);

        horizontalSliderBlue = new QSlider(centralwidget);
        horizontalSliderBlue->setObjectName(QString::fromUtf8("horizontalSliderBlue"));
        horizontalSliderBlue->setMinimum(1);
        horizontalSliderBlue->setMaximum(256);
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderBlue, 3, 3, 1, 1);

        Alfa = new QLabel(centralwidget);
        Alfa->setObjectName(QString::fromUtf8("Alfa"));

        gridLayout->addWidget(Alfa, 4, 0, 1, 1);

        spinBoxA = new QSpinBox(centralwidget);
        spinBoxA->setObjectName(QString::fromUtf8("spinBoxA"));
        spinBoxA->setMinimum(254);
        spinBoxA->setMaximum(255);

        gridLayout->addWidget(spinBoxA, 4, 1, 1, 2);

        horizontalSliderAlfa = new QSlider(centralwidget);
        horizontalSliderAlfa->setObjectName(QString::fromUtf8("horizontalSliderAlfa"));
        horizontalSliderAlfa->setMinimum(254);
        horizontalSliderAlfa->setMaximum(255);
        horizontalSliderAlfa->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAlfa, 4, 3, 1, 1);

        labelBox_2 = new QLabel(centralwidget);
        labelBox_2->setObjectName(QString::fromUtf8("labelBox_2"));

        gridLayout->addWidget(labelBox_2, 5, 0, 1, 4);

        Rx = new QLabel(centralwidget);
        Rx->setObjectName(QString::fromUtf8("Rx"));

        gridLayout->addWidget(Rx, 6, 0, 1, 2);

        spinBoxRx = new QSpinBox(centralwidget);
        spinBoxRx->setObjectName(QString::fromUtf8("spinBoxRx"));

        gridLayout->addWidget(spinBoxRx, 6, 2, 1, 1);

        horizontalSliderRx = new QSlider(centralwidget);
        horizontalSliderRx->setObjectName(QString::fromUtf8("horizontalSliderRx"));
        horizontalSliderRx->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRx, 6, 3, 1, 1);

        Ry = new QLabel(centralwidget);
        Ry->setObjectName(QString::fromUtf8("Ry"));

        gridLayout->addWidget(Ry, 7, 0, 1, 1);

        spinBoxRy = new QSpinBox(centralwidget);
        spinBoxRy->setObjectName(QString::fromUtf8("spinBoxRy"));

        gridLayout->addWidget(spinBoxRy, 7, 2, 1, 1);

        horizontalSliderRy = new QSlider(centralwidget);
        horizontalSliderRy->setObjectName(QString::fromUtf8("horizontalSliderRy"));
        horizontalSliderRy->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRy, 7, 3, 1, 1);

        Rz = new QLabel(centralwidget);
        Rz->setObjectName(QString::fromUtf8("Rz"));

        gridLayout->addWidget(Rz, 8, 0, 1, 1);

        spinBoxRz = new QSpinBox(centralwidget);
        spinBoxRz->setObjectName(QString::fromUtf8("spinBoxRz"));

        gridLayout->addWidget(spinBoxRz, 8, 2, 1, 1);

        horizontalSliderRz = new QSlider(centralwidget);
        horizontalSliderRz->setObjectName(QString::fromUtf8("horizontalSliderRz"));
        horizontalSliderRz->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRz, 8, 3, 1, 1);

        labelBox = new QLabel(centralwidget);
        labelBox->setObjectName(QString::fromUtf8("labelBox"));

        gridLayout->addWidget(labelBox, 9, 0, 1, 4);

        DimX = new QLabel(centralwidget);
        DimX->setObjectName(QString::fromUtf8("DimX"));

        gridLayout->addWidget(DimX, 10, 0, 1, 2);

        spinBoxDimX = new QSpinBox(centralwidget);
        spinBoxDimX->setObjectName(QString::fromUtf8("spinBoxDimX"));

        gridLayout->addWidget(spinBoxDimX, 10, 2, 1, 1);

        horizontalSliderDimX = new QSlider(centralwidget);
        horizontalSliderDimX->setObjectName(QString::fromUtf8("horizontalSliderDimX"));
        horizontalSliderDimX->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderDimX, 10, 3, 1, 1);

        DimY = new QLabel(centralwidget);
        DimY->setObjectName(QString::fromUtf8("DimY"));

        gridLayout->addWidget(DimY, 11, 0, 1, 2);

        spinBoxDimY = new QSpinBox(centralwidget);
        spinBoxDimY->setObjectName(QString::fromUtf8("spinBoxDimY"));

        gridLayout->addWidget(spinBoxDimY, 11, 2, 1, 1);

        horizontalSliderDimY = new QSlider(centralwidget);
        horizontalSliderDimY->setObjectName(QString::fromUtf8("horizontalSliderDimY"));
        horizontalSliderDimY->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderDimY, 11, 3, 1, 1);

        DimZ = new QLabel(centralwidget);
        DimZ->setObjectName(QString::fromUtf8("DimZ"));

        gridLayout->addWidget(DimZ, 12, 0, 1, 2);

        spinBoxDimZ = new QSpinBox(centralwidget);
        spinBoxDimZ->setObjectName(QString::fromUtf8("spinBoxDimZ"));

        gridLayout->addWidget(spinBoxDimZ, 12, 2, 1, 1);

        horizontalSliderDimZ = new QSlider(centralwidget);
        horizontalSliderDimZ->setObjectName(QString::fromUtf8("horizontalSliderDimZ"));
        horizontalSliderDimZ->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderDimZ, 12, 3, 1, 1);

        labelSphere = new QLabel(centralwidget);
        labelSphere->setObjectName(QString::fromUtf8("labelSphere"));

        gridLayout->addWidget(labelSphere, 13, 0, 1, 4);

        Raio = new QLabel(centralwidget);
        Raio->setObjectName(QString::fromUtf8("Raio"));

        gridLayout->addWidget(Raio, 14, 0, 1, 1);

        spinBoxRaio = new QSpinBox(centralwidget);
        spinBoxRaio->setObjectName(QString::fromUtf8("spinBoxRaio"));

        gridLayout->addWidget(spinBoxRaio, 14, 2, 1, 1);

        horizontalSliderRaio = new QSlider(centralwidget);
        horizontalSliderRaio->setObjectName(QString::fromUtf8("horizontalSliderRaio"));
        horizontalSliderRaio->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRaio, 14, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 4, 5, 1);

        widget_2 = new Color(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        gridLayout_2->addWidget(widget_2, 0, 4, 1, 1);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_2->addWidget(spinBox, 2, 2, 1, 1);

        spinBoxZCanvas = new QSpinBox(centralwidget);
        spinBoxZCanvas->setObjectName(QString::fromUtf8("spinBoxZCanvas"));

        gridLayout_2->addWidget(spinBoxZCanvas, 5, 1, 1, 1);

        Profundidade = new QLabel(centralwidget);
        Profundidade->setObjectName(QString::fromUtf8("Profundidade"));

        gridLayout_2->addWidget(Profundidade, 2, 0, 1, 2);

        ZGeral = new QLabel(centralwidget);
        ZGeral->setObjectName(QString::fromUtf8("ZGeral"));

        gridLayout_2->addWidget(ZGeral, 5, 0, 1, 1);

        YGeral = new QLabel(centralwidget);
        YGeral->setObjectName(QString::fromUtf8("YGeral"));

        gridLayout_2->addWidget(YGeral, 4, 0, 1, 1);

        horizontalSliderYCanvas = new QSlider(centralwidget);
        horizontalSliderYCanvas->setObjectName(QString::fromUtf8("horizontalSliderYCanvas"));
        horizontalSliderYCanvas->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderYCanvas, 4, 2, 1, 2);

        widget = new Plotter(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout_2->addWidget(widget, 0, 0, 2, 4);

        horizontalSliderZCanvas = new QSlider(centralwidget);
        horizontalSliderZCanvas->setObjectName(QString::fromUtf8("horizontalSliderZCanvas"));
        horizontalSliderZCanvas->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderZCanvas, 5, 2, 1, 2);

        horizontalSliderXCanvas = new QSlider(centralwidget);
        horizontalSliderXCanvas->setObjectName(QString::fromUtf8("horizontalSliderXCanvas"));
        horizontalSliderXCanvas->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderXCanvas, 3, 2, 1, 2);

        XGeral = new QLabel(centralwidget);
        XGeral->setObjectName(QString::fromUtf8("XGeral"));

        gridLayout_2->addWidget(XGeral, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 792, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionPutVoxel);
        toolBar->addAction(actionCutVoxel);
        toolBar->addAction(actionPutBox);
        toolBar->addAction(actionCutBox);
        toolBar->addAction(actionPutSphere);
        toolBar->addAction(actionCutSphere);
        toolBar->addAction(actionPutEllipse);
        toolBar->addAction(actionCutEllipse);

        retranslateUi(MainWindow);
        QObject::connect(spinBoxRaio, &QSpinBox::valueChanged, horizontalSliderRaio, &QSlider::setValue);
        QObject::connect(horizontalSliderRaio, &QSlider::valueChanged, spinBoxRaio, &QSpinBox::setValue);
        QObject::connect(spinBoxRx, &QSpinBox::valueChanged, horizontalSliderRx, &QSlider::setValue);
        QObject::connect(horizontalSliderRx, &QSlider::valueChanged, spinBoxRx, &QSpinBox::setValue);
        QObject::connect(spinBoxRy, &QSpinBox::valueChanged, horizontalSliderRy, &QSlider::setValue);
        QObject::connect(horizontalSliderRy, &QSlider::valueChanged, spinBoxRy, &QSpinBox::setValue);
        QObject::connect(spinBoxRz, &QSpinBox::valueChanged, horizontalSliderRz, &QSlider::setValue);
        QObject::connect(horizontalSliderRz, &QSlider::valueChanged, spinBoxRz, &QSpinBox::setValue);
        QObject::connect(spinBoxDimX, &QSpinBox::valueChanged, horizontalSliderDimX, &QSlider::setValue);
        QObject::connect(horizontalSliderDimX, &QSlider::valueChanged, spinBoxDimX, &QSpinBox::setValue);
        QObject::connect(spinBoxDimY, &QSpinBox::valueChanged, horizontalSliderDimY, &QSlider::setValue);
        QObject::connect(horizontalSliderDimY, &QSlider::valueChanged, spinBoxDimY, &QSpinBox::setValue);
        QObject::connect(spinBoxDimZ, &QSpinBox::valueChanged, horizontalSliderDimZ, &QSlider::setValue);
        QObject::connect(horizontalSliderDimZ, &QSlider::valueChanged, spinBoxDimZ, &QSpinBox::setValue);
        QObject::connect(spinBoxXCanvas, &QSpinBox::valueChanged, horizontalSliderXCanvas, &QSlider::setValue);
        QObject::connect(horizontalSliderXCanvas, &QSlider::valueChanged, spinBoxXCanvas, &QSpinBox::setValue);
        QObject::connect(spinBoxYCanvas, &QSpinBox::valueChanged, horizontalSliderYCanvas, &QSlider::setValue);
        QObject::connect(horizontalSliderYCanvas, &QSlider::valueChanged, spinBoxYCanvas, &QSpinBox::setValue);
        QObject::connect(spinBoxZCanvas, &QSpinBox::valueChanged, horizontalSliderZCanvas, &QSlider::setValue);
        QObject::connect(horizontalSliderZCanvas, &QSlider::valueChanged, spinBoxZCanvas, &QSpinBox::setValue);
        QObject::connect(spinBox, &QSpinBox::valueChanged, horizontalSliderProf, &QSlider::setValue);
        QObject::connect(horizontalSliderProf, &QSlider::valueChanged, spinBox, &QSpinBox::setValue);
        QObject::connect(actionPutVoxel, SIGNAL(triggered()), MainWindow, SLOT(ChamaPutVoxel()));
        QObject::connect(actionPutSphere, SIGNAL(triggered()), MainWindow, SLOT(ChamaPutSphere()));
        QObject::connect(actionPutBox, SIGNAL(triggered()), MainWindow, SLOT(ChamaPutBox()));
        QObject::connect(actionPutEllipse, SIGNAL(triggered()), MainWindow, SLOT(ChamaPutEllipsoid()));
        QObject::connect(actionCutBox, SIGNAL(triggered()), MainWindow, SLOT(ChamaCutBox()));
        QObject::connect(actionCutEllipse, SIGNAL(triggered()), MainWindow, SLOT(ChamaCutEllipsoid()));
        QObject::connect(actionCutSphere, SIGNAL(triggered()), MainWindow, SLOT(ChamaCutSphere()));
        QObject::connect(actionCutVoxel, SIGNAL(triggered()), MainWindow, SLOT(ChamaCutVoxel()));
        QObject::connect(spinBoxA, &QSpinBox::valueChanged, horizontalSliderAlfa, &QSlider::setValue);
        QObject::connect(horizontalSliderAlfa, &QSlider::valueChanged, spinBoxA, &QSpinBox::setValue);
        QObject::connect(spinBoxA, &QSpinBox::valueChanged, horizontalSliderAlfa, &QSlider::setValue);
        QObject::connect(horizontalSliderBlue, &QSlider::valueChanged, spinBoxB, &QSpinBox::setValue);
        QObject::connect(spinBoxB, &QSpinBox::valueChanged, horizontalSliderBlue, &QSlider::setValue);
        QObject::connect(horizontalSliderRed, &QSlider::valueChanged, spinBoxR, &QSpinBox::setValue);
        QObject::connect(spinBoxR, &QSpinBox::valueChanged, horizontalSliderRed, &QSlider::setValue);
        QObject::connect(horizontalSliderGreen, &QSlider::valueChanged, spinBoxG, &QSpinBox::setValue);
        QObject::connect(spinBoxG, &QSpinBox::valueChanged, horizontalSliderGreen, &QSlider::setValue);
        QObject::connect(horizontalSliderRed, SIGNAL(sliderMoved(int)), widget_2, SLOT(set_r(int)));
        QObject::connect(horizontalSliderBlue, SIGNAL(sliderMoved(int)), widget_2, SLOT(set_b(int)));
        QObject::connect(horizontalSliderGreen, SIGNAL(sliderMoved(int)), widget_2, SLOT(set_g(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionPutVoxel->setText(QCoreApplication::translate("MainWindow", "putVoxel", nullptr));
        actionPutSphere->setText(QCoreApplication::translate("MainWindow", "PutSphere", nullptr));
        actionPutBox->setText(QCoreApplication::translate("MainWindow", "PutBox", nullptr));
        actionPutEllipse->setText(QCoreApplication::translate("MainWindow", "PutEllipse", nullptr));
        actionCutVoxel->setText(QCoreApplication::translate("MainWindow", "CutVoxel", nullptr));
        actionCutSphere->setText(QCoreApplication::translate("MainWindow", "CutSphere", nullptr));
        actionCutBox->setText(QCoreApplication::translate("MainWindow", "CutBox", nullptr));
        actionCutEllipse->setText(QCoreApplication::translate("MainWindow", "CutEllipse", nullptr));
        pushButtonCriaCanvas->setText(QCoreApplication::translate("MainWindow", "Redimensionar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "DEFINA A COR DO PINCEL", nullptr));
        Vermelho->setText(QCoreApplication::translate("MainWindow", "R    ", nullptr));
        Verde->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        Azul->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        Alfa->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        labelBox_2->setText(QCoreApplication::translate("MainWindow", "DIMENS\303\225ES PARA ELLIPSE", nullptr));
        Rx->setText(QCoreApplication::translate("MainWindow", "   Rx    ", nullptr));
        Ry->setText(QCoreApplication::translate("MainWindow", "   Ry", nullptr));
        Rz->setText(QCoreApplication::translate("MainWindow", "   Rz", nullptr));
        labelBox->setText(QCoreApplication::translate("MainWindow", "DIMENS\303\225ES PARA PUTBOX", nullptr));
        DimX->setText(QCoreApplication::translate("MainWindow", "DimX", nullptr));
        DimY->setText(QCoreApplication::translate("MainWindow", "DimY", nullptr));
        DimZ->setText(QCoreApplication::translate("MainWindow", "DimZ", nullptr));
        labelSphere->setText(QCoreApplication::translate("MainWindow", "RAIO PARA ESFERA", nullptr));
        Raio->setText(QCoreApplication::translate("MainWindow", "RAIO", nullptr));
        Profundidade->setText(QCoreApplication::translate("MainWindow", "Profundidade", nullptr));
        ZGeral->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        YGeral->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        XGeral->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
