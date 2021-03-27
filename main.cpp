#include <QApplication>
#include <QPushButton>
#include <window.h>
#include <QProgressBar>
#include <QSlider>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    Window window;
    window.setFixedSize(200, 80);


    window.show();
    return app.exec();

}
