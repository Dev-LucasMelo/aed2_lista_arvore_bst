#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

typedef struct no {
    int valor;
    struct no *esq;
    struct no *dir;
} no;

typedef no* arvore;

//1
arvore inserir(arvore raiz, int valor);

//2
void preorder(arvore raiz);

//3
void inorder(arvore raiz);

//4
void posorder(arvore raiz);

//5
void reverso(arvore raiz);

//6
int qtdPar(arvore raiz);

//8
int pai(arvore raiz,int valor);

//9
arvore remover(arvore raiz,int valor);

//10
int somaPar(arvore raiz);

//11
arvore podar(arvore raiz, int valor);

//12
void dobro(arvore raiz);

//13
int busca(arvore raiz, int valor);

//14
void descendentes(arvore raiz, int valor);

#endif // BST_H_INCLUDED
