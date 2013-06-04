#include "GraphicsView.h"
#include <QWheelEvent>
#include <QMouseEvent>
#include <QDebug>

GraphicsView::GraphicsView(QWidget *parent) :
    QGraphicsView(parent)
{
}

void GraphicsView::resizeEvent(QResizeEvent *event)
{
    qDebug("resize");
    QGraphicsView::resizeEvent(event);
}

void GraphicsView::wheelEvent(QWheelEvent *event)
{
    qDebug() << "whell" << event->delta();
    QGraphicsView::wheelEvent(event);
}

void GraphicsView::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::RightButton) {
        qDebug("right button");
    }
    if (event->button() == Qt::LeftButton) {
        qDebug("left button");
    }
    QGraphicsView::mousePressEvent(event);
}
