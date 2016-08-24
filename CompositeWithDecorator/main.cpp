#include <QCoreApplication>
#include <component.h>
#include <decorator.h>
#include <composite.h>
#include <arroz.h>
#include <twitterdecorator.h>
#include <logdecorator.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Component *paiDeTodos = new Composite;
    Component *cereais = new Composite;
    Component *laticinios = new Composite;
    Component *arroz = new Arroz(2.0);

    paiDeTodos->addComponent(cereais);
    cereais->addComponent(arroz);

    //cadeia
    Decorator *twitter = new TwitterDecorator;
    Decorator *log = new LogDecorator;
    log->setDecorated(twitter);
    cereais->setFirstDecorator(log);

    paiDeTodos->aumentarPreco(0.15);

    return a.exec();
}
