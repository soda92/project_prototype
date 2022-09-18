#include "mainapp.h"
#include "plugin_interface.h"
#include "ui_mainapp.h"
#include <QPluginLoader>
#include <QProcessEnvironment>

MainApp::MainApp(QWidget *parent)
  : QMainWindow(parent)
    , ui(new Ui::MainApp)
{
  ui->setupUi(this);
  //  this->showMaximized();
  auto app_dir = QProcessEnvironment::systemEnvironment().value("APP_DIR");
  auto plugin = app_dir + "/plugin/" + "parts_manager.dll";
  QPluginLoader loader(plugin);
  auto p = qobject_cast<AppInterface *>(loader.instance());
  QWidget *w = p->init();
  ui->main_area->layout()->addWidget(w);
  w->show();
}

MainApp::~MainApp()
{
  delete ui;
}

