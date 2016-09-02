#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "SFML/Audio.hpp"
#include <qfiledialog.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    pui(new Ui::MainWindow),
    psongmachine(new SongMachine)
{
    pui->setupUi(this);
    this->stateChange();
}

MainWindow::~MainWindow()
{
}

void MainWindow::on_play_pause_clicked()
{
    this->psongmachine->pausePlay();
    this->stateChange();
}

void MainWindow::on_load_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,
                                                    "Select a sound file (.wav)",
                                                    "C:\\",
                                                    tr("*.wav")
                                                   );
    psongmachine->setPathNFile(filename.toStdString());
}

void MainWindow::stateChange(void)
{
    QString message(QString::fromStdString(psongmachine->getState()));
    pui->statusBar->showMessage(message);
}

