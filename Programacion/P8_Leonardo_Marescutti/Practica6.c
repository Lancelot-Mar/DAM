#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *	Autor: Leonardo Marescutti
 */

#define MAX_AUTHOR 50 
#define MAX_TITTLE 100
#define NUM_BOOK 40

typedef enum {
	FICTION,
	NON_FICTION,
	ESSAY,
	POETRY,
	THEATER,
} Category;

typedef struct {
	int id;
	char tittle[MAX_TITTLE];
	char author[MAX_AUTHOR];
	float price;
	Category cat;
	int stock;
} Book;

void category(Category * Catalogue){
    
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
        default:printf("ERROR,"); 
    }
}

void BookList(Book * List){


    printf("%d,%s,%s,%.2f,",List->id,List->tittle,List->author,List->price);
    category(&List->cat);
    printf("%d\n",List->stock);

}

void BookID(Book * ID,int search){

    if((ID->id) == search){
        BookList(ID);
    }

}

void BookStock(Book * ID_Stock,int search,int stock_add){

    if((ID_Stock->id) == search){
        printf("%d,%s,%s,%.2f,",ID_Stock->id,ID_Stock->tittle,ID_Stock->author,ID_Stock->price);
        category(&ID_Stock->cat);
        printf("%d\n",ID_Stock->stock + stock_add);
    }

}

void BookCategory(Book * Catgory_Books,int category_number){
        
    if(Category_Book <= 4){
        for(int i = 0; i < NUM_BOOK; i++){
            if(((Catgory_Books+i)->cat) == category_number){
            BookList(Category_Books);
        }
    }
        }else{
        printf("ERROR,Book doesnt exist. Please insert a valid Category\n");
    }


}

int main(){

    int ID_Book,Stock_Book,Stock_IDBook,Category_Book;

    Book books[NUM_BOOK] = {
        {1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10},
        {2, "1984", "George Orwell", 12.49, FICTION, 5},
        {3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICTION, 8},
        {4, "Moby Dick", "Herman Melville", 18.99, FICTION, 12},
        {5, "War and Peace", "Leo Tolstoy", 20.00, FICTION, 7},
        {6, "Pride and Prejudice", "Jane Austen", 14.99, FICTION, 9},
        {7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICTION, 6},
        {8, "The Odyssey", "Homer", 17.49, FICTION, 4},
        {9, "Ulysses", "James Joyce", 25.00, FICTION, 2},
        {10, "The Divine Comedy", "Dante Alighieri", 22.00, POETRY, 3},
        {11, "Leaves of Grass", "Walt Whitman", 13.00, POETRY, 11},
        {12, "The Iliad", "Homer", 18.50, FICTION, 7},
        {13, "A Brief History of Time", "Stephen Hawking", 15.00, NON_FICTION, 15},
        {14, "The Art of War", "Sun Tzu", 9.99, NON_FICTION, 20},
        {15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NON_FICTION, 13},
        {16, "The Selfish Gene", "Richard Dawkins", 14.00, NON_FICTION, 6},
        {17, "The Road to Serfdom", "F.A. Hayek", 10.50, NON_FICTION, 5},
        {18, "The Wealth of Nations", "Adam Smith", 30.00, NON_FICTION, 8},
        {19, "On the Origin of Species", "Charles Darwin", 24.99, NON_FICTION, 4},
        {20, "The Prince", "Niccolò Machiavelli", 8.99, NON_FICTION, 14},
        {21, "Hamlet", "William Shakespeare", 11.50, THEATER, 6},
        {22, "Macbeth", "William Shakespeare", 9.50, THEATER, 8},
        {23, "Othello", "William Shakespeare", 10.99, THEATER, 7},
        {24, "A Doll's House", "Henrik Ibsen", 12.50, THEATER, 5},
        {25, "Waiting for Godot", "Samuel Beckett", 13.99, THEATER, 4},
        {26, "Death of a Salesman", "Arthur Miller", 14.99, THEATER, 10},
        {27, "The Glass Menagerie", "Tennessee Williams", 11.00, THEATER, 9},
        {28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, THEATER, 3},
        {29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, THEATER, 15},
        {30, "The Waste Land", "T.S. Eliot", 6.99, POETRY, 10},
        {31, "Paradise Lost", "John Milton", 12.00, POETRY, 7},
        {32, "Beowulf", "Anonymous", 15.00, POETRY, 5},
        {33, "Essays", "Michel de Montaigne", 20.00, ESSAY, 4},
        {34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ESSAY, 9},
        {35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ESSAY, 11},
        {36, "Meditations", "Marcus Aurelius", 11.99, ESSAY, 8},
        {37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ESSAY, 5},
        {38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ESSAY, 12},
        {39, "The Republic", "Plato", 16.00, ESSAY, 6},
        {40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ESSAY, 10}
    };

    // Add for inside the void functions

	for(int i = 0; i < NUM_BOOK; i++){
	BookList(&books[0]+i);
	}

    printf("Insert an ID:\n");
    scanf("%d", &ID_Book);

    if(ID_Book <= NUM_BOOK){

        for(int i = 0; i < NUM_BOOK; i++){
        BookID(&books[0]+i,ID_Book);
        }

    }else{
        printf("ERROR,Book doesnt exist. Please insert a valid ID(1-40)\n");
    }
    
    printf("Insert an ID:\n");
    scanf("%d", &Stock_IDBook);

    printf("Add Stock of the selected ID:\n");
    scanf("%d", &Stock_Book);

    if(Stock_IDBook <= NUM_BOOK){

        for(int i = 0; i < NUM_BOOK; i++){
        BookStock(&books[0]+i,Stock_IDBook,Stock_Book);
        }

    }else{
        printf("ERROR,Book doesnt exist. Please insert a valid ID(1-40)\n");
    }

    printf("Select a category(FICTION = 0,NON_FICTION = 1,ESSAY = 2,POETRY = 3 and THEATER = 4):\n");
    scanf("%d", &Category_Book);


        BookCategory(&books[0],Category_Book);
        


	return 0;
}

