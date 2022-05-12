#ifndef SVC
#define SVC

struct SVCREGS
{
   unsigned int R0;
   unsigned int R1;
   unsigned int R15;
};

void EXSVC(int svc, struct SVCREGS *regs);

#endif
