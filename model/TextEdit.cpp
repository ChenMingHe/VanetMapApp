#include "TextEdit.h"
#include <QDragEnterEvent>
#include <QDebug>

TextEdit::TextEdit(QWidget *parent) :
    QTextEdit(parent)
{
}

void TextEdit::dropEvent(QDropEvent *e)
{
    qDebug("drop");
    QTextEdit::dropEvent(e);
}

void TextEdit::dragEnterEvent(QDragEnterEvent *e)
{
    qDebug() << "drag enter";
    if (e->mimeData()->hasText()) {
        qDebug() << e->mimeData()->text();
    }
    QTextEdit::dragEnterEvent(e);
}
