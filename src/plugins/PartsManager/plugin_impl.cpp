#include "plugin_impl.h"
#include "parts_manager.h"

QWidget* PartsManagerPlugin::init()
{
  w_ = new PartsManager();
  return w_;
}

void PartsManagerPlugin::destroy()
{
  delete w_;
}
