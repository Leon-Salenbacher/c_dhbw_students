// Zusammenfassung des Programms:
// - Das Programm erstellt 5 Threads.
// - Jeder Thread führt die Funktion printHello() aus, die eine Begrüßungsnachricht mit seiner eigenen Thread-ID ausgibt.

#include <stdio.h>   // Für die Verwendung von printf() zur Konsolenausgabe
#include <stdlib.h>  // Für die Verwendung von exit() zur Beendigung des Programms bei Fehlern
#include <pthread.h> // Für die Arbeit mit POSIX-Threads (pthreads)

#define NUM_THREADS 5 // Definiert die Anzahl der Threads, die erstellt werden sollen

// Funktion, die von jedem Thread ausgeführt wird
void *printHello(void *threadid)
{
    long threadID;
    threadID = (long)threadid;                                // Konvertiert den übergebenen void*-Pointer zurück in einen long-Wert
    printf("Hello World! It's me, thread #%ld!\n", threadID); // Gibt eine Nachricht mit der Thread-ID aus
    pthread_exit(NULL);                                       // Beendet den aktuellen Thread sauber
}

int main()
{
    pthread_t threads[NUM_THREADS]; // Array zum Speichern der Thread-IDs
    int rc;                         // Variable zum Speichern des Rückgabewerts von pthread_create()
    long t;                         // Variable für die Thread-Nummerierung

    // Schleife zum Erstellen von NUM_THREADS Threads
    for (t = 0; t < NUM_THREADS; t++)
    {
        printf("In main: creating thread %ld\n", t); // Gibt aus, dass ein neuer Thread erstellt wird

        // Erstellen des Threads
        rc = pthread_create(&threads[t], NULL, printHello, (void *)t);
        /*
            pthread_create Parameter:
            - &threads[t]: Speicherort, an dem die Thread-ID gespeichert wird
            - NULL: Standard-Thread-Attribute (keine speziellen Einstellungen)
            - printHello: Die Funktion, die vom Thread ausgeführt werden soll
            - (void *)t: Übergibt die Thread-Nummer als Argument (muss in void* konvertiert werden)
        */

        if (rc) // Überprüfen, ob pthread_create erfolgreich war
        {
            printf("ERROR; return code from pthread_create() is %d\n", rc); // Fehlermeldung bei Fehler
            exit(-1);                                                       // Beendet das Programm mit einem Fehlercode
        }
    }

    // Warten, bis alle Threads beendet sind (wichtig, um sicherzustellen, dass das Hauptprogramm nicht vorher beendet wird)
    for (t = 0; t < NUM_THREADS; t++)
    {
        pthread_join(threads[t], NULL);
        /*
            pthread_join wartet auf das Ende des Threads:
            - threads[t]: Der Thread, auf den gewartet werden soll
            - NULL: Keine Rückgabe des Rückgabewerts des Threads erforderlich
        */
    }

    printf("Main: program completed. Exiting.\n"); // Abschlussmeldung, wenn alle Threads beendet sind
    pthread_exit(NULL);                            // Beendet das Hauptprogramm sauber (besonders nützlich bei Verwendung von Threads)
}
