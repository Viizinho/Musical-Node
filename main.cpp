#include <iostream>
#include "library.h"

struct nodeMusic{
    char name[100];
    struct nodeMusic *next;
}

struct nodePlaylist{
    char name[100];
    struct nodeMusic *next;
    struct nodePlaylist *next;
}

struct list{
    struct nodePlaylist *beginning;
}

int main() {
    return 0;
}

List* create_list(){
    List* l = (List*) malloc(sizeof(List));
    if (!l) return NULL;
    l->beginning = NULL;
    return l;
}

nodeMusic* create_music(char name){
    nodeMusic* n = (nodeMusic*) malloc(sizeof(nodeMusic));
    if (!n) return NULL;
    n -> name = name;
    n -> next = NULL;
    return n;
}

nodePlaylist* create_playlist(char name){
    nodePlaylist* n = (nodePlaylist*) malloc(sizeof(nodePlaylist));
    if (!n) return NULL;
    n -> name = name;
    n -> next = NULL;
    return n;
}

bool insert_playlist(List* l, char name) {
    if(!l) return false;
    if(l -> beginning == NULL) return insere_inicio (l, info);
    nodePLaylist* aux = l -> inicio;
    while(aux -> next != NULL) {
        aux = aux -> next;
    }
    aux -> next = cria_no(name);
    return (aux -> next != NULL);
}
