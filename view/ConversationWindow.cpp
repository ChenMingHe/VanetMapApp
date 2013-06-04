#include "ConversationWindow.h"
#include "ui_ConversationWindow.h"

ConversationWindow::ConversationWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConversationWindow)
{
    ui->setupUi(this);
}

ConversationWindow::~ConversationWindow()
{
    delete ui;
}

void ConversationWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}
