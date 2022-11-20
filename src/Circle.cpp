#include "Circle.h"

#include <QPainter>

void Circle::paintEvent(QPaintEvent *p) {
    QPainter painter;

    painter.begin(this);

    QPen pen;
    pen.setColor(mColor);
    pen.setStyle(Qt::SolidLine);

    QBrush brush;
    brush.setColor(mColor);
    brush.setStyle(Qt::SolidPattern);

    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawEllipse((mWindowSize - mRadius) / 2, (mWindowSize - mRadius) / 2, mRadius, mRadius);

    painter.end();
}

Circle::Circle(QWidget *parent) {
    setParent(parent);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    setGeometry(mWindowSize, mWindowSize, mWindowSize, mWindowSize);
}

QSize Circle::sizeHint() const {
    return {mWindowSize, mWindowSize};
}

QSize Circle::minimumSizeHint() const {
    return sizeHint();
}

void Circle::ChangeR(int value) {
    mColor.setRed(value);
    repaint();
}

void Circle::ChangeB(int value) {
    mColor.setBlue(value);
    repaint();
}

void Circle::ChangeG(int value) {
    mColor.setGreen(value);
    repaint();
}
