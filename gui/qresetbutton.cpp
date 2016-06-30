#include "gui/qresetbutton.h"

QResetButton::QResetButton( QWidget* parent) : QLabel(parent)
{
    setText("Again?");
    setAlignment(Qt::AlignCenter);
    setStyleSheet("QResetButton { background-color: rgb(143,122,102); border-radius: 10px; font: bold; color: white; }");
}

void QResetButton::mousePressEvent(QMouseEvent* event)
{
    emit clicked();
}
