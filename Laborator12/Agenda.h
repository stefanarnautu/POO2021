#ifndef _AGENDA_H
#define _AGENDA_H


#include <string>
using namespace std;

class Prieten;

class Agenda {
  public:
    void cauta_contact(string nume);

    Prieten lista_prieteni();

    bool sterge_contact();

    bool add_contact(string nume, int tip);

};
#endif
