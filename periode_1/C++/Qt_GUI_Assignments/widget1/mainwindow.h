#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
private slots:
    void writeLabel();
    void incrementCounter();
    void decrementCounter();

private:
    QPushButton *m_button;
    QLabel *m_label;
    QPushButton *plus;
    QPushButton *minus;
    QLabel *counter;
    int m_counter = 0;
};
#endif // MAINWINDOW_H
