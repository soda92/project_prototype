#pragma once

#include <QtPlugin>

QT_BEGIN_NAMESPACE
class QWidget;
QT_END_NAMESPACE

class AppInterface
{
  public:
  virtual QWidget* init() = 0;
  virtual void destroy() = 0;
};

QT_BEGIN_NAMESPACE
#define AppInterface_iid "org.qt-project.Qt.Examples.PlugAndPaint.AppPlugin/1.0"

Q_DECLARE_INTERFACE(AppInterface, AppInterface_iid)
QT_END_NAMESPACE
