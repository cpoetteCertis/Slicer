#ifndef __qMRMLRangeWidgetPlugin_h
#define __qMRMLRangeWidgetPlugin_h

#include "qMRMLWidgetsAbstractPlugin.h"

class QMRML_WIDGETS_PLUGIN_EXPORT qMRMLRangeWidgetPlugin : public QObject,
                                public qMRMLWidgetsAbstractPlugin
{
  Q_OBJECT

public:
  qMRMLRangeWidgetPlugin(QObject *_parent = 0);

  QWidget *createWidget(QWidget *_parent);
  QString  domXml() const;
  QIcon    icon() const;
  QString  includeFile() const;
  bool     isContainer() const;
  QString  name() const;
};

#endif
