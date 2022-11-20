#ifndef INC_36_5_1_CIRCLE_H
#define INC_36_5_1_CIRCLE_H

#include <QPushButton>
#include <iostream>
#include <QWindow>
#include <QSlider>
#include <QSpinBox>

class Circle : public QWidget {
    Q_OBJECT
private:
    QColor mColor = {0, 0, 0};
    const int mRadius {250};
    const int mWindowSize {300};
public:
    Circle() = delete;

    Circle(QWidget *parent);

    void paintEvent(QPaintEvent *p) override;

    QSize sizeHint() const override;

    QSize minimumSizeHint() const override;

    void ChangeR(int value);
    void ChangeB(int value);
    void ChangeG(int value);

};

#endif //INC_36_5_1_CIRCLE_H
