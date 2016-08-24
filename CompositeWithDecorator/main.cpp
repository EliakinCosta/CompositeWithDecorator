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

    Composite *paiDeTodos = new Composite;
    Component *cereais = new Composite;
    Component *laticinios = new Composite;
    Component *arroz = new Arroz(2.5);

    paiDeTodos->addComponent(cereais);
    paiDeTodos->addComponent(laticinios);
    cereais->addComponent(arroz);

    //cadeia
    Decorator *twitter = new TwitterDecorator;
    Decorator *log = new LogDecorator;
    log->setDecorated(twitter);
    paiDeTodos->setFirstDecorator(log);

    paiDeTodos->aumentarPreco(0.15);

    return a.exec();
}
