#ifndef _CONTACT_H
#define _CONTACT_H


#include <string>
using namespace std;
#include <vector>
using namespace std;

class Agenda;

class Contact {
  private:
    string Name;

    vector<Agenda *> Contacte;

};
#endif
