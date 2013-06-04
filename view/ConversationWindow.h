#ifndef CONVERSATIONWINDOW_H
#define CONVERSATIONWINDOW_H

#include <QMainWindow>

namespace Ui {
class ConversationWindow;
}

class ConversationWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ConversationWindow(QWidget *parent = 0);
    ~ConversationWindow();
    
private slots:
    void on_tabWidget_tabCloseRequested(int index);

private:
    Ui::ConversationWindow *ui;
};

#endif // CONVERSATIONWINDOW_H
