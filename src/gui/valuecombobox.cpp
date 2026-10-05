// SPDX-License-Identifier: GPL-3.0-or-later

#include "valuecombobox.h"

ValueComboBox::ValueComboBox(QWidget *parent)
    : QComboBox(parent)
{
}

QString ValueComboBox::currentValue() const
{
    return currentData().toString();
}

void ValueComboBox::setCurrentValue(const QString &value)
{
    const int index = findData(value);
    if (index != -1)
        setCurrentIndex(index);
}
