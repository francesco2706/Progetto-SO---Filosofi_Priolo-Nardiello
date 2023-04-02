#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

#define NUM_FIL 5
#define PENSA 2
#define AFFAMATO 1
#define MANGIA 0
#define SINISTRA (filosofi+4) % NUM_FIL
#define DESTRA (filosofi+1) % NUM_FIL

int stato[NUM_FIL];
int fil[NUM_FIL] = {0,1,2,3,4};

sem_t mutex;
sem_t F[NUM_FIL];

void verifica(int filosofi);
void prendeForchetta(int filosofi);
void lasciaForchetta(int filosofi);
void* filosofo(void* num);

int main(){
    int i;
    pthread_t fil_id[NUM_FIL];
}
