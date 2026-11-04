#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_button= new QPushButton("Button", this);
    m_button->setGeometry(QRect(QPoint(50, 50), QSize(90, 30)));

    m_label = new QLabel("Lable", this);
    m_label->setGeometry(QRect(QPoint(250, 50), QSize(100, 30)));

    connect(m_button, SIGNAL(clicked()), this, SLOT(writeLabel()));

    plus = new QPushButton("+", this);
    plus->setGeometry(QRect(QPoint(50, 100), QSize(30,30)));
    minus = new QPushButton("-", this);
    minus->setGeometry(QRect(QPoint(50, 140), QSize(30, 30)));

    counter = new QLabel("0", this);
    counter->setGeometry(QRect(QPoint(250, 120), QSize(30, 30)));

    connect(plus, SIGNAL(clicked()), this, SLOT(incrementCounter()));
    connect(minus, SIGNAL(clicked()), this, SLOT(decrementCounter()));
}

MainWindow::~MainWindow() = default;

void MainWindow::writeLabel()
{
    m_label->setText("Overwrite the lable text");
}

void MainWindow::incrementCounter()
{
    ++m_counter;
    counter->setText(QString::number(m_counter));
}

void MainWindow::decrementCounter()
{
    --m_counter;
    counter->setText(QString::number(m_counter));
}