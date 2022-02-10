#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sculptor.h"
#include "vector"
#include "plotter.h"
#include <QMainWindow>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief A classe MainWindow é o elo de comunicação entre a classe sculptor e plotter.
 */
class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    /**
     * @brief A função CriaCanvas() é responsável por criar o ambiente onde as figuras serão desenhadas.
     */
    void CriaCanvas();
    /**
     * @brief A função EscolhePlanoXY() é responsável alterar o plano de visão do ambiente para o plano XY quando o botão for pressionado.
     */
    void ChamaPutVoxel();
    /**
     * @brief A função ChamaPutBox() é responsável por chamar PutBox() quando o botão for pressionado.
     * @sa PutBox
     */
    void ChamaPutBox();
    /**
     * @brief A função ChamaPutSphere() é responsável por chamar PutSphere() quando o botão for pressionado.
     * @sa PutSphere
     */
    void ChamaPutSphere();
    /**
     * @brief A função ChamaPutEllipsoid() é responsável por chamar PutEllipsoid() quando o botão for pressionado.
     * @brief PutEllipsoid
     */
    void ChamaPutEllipsoid();
    /**
     * @brief A função ChamaCutVoxel() é responsável por chamar CutVoxel() quando o botão for pressionado.
     * @sa CutVoxel
     */
    void ChamaCutVoxel();
    /**
     * @brief A função ChamaCutBox() é responsável por chamar CutBox() quando o botão for pressionado.
     * @sa CutBox
     */
    void ChamaCutBox();
    /**
     * @brief A função ChamaCutSphere() é responsável por chamar CutSphere() quando o botão for pressionado.
     * @sa CutSphere
     */
    void ChamaCutSphere();
    /**
     * @brief A função ChamaCutEllipsoid() é responsável por chamar CutEllipsoid() quando o botão for pressionado.
     * @sa CutEllipsoid
     */
    void ChamaCutEllipsoid();
    /**
     * @brief A função sair() permite que o programa seja encerrado.
     */
    void sair();

private:
    Ui::MainWindow *ui;
    std::vector<std::vector<Voxel>> m;
};
#endif // MAINWINDOW_H
