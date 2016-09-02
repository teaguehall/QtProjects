#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "songmachine.h"
#include <memory>
#include <SFML/Audio.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_play_pause_clicked();
    void on_load_clicked();

private:
    void stateChange(void);
    std::unique_ptr<Ui::MainWindow> pui;
    // SongMachine *psongmachine;
    std::unique_ptr<SongMachine> psongmachine;

};

#endif // MAINWINDOW_H
