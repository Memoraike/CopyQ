// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include <QComboBox>

/**
 * Combo box with current value taken from item data
 * so it can be bound to a string option.
 */
class ValueComboBox final : public QComboBox
{
    Q_OBJECT
    Q_PROPERTY(QString currentValue READ currentValue WRITE setCurrentValue USER true)
public:
    explicit ValueComboBox(QWidget *parent = nullptr);

    QString currentValue() const;

    void setCurrentValue(const QString &value);
};
