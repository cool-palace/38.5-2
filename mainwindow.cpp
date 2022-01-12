#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->plainTextEdit, QOverload<>::of(&QPlainTextEdit::textChanged), [&](){
        ui->webView->setHtml(ui->plainTextEdit->toPlainText());
    });
    ui->plainTextEdit->setPlainText("<H1>Hello world</H1><i>Hello world</i>");
}

MainWindow::~MainWindow()
{
    delete ui;
}

