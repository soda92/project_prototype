#pragma once
#include "plugin_interface.h"

class PartsManagerPlugin : public QObject, AppInterface
{
  Q_OBJECT
  Q_PLUGIN_METADATA(IID "org.qt-project.Qt.Examples.PlugAndPaint.AppPlugin/1.0")
  Q_INTERFACES(AppInterface)
  public:
  QWidget* init() override final;
  void destroy() override final;

  private:
  QWidget* w_;
};
