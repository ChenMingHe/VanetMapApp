#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

#include <QPushButton>

class PushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit PushButton(QWidget *parent = 0);
    void setClick(bool click);
    bool isClick();

signals:
protected:

public slots:

private:
    bool clicked;
};

#endif // PUSHBUTTON_H
