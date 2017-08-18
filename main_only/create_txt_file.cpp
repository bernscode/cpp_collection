#include <cstdio>

using namespace std;

int main(){

  int jerseyNum = 84;
  double salary = 13618333.00;
  const char * s = "Antonio Brown";

  FILE * fh = fopen("player.txt", "w");
  fprintf(fh, "Player: %s\nJersey Number: %d\n2017 Salary: %.2lf", s, jerseyNum, salary);

  return 0;
}
