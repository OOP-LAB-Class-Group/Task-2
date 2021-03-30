#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

class human {
  char *name;
  char *surname;
  int lenn, lens;

 public:
  human(char *pn, char *ps);
  ~human();
  void show();
};

human::human(char *pn, char *ps) {
  lenn = strlen(pn);
  lens = strlen(ps);
  name = (char *)malloc(lens + 1);
  if (!name || !surname) exit(1);
  strcpy(name, pn);
  strcpy(surname, ps);
};

human::~human() {
  free(name);
  free(surname);
};

void human::show() {
  cout << name << " "
      << " - length: " << lenn + lens << endl;
};

int main() {
  char nm1[25], snm1[25], nm2[25], snm2[25];

  cout << "Enter first name and surname" << endl;
  cin >> nm1 >> snm1;
  cout << "Enter second name and surname" << endl;
  cin >> nm2 >> snm2;

  human s1(nm1, snm1), s2(nm2, snm2);
  s1.show();
  s2.show();
  s2 = s1;
  s1.show();
  s2.show();
  return 0;
}