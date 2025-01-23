#include <stdio.h>
#include <stdlib.h>

// Struktur für ein Element der SLL

// Funktion zum Einfügen eines neunen Elements
// Funktion zum Einfügen eines neunen Elements am Anfang der Liste
// Funktion zum Löschen eines Elements aus der Mitte der Liste#
// Funktion zum Anzeigen der Liste

int main() {
    struct Node* head = NULL;

    // Füge 10 Elemente zur Liste hinzu
    for (int i = 1; i <= 10; i++) 
    {
        insertAtBeginning(&head, i);
    }

    printf("Ursprüngliche Liste:\n");
    displayList(head);

    // Lösche ein Element aus der Mitte
    deleteFromMiddle(&head);
    printf("Liste nach dem Löschen eines Elements aus der Mitte:\n");
    displayList(head);

    return 0;
}
