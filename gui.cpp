#include "gui.h"
#include <QDebug>

Gui::Gui(QMainWindow *parent) :
    QMainWindow(parent)
{
    setupUi(this);
    m_timer = new QTimer();
    //Verbinde: Quelle(Timer aus klasse Timer) -> Zeil (Toggel-Funktion aus Klasse Gui)
    connect(m_timer, &QTimer::timeout, this, &Gui::toggle );
}

void Gui::on_startButton_clicked()
{
    m_timer->start(1000);
    blinkLable -> setText("1");
}

void Gui::toggle()
{
    qDebug() << "toggle";

}
