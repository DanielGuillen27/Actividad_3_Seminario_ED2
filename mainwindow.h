#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_txtId_textChanged(const QString &arg1);

    void on_txtPosX_textChanged(const QString &arg1);

    void on_txtRed_textChanged(const QString &arg1);

    void on_txtGreen_textChanged(const QString &arg1);

    void on_txtBlue_textChanged(const QString &arg1);

    void on_txtPosY_textChanged(const QString &arg1);

    void on_btnGuardar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
