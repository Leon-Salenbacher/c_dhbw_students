#include <stdio.h>
#include <stdlib.h>

// Struktur für ein Element der singly linked list
struct Node 
{
    int data;
    struct Node* next;
};

// Funktion zum Erstellen eines neuen Elements
struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;

}

// Funktion zum Einfügen eines neuen Elements am Anfang der Liste
void insertAtBeginning(struct Node** head, int data)
{
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Funktion zum Löschen eines Elements aus der Mitte der Liste
void deleteFromMiddle(struct Node** head) 
{
    if (*head == NULL || (*head)->next == NULL) 
    {
        printf("Die Liste hat nicht genuegend Elemente, um eines aus der Mitte zu löschen.\n");
        return;
    }

    struct Node* slowPtr = *head;
    struct Node* fastPtr = *head;
    struct Node* prev = NULL;

    while (fastPtr != NULL && fastPtr->next != NULL) 
    {
        fastPtr = fastPtr->next->next;
        prev = slowPtr;
        slowPtr = slowPtr->next;
    }

    prev->next = slowPtr->next;
    free(slowPtr);
}

// Funktion zum Anzeigen der Liste
void displayList(struct Node* head) 
{
    struct Node* current = head;
    while (current != NULL) 
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Füge 10 Elemente zur Liste hinzu
    for (int i = 1; i <= 10; i++) 
    {
        insertAtBeginning(&head, i);
    }

    printf("Urspruengliche Liste:\n");
    displayList(head);

    // Lösche ein Element aus der Mitte
    deleteFromMiddle(&head);
    printf("Liste nach dem Loeschen eines Elements aus der Mitte:\n");
    displayList(head);

    return 0;
}
