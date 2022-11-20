
#include <memory>
#include <QApplication>
#include <QGridLayout>
#include <QSlider>

#include "Circle.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    const int min = 0;
    const int max = 255;

    std::unique_ptr<QWidget> mainWindow = std::make_unique<QWidget>(nullptr);

    std::unique_ptr<QSlider> rSlider = std::make_unique<QSlider>(mainWindow.get());
    std::unique_ptr<QSlider> gSlider = std::make_unique<QSlider>(mainWindow.get());
    std::unique_ptr<QSlider> bSlider = std::make_unique<QSlider>(mainWindow.get());

    std::unique_ptr<Circle> circle = std::make_unique<Circle>(mainWindow.get());

    std::unique_ptr<QGridLayout> layout = std::make_unique<QGridLayout>(mainWindow.get());

    mainWindow->setFixedSize(275,350);

    rSlider->setMinimum(min);
    rSlider->setMaximum(max);
    rSlider->setOrientation(Qt::Horizontal);
    rSlider->setToolTip("Red");

    gSlider->setMinimum(min);
    gSlider->setMaximum(max);
    gSlider->setOrientation(Qt::Horizontal);
    gSlider->setToolTip("Green");

    bSlider->setMinimum(min);
    bSlider->setMaximum(max);
    bSlider->setOrientation(Qt::Horizontal);
    bSlider->setToolTip("Blue");

    layout->addWidget(circle.get(), 0, 0);

    layout->addWidget(rSlider.get(), 1, 0);
    layout->addWidget(gSlider.get(), 2, 0);
    layout->addWidget(bSlider.get(), 3, 0);

    QObject::connect(rSlider.get(), &QSlider::valueChanged, circle.get(), &Circle::ChangeR);
    QObject::connect(gSlider.get(), &QSlider::valueChanged, circle.get(), &Circle::ChangeG);
    QObject::connect(bSlider.get(), &QSlider::valueChanged, circle.get(), &Circle::ChangeB);

    mainWindow->show();
    return QApplication::exec();
}

#include <main.moc>
