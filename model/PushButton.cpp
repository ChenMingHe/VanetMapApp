#include "PushButton.h"

PushButton::PushButton(QWidget *parent) :
    QPushButton(parent), clicked(false)
{
}

void PushButton::setClick(bool click)
{
    clicked = click;
}

bool PushButton::isClick()
{
    return clicked;
}






