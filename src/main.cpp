
// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    return 0;
}

void printout(node *l) {
/*pre: head points to the first, empty element.
The last element’s next is NULL
post: the values of the list are printed out*/
node *p = l->next;
while (p!=NULL){
printf("\%d, ",p->data);
}
printf("\n");
}