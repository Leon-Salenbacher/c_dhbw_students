// Eine Race Condition tritt auf, wenn zwei oder mehr Threads gleichzeitig auf gemeinsame Ressourcen (z.B. Variablen, Speicherbereiche, Dateien) zugreifen und dabei mindestens ein Thread schreibend tätig ist.
// Das Problem dabei ist, dass das Endergebnis von der Reihenfolge der Zugriffe abhängt – und diese Reihenfolge ist bei paralleler Ausführung nicht vorhersehbar.

// Beispiel für eine Race Condition:
// Stell dir vor, zwei Threads wollen gleichzeitig eine gemeinsame Variable counter erhöhen:

#include <stdio.h>
#include <pthread.h>

int counter = 0; // Gemeinsame Ressource

void *incrementCounter(void *arg)
{
    (void)arg; // Unused parameter

    for (int i = 0; i < 1000000; i++)
    {
        counter++; // Kritischer Bereich (Race Condition möglich!)
    }
    return NULL;
}

int main()
{
    pthread_t t1, t2;

    pthread_create(&t1, NULL, incrementCounter, NULL);
    pthread_create(&t2, NULL, incrementCounter, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Final counter value: %d\n", counter); // Erwartet: 2.000.000, aber oft weniger!
    return 0;
}

// Erwartetes Ergebnis: 2000000
// Tatsächliches Ergebnis: Unterschiedlich! (z.B. 1789342, 1999451, etc.)
// Warum? → Threads überschneiden sich beim Zugriff auf counter. Sie lesen alte Werte, bevor der andere Thread seine Änderungen abgeschlossen hat.