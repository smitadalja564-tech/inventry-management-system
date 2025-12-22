// inventory mmanagment system create by me

// add a new product and its prices ---

// display all prices and product ---

// search prodect by id

// product purchasing

// update product details

// billing

#include <iostream>
using namespace std;
const int sizes = 100;
int qty = 0;
int productCount  = 0;
int finalbasket;
string productname[sizes];
int price[sizes];
int f = 0;

void products(int qtyy)
{

    productCount  = productCount  + qtyy;

    for (int i = 0; i < qtyy; i++)
    {

        cout << "enter product name : index [" << f << "]  :";
        cin >> productname[f];
        cout << "enter price : index [" << f << "] :";
        cin >> price[f];
        f = f + 1;
    }
}

void display_product()
{
    cout << "product name : price\n";
    for (int i = 0; i < f; i++)
    {
        cout << i << "\t" << productname[i] << "\t" << price[i] << endl;
    }
}

void searching(string searching_product)
{
    for (int i = 0; i < f; i++)
    {
        if (productname[i] == searching_product)
        {
            cout << "\tcontainer number\tproduct name\tprice\n";
            cout << i << "\t" << productname[i] << "\t" << price[i] << endl;
            break;
        }
    }
}

void purchasing()
{

    int d, q, basket = 0;
    string p;
    display_product();
    cout << "welcome to our store\n";
    do
    {
        cout << "enter product name you want to purchase :";
        cin >> p;
        for (int i = 0; i < f; i++)
        {

            if (p == productname[i])
            {
                cout << "enter quanity :";
                cin >> q;
                basket = basket + (q * price[i]);
            }
        }
        cin >> d;
    } while (d != 5);
    finalbasket = basket;
}
void billing()
{

    cout << "your bill is :" << finalbasket;
    int s;
    cout << "\n choose you payment method : \n1)upi \n2)debit card3)\ncredit card \n4)cash";
    cin >> s;
    cout << "your bill is done \n thank you for visiting shop ";
}
void update()
{

    string si, ci;
    int ii;
    cout << "enter product name you want to update :";
    cin >> si;
    cout << "enter new product name :";
    cin >> ci;
    cout << "enter new product price :";
    cin >> ii;

    for (int i = 0; i < f; i++)
    {
        if (si == productname[i])
        {
            productname[i] = ci;
            price[i] = ii;
        }
    }
}

int main()
{

    int a;
    int x;
    string j;

    cout << "\t\t\t==========================================" << endl;
    cout << "\t\t\t welcome to our inventory managment system " << endl;
    cout << "\t\t\t==========================================" << endl;

    do
    {

        cout << "1)add a new product and its price\n2)display all product and prices\n3)search product by ID\n4)product purchasing\n5)update product details\n6)billing\n7)exit\n";
        cout << "enter your chhoice :-";
        cin >> a;

        if (a == 1)
        {
            cout << "enter quantity : ";
            cin >> x;
            products(x);
        }
        else if (a == 2)
        {
            display_product();
        }
        else if (a == 3)
        {
            cout << "enter product name :";
            cin >> j;
            searching(j);
        }
        else if (a == 4)
        {
            purchasing();
        }
        else if (a == 5)
        {
            update();
        }
        else
        {
            billing();
        }

    } while (a <= 6);
}
