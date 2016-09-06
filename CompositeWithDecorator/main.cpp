#include <QCoreApplication>
#include <component.h>
#include <decorator.h>
#include <composite.h>
#include <arroz.h>
#include <twitterdecorator.h>
#include <logdecorator.h>
#include <component.h>
#include <queijo.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Decorator *decoratorStart = new TwitterDecorator(
                                   new LogDecorator
                               );
    Component *compositeRoot = new Composite;
    Component *cereaisRoot = new Composite;
    Component *laticiniosRoot = new Composite;
    cereaisRoot->addChild(new Arroz(4.0));
    laticiniosRoot->addChild(new Queijo(10.0));
    compositeRoot->addChild(cereaisRoot);
    compositeRoot->addChild(laticiniosRoot);

    Composite::setDecorator(decoratorStart);
    compositeRoot->aumentarPreco(0.1);
    return a.exec();
}
