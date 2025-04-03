#ifndef OBJECTSMANAGER_H
#define OBJECTSMANAGER_H

#include "object.h"

class ObjectsManager
{
public:
    ObjectsManager();
    void addObject(Object);
    Object& getObject(QString objName);

private:
    QVector<Object> objects;

};

#endif // OBJECTSMANAGER_H
