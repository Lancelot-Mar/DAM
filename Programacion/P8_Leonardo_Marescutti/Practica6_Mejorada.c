#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *  Autor: Leonardo Marescutti
 */

//Aplico los define para definir los tamaños

#define MAX_AUTHOR 50 
#define MAX_TITTLE 100
#define NUM_BOOK 40

//Definimos el enum para las categorias de libros

typedef enum {
    FICTION,// => 0
    NON_FICTION,// => 1
    ESSAY,// => 2
    POETRY,// => 3
    THEATER,// => 4
} Category;

//Definimos la estructura de los libros con un struct

typedef struct {
    int id;
    char tittle[MAX_TITTLE];
    char author[MAX_AUTHOR];
    float price;
    Category cat;
    int stock;
} Book;

//Funcion Categoria en la cual pasamos del enum en decimal a imprimir el tipo de Categoria 

void category(Category * Catalogue){
    
    //Con un puntero a Cataloguo que es el hueco de memoria que defne el enum de categoria 
    //aplicamos un switch para cambiar los enteros de enum a printf para imprimir la categoria que necesitemos

    switch(*Catalogue){
        case 0:printf("FICTION,");
            break; 
        case 1:printf("NON_FICTION,"); 
            break; 
        case 2:printf("ESSAY,");
            break; 
        case 3:printf("POETRY,"); 
            break; 
        case 4:printf("THEATER,"); 
            break; 
        default:printf("ERROR,"); //En caso de que haya un numero superior al enum agrego un default que imprima erros
    }
}


void init_book(Book * inv,int ident,char * name,char * writter,float cost, Category class, int max){
    inv -> id = ident;
    strcpy(inv -> tittle, name);
    strcpy(inv -> author, writter);
    inv -> price = cost;
    inv -> cat = class;
    inv -> stock = max;
}

//Funcion para imprimir toda la lista de libros:

void BookList(Book * List){

    //Creo un bucle para recorrer todo el array incrementando el numero de 
    //este ultimo llendo 1 a 1 hasta llegar al maximo del defined NUM_BOOK

    for(int i = 0; i < NUM_BOOK; i++, List++){
    printf("%d,%s,%s,%.2f,",List->id,List->tittle,List->author,List->price);

    //Para imprimir la categoria llamo la funcion anterior para que imprima dependiendo 
    //del contenido de la categoria del libro, una vez devuelta la categoria siguo imprimiendo el stock

    category(&List->cat);
    printf("%d\n",List->stock);
    }
}

//Funcion para imprimir un solo libro:

void Print_Book(Book * PrintBook){

    //Repetimos lo mismo de la funcion anterior pero sin el bucle que recorre el array

    printf("%d,%s,%s,%.2f,",PrintBook->id,PrintBook->tittle,PrintBook->author,PrintBook->price);
    category(&PrintBook->cat);
    printf("%d\n",PrintBook->stock);

}

//Funcion para imprimir un solo libro por ID:

void BookID(Book * ID,const int search){

    //Creo un bucle para recorrer todo el array incrementando el numero de 
    //este ultimo llendo 1 a 1 hasta llegar al ID seleccionado

    for(int i = 0; i < NUM_BOOK; i++, ID++){
        if((ID->id) == search){
            Print_Book(ID); //Una vez encontrado este llama la funcion de Imprimir un Libro
        }
    }
}

//Funcion para aumentar stock:

void BookStock(Book * ID_Stock,const int search,const int stock_add){

    if(ID_Stock->id == search){ //Hacemos un condicional que ejecute lo siguiente solo si el contenido de id sea igual a search

            ID_Stock -> stock += stock_add;//Aumentamos el stock sumando el contenido de stock incrementandolo con el stock que hallamos dado antes.
            Print_Book(ID_Stock);//Imprimimos el libro una vez incrementado dandole el puntero al array de libros

    }
}

//Funcion para imprimir un solo libro por Categoria:

void BookCategory(Book * Category_Books,const int category_number){
        
    if(category_number < 5){//Hacemos un condicional para verificar quel numero sea valido

        //Creo un bucle para recorrer todo el array incrementando el numero de este ultimo llendo 1 a 1 hasta 
        //llegar al maximo del defined NUM_BOOK, incrementando el array que le damos

        for(int i = 0; i < NUM_BOOK; i++,Category_Books++){
            if((Category_Books->cat) == category_number){ //El bucle recorre hasta encontrar valores que tengan el mismo contenido(Verificamos el contenido de cat con la flecha) que el numero de la categoria que le demos
            Print_Book(Category_Books);//Llamo la funcion de imprimir un libro dandole el array incrementado a un valor con el id seleccionado
            }
        }
    }else{
        printf("ERROR,Book doesnt exist. Please insert a valid Category\n");//En caso de que haya un numero superior al enum agrego hago que imprima erros
    }
}

int main(int argc, char ** argv){

    //Definimos enteros y array con contenido de libros:

    int ID_Book,Stock_Book,Stock_IDBook,Category_Book,Option;

    Book * catalog = (Book *)malloc(NUM_BOOK*sizeof(Book));

    if(catalog == NULL){
        free(catalog);
        printf("ERROR\n");
        return EXIT_FAILURE;
    }

        init_book(&catalog[0],1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10);
        init_book(&catalog[1],2, "1984", "George Orwell", 12.49, FICTION, 5);
        init_book(&catalog[2],3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICTION, 8);
        init_book(&catalog[3],4, "Moby Dick", "Herman Melville", 18.99, FICTION, 12);
        init_book(&catalog[4],5, "War and Peace", "Leo Tolstoy", 20.00, FICTION, 7);
        init_book(&catalog[5],6, "Pride and Prejudice", "Jane Austen", 14.99, FICTION, 9);
        init_book(&catalog[6],7, "The catalogcher in the Rye", "J.D. Salinger", 10.00, FICTION, 6);
        init_book(&catalog[7],8, "The Odyssey", "Homer", 17.49, FICTION, 4);
        init_book(&catalog[8],9, "Ulysses", "James Joyce", 25.00, FICTION, 2);
        init_book(&catalog[9],10, "The Divine Comedy", "Dante Alighieri", 22.00, POETRY, 3);
        init_book(&catalog[10],11, "Leaves of Grass", "Walt Whitman", 13.00, POETRY, 11);
        init_book(&catalog[11],12, "The Iliad", "Homer", 18.50, FICTION, 7);
        init_book(&catalog[12],13, "A Brief History of Time", "Stephen Hawking", 15.00, NON_FICTION, 15);
        init_book(&catalog[13],14, "The Art of War", "Sun Tzu", 9.99, NON_FICTION, 20);
        init_book(&catalog[14],15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NON_FICTION, 13);
        init_book(&catalog[15],16, "The Selfish Gene", "Richard Dawkins", 14.00, NON_FICTION, 6);
        init_book(&catalog[16],17, "The Road to Serfdom", "F.A. Hayek", 10.50, NON_FICTION, 5);
        init_book(&catalog[17],18, "The Wealth of Nations", "Adam Smith", 30.00, NON_FICTION, 8);
        init_book(&catalog[18],19, "On the Origin of Species", "Charles Darwin", 24.99, NON_FICTION, 4);
        init_book(&catalog[19],20, "The Prince", "Niccolò Machiavelli", 8.99, NON_FICTION, 14);
        init_book(&catalog[20],21, "Hamlet", "William Shakespeare", 11.50, THEATER, 6);
        init_book(&catalog[21],22, "Macbeth", "William Shakespeare", 9.50, THEATER, 8);
        init_book(&catalog[22],23, "Othello", "William Shakespeare", 10.99, THEATER, 7);
        init_book(&catalog[23],24, "A Doll's House", "Henrik Ibsen", 12.50, THEATER, 5);
        init_book(&catalog[24],25, "Waiting for Godot", "Samuel Beckett", 13.99, THEATER, 4);
        init_book(&catalog[25],26, "Death of a Salesman", "Arthur Miller", 14.99, THEATER, 10);
        init_book(&catalog[26],27, "The Glass Menagerie", "Tennessee Williams", 11.00, THEATER, 9);
        init_book(&catalog[27],28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, THEATER, 3);
        init_book(&catalog[28],29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, THEATER, 15);
        init_book(&catalog[29],30, "The Waste Land", "T.S. Eliot", 6.99, POETRY, 10);
        init_book(&catalog[30],31, "Paradise Lost", "John Milton", 12.00, POETRY, 7);
        init_book(&catalog[31],32, "Beowulf", "Anonymous", 15.00, POETRY, 5);
        init_book(&catalog[32],33, "Essays", "Michel de Montaigne", 20.00, ESSAY, 4);
        init_book(&catalog[33],34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ESSAY, 9);
        init_book(&catalog[34],35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ESSAY, 11);
        init_book(&catalog[35],36, "Meditations", "Marcus Aurelius", 11.99, ESSAY, 8);
        init_book(&catalog[36],37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ESSAY, 5);
        init_book(&catalog[37],38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ESSAY, 12);
        init_book(&catalog[38],39, "The Republic", "Plato", 16.00, ESSAY, 6);
        init_book(&catalog[39],40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ESSAY, 10);

        if (argc == 1){}

        else if (argc == 3){

            if (strcmp(argv[1],"show") == 0){

                if ((atoi(argv[2])) < NUM_BOOK){
                        ID_Book = atoi(argv[2]);             
                        BookID(&catalog[0],ID_Book); 
                    }
                }

            if (strcmp(argv[1],"category") == 0){

                if ((atoi(argv[2])) < 6){
                    Category_Book = atoi(argv[2]);             
                    BookCategory(&catalog[0],Category_Book); 
                }
            }
        }
        else if (argc == 2){

            if (strcmp(argv[1],"show") == 0){
                BookList(&catalog[0]);
            }
        }

    //Creamos un Menu para seleccionar la funcion que queramos:

    printf("Menu:\n\
        - Show all books.(0)\n\
        - Display the book that matches the ID or an error message.(1)\n\
        - Increase the stock of the book ID.(2)\n\
        - Display all books in the given category as a storyline.(3)\n");

    scanf("%d",&Option); //Guardamos el valor del menu

    switch(Option){ //Hacemos un condicional para el menu

    case 0://Primera opcion imprimir toda la lista

        BookList(&catalog[0]); //llamamos la funcion de la lista de libros dandole la primera posicion del array de libros

        break; 

    case 1://Segunda opcion imprimir el libro por ID

        printf("Insert an ID:\n");
        scanf("%d", &ID_Book);//Guardamos el valor del ID

        if(ID_Book <= NUM_BOOK){//Hacemos un condicional para verifiacr quel numero sea valido
            //llamamos la funcion de la imprimir libro por ID dandole la primera posicion del array de libros y el ID que queremos
            BookID(&catalog[0],ID_Book);
        
        }else{//En caso de que el numero no sea valido imprime:
            printf("ERROR,Book doesnt exist. Please insert a valid ID(1-40)\n");
        }

        break; 

    case 2://Segunda opcion aumentar el stock por ID

        printf("Insert an ID:\n");
        scanf("%d", &Stock_IDBook);//Guardamos el valor del ID

        printf("Add Stock of the selected ID:\n");
        scanf("%d", &Stock_Book);//Guardamos el valor del stock que queremos sumar

        if(Stock_IDBook <= NUM_BOOK){//Hacemos un condicional para verificar quel numero sea valido

            //Esta vez hacemos el bucle fuera para que incremente el valor de i y recorra el array en el main
            for(int i = 0; i < NUM_BOOK; i++){

                //llamamos la funcion de la imprimir libro por stock dandole la primera posicion del array de libros, 
                //el ID que queremos y el stock que queremos agregarle
                BookStock(&catalog[0]+i,Stock_IDBook,Stock_Book);
            }

        }else{//En caso de que el numero no sea valido imprime:
            printf("ERROR,Book doesnt exist. Please insert a valid ID(1-40)\n");
        }

        break; 

    case 3:

        printf("Select a category(FICTION = 0,NON_FICTION = 1,ESSAY = 2,POETRY = 3 and THEATER = 4):\n");
        scanf("%d", &Category_Book);//Guardamos el valor de la categoria que queremos
        
        //llamamos la funcion de la imprimir libro por categoria dandole la primera posicion del array de libros y el numero de categoria que queremos
        BookCategory(&catalog[0],Category_Book); 
        break; 

    default:printf("ERROR,Please enter a valid entry"); } //En caso de que el numero no sea valido imprime:

    free(catalog);

    return 0;
}