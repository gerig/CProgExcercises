#include <stdio.h>

main() {
  int a = 10;
  int i;

  asm("\t movl %%esp,%0" : "=r"(i));
  printf("Inhalt esp:\t\t %X\n", i);

  asm("\t movl %%ebp,%0" : "=r"(i));
  printf("Inhalt ebp:\t\t %X\n", i);

  printf("Speicheradresse a:\t %x\n", &a);
  printf("Wert von a:\t\t %d\n", a);

  sub(a);

  printf("\nUnterprogramm beendet\n\n");

  asm("\t movl %%esp,%0" : "=r"(i));
  printf("Inhalt esp:\t\t %X\n", i);

  asm("\t movl %%ebp,%0" : "=r"(i));
  printf("Inhalt ebp:\t\t %X\n", i);

  printf("Speicheradresse a:\t %x\n", &a);
  printf("Wert von a:\t\t %d\n", a);
}

sub(int b) {
  int i;

  printf("\nUnterprogramm gestartet\n\n");

  b = b - 1;

  asm("\t movl %%esp,%0" : "=r"(i));
  printf("Inhalt esp:\t\t %X\n", i);

  asm("\t movl %%ebp,%0" : "=r"(i));
  printf("Inhalt ebp:\t\t %X\n", i);

  printf("Speicheradresse b:\t %x\n", &b);
  printf("Wert von b:\t\t %d\n", b);
}
