#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QObject>

class QPushButton;
class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = 0);
signals:
    void counterReached();
private slots:
    void slotButtonClicked(bool checked);
private:
    int counter;
    QPushButton *m_Button;

//void QPushButton::clicked(bool checked);
//void Window::slotButtonClicked(bool checked);

};

#endif // WINDOW_H
