#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head peger på det første tomme element, sidste elements next bliver NULL
    post: en ny node som indeholder x bliver tilføjet til sidst i listen*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){

  node *p = l; // Pointer som peger på node elementets *next
  int i = 0;

  while (p->next != NULL) { // Kører loop ind til next = NULL
    p = p->next; // sætter p til at pege på node elementets next
    i++; //tæller længden af listen, selvom første tomme element bliver talt med går det op, da sidste element ikke bliver talt med
  }
    return i;
}

void printout(node *l) {

    node *p = l->next; // laver en pointer p, som peger på første ikke tomme element
  
    while (p!=NULL){
      printf("%d, ",p->data); // Printer data værdierne
      p = p->next; // Pointer peger nu på elementets next
    }
    printf("\n");
}

int largest(node *l){
      /*
      pre: head peger på det første tomme element. sidste elements next er NULL,size(l>0)
      post: returnerer den største værdi i listen */

    node *p = l->next; // Laver en pointer på det første tomme element
    int result = p->data; // variabel til at gemme resultaterne
    
    while(p->next!=NULL) { // Kører loopet indtil sidste element
    if (p->data > result) { 
        result = p->data; // Opdaterer result til nuværende største værdi
    }
    p = p->next; // Opdaterer p til næste element
    }

    return result;
}