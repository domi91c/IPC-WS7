
#include <stdio.h>

#define MAX_ITEMS 10
struct Item {
       int _sku;
       float _price;
       int _quantity;
};


void displayInventory(const struct Item items[],const int size);
void clear();
int validate(const int low, const int high);
void displayInventory(const struct Item items[],const int size);
int searchInventory(const struct Item items[],const int sku_item,const int size);
void addItem(struct Item items[], int *size);
void menu();
void checkPrice();



int main(){
   return 0;
}


/* output:




















Welcome to the Shop
===================
Please select from the following options:
1) Display the inventory.
2) Add to the inventory.
3) Check price.
4) Clear Screen.
0) Exit.
Select: 5
Invalid input, try again: 2
Please input a SKU number: 1234
Quantity: 2
Price: 45.63
The item is successfully added to the inventory.
Please select from the following options:
1) Display the inventory.
2) Add to the inventory.
3) Check price.
4) Clear Screen.
0) Exit.
Select: 2
Please input a SKU number: 9010
Quantity: 5
Price: 23.50
The item is successfully added to the inventory.
Please select from the following options:
1) Display the inventory.
2) Add to the inventory.
3) Check price.
4) Clear Screen.
0) Exit.
Select: 2
Please input a SKU number: 1234
Quantity: 5
The item exists in the repository, quantity is updated.
Please select from the following options:
1) Display the inventory.
2) Add to the inventory.
3) Check price.
4) Clear Screen.
0) Exit.
Select: 1


Inventory
=========================================
Sku         Price       Quantity
1234        45.63       7
9010        23.50       5
=========================================
Please select from the following options:
1) Display the inventory.
2) Add to the inventory.
3) Check price.
4) Clear Screen.
0) Exit.
Select: 0
Goodbye!
*/


