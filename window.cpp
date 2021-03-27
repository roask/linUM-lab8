#include "window.h"
#include <QPushButton>
#include <QApplication>


Window::Window(QWidget *parent) : QWidget(parent)
{

    setFixedSize(300, 150);

    m_Button = new QPushButton("Hello World", this);
   // m_Button->setGeometry(10, 10, 80, 30); Denna verkar inte fungera korrek, troligtvis pga upplösningen på min virtualbox
    m_Button->setCheckable(true);
    counter = 0;
    connect(m_Button, SIGNAL (clicked(bool)), this, SLOT(slotButtonClicked(bool)));
    connect(this, SIGNAL (counterReached()), QApplication::instance(), SLOT(quit()));

}

void Window::slotButtonClicked(bool checked)
{
    if(checked){
        m_Button->setText("Checked");
    }else {
        m_Button->setText("Hello World!");
    }

    counter++;
    if (counter ==10){
        emit counterReached();
    }
}
