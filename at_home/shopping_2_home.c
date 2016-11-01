
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
void checkPrice(const struct Item items[],const int size);
void menu();


int main(){
   return 0;
}



/* Output




















Welcome to the Shop
===================
Please select from the following options:
1) Display the inventory.
2) Add to the inventory.
3) Check price.
4) Clear Screen.
0) Exit.
Select: 2
Please input a SKU number: 1234
Quantity: 23.90
Price: The item is successfully added to the inventory.
Please select from the following options:
1) Display the inventory.
2) Add to the inventory.
3) Check price.
4) Clear Screen.
0) Exit.
Select: 2
Please input a SKU number: 9010
Quantity: 5
Price: 89.20
The item is successfully added to the inventory.
Please select from the following options:
1) Display the inventory.
2) Add to the inventory.
3) Check price.
4) Clear Screen.
0) Exit.
Select: 2
Please input a SKU number: 8721
Quantity: 4
Price: 19.99
The item is successfully added to the inventory.
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
1234        0.90        23
9010        89.20       5
8721        19.99       4
=========================================
Please select from the following options:
1) Display the inventory.
2) Add to the inventory.
3) Check price.
4) Clear Screen.
0) Exit.
Select: 3
Please input the sku number of the item: 7777
Item does not exist in the shop! Please try again.
Please select from the following options:
1) Display the inventory.
2) Add to the inventory.
3) Check price.
4) Clear Screen.
0) Exit.
Select: 3
Please input the sku number of the item: 9010
Item 9010 costs $89.20
Please select from the following options:
1) Display the inventory.
2) Add to the inventory.
3) Check price.
4) Clear Screen.
0) Exit.
Select: 0
Goodbye!
*/



