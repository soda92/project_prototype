#pragma once
#include "ui_parts_manager.h"

#include <QWidget>

class PartsManager : public QWidget
{
  Q_OBJECT
  public:
  explicit PartsManager(QWidget *parent = nullptr);

  signals:
  private:
  Ui_Form ui;
};
