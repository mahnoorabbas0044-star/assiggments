#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    const int capacity = 100;
    string fruitNames[capacity] = {"Apple","Banana","Mango","Orange","Grapes"};
    float fruitPrices[capacity] = {200,60,150,120,250};
    int fruitStock[capacity] = {50,100,30,40,20};
    int items = 5;

    while(true) {
        system("cls");
        cout<<"========================================"<<endl;
        cout<<"       FRUIT STALL MANAGEMENT SYSTEM    "<<endl;
        cout<<"========================================"<<endl;
        cout<<"1 Seller Login"<<endl;
        cout<<"2 Buyer Menu"<<endl;
        cout<<"3 Exit"<<endl;
        cout<<"Choose Option: "<<endl;
        string Option;
        cin>>Option;
        if(Option=="3")
        break;

        // SELLER SECTION
        if(Option=="1") {
            cout<<"Enter Password: "<<endl;
            string password;
            cin>>password;
            if(password=="123") {
                while(true) {
                    system("cls");
                    cout<<"--- SELLER MENU ---"<<endl;
                    cout<<"1 Add New Fruit"<<endl;
                    cout<<"2 Update Price or Stock"<<endl;
                    cout<<"3 Delete Product"<<endl;
                    cout<<"4 View Inventory"<<endl;
                    cout<<"5 Check Low Stock"<<endl;
                    cout<<"6 Sort according to Price"<<endl;
                    cout<<"7 Restock the Product"<<endl;
                    cout<<"8 Clear All Products"<<endl;
                    cout<<"9 Calculate Total Value"<<endl;
                    cout<<"10 Exit"<<endl;
                    cout<<"Select any of the above given Options: "<<endl;

                    string sellerOption;
                    cin>>sellerOption;

                    if(sellerOption=="1") { // Adding details
                        cout<<"Name: "; 
                        cin>>fruitNames[items];
                        cout<<"Price: ";
                        cin>>fruitPrices[items];
                        cout<<"Stock: ";
                        cin>>fruitStock[items];
                        items++; 
                        cout<<"The Product is Added!"<<endl;
                        cout<<"Enter any letter to continue"<<endl; 
                        getch();
                    }
                    else if(sellerOption=="2") { // Update
                        cout<<"Enter fruit name: "; 
                        string name; 
                        cin>>name;
                        for(int i=0;i<items;i++){
                            if(fruitNames[i]==name) {
                                cout<<"New Price: "; 
                                cin>>fruitPrices[i];
                                cout<<"New Stock: "; 
                                cin>>fruitStock[i];
                            }
                        }
                            cout<<"Enter any letter to continue"<<endl;
                        getch();
                    }
                    else if(sellerOption=="3") { // Delete
                        cout<<"Enter name: "; 
                        string name; 
                        cin>>name;
                        for(int i=0;i<items;i++){
                            if(fruitNames[i]==name) {
                                for(int j=i;j<items-1;j++) {
                                    fruitNames[j]=fruitNames[j+1];
                                    fruitPrices[j]=fruitPrices[j+1];
                                    fruitStock[j]=fruitStock[j+1];
                                }
                                items--; 
                                cout<<"The product and its details have been Deleted!"; 
                                break;
                            }
                        }
                            cout<<"Enter any letter to continue"<<endl;
                        getch();
                    }
                    else if(sellerOption=="4") { // View
                        cout<<"Name\tPrice\tStock\n";
                        for(int i=0;i<items;i++){
                            cout<<fruitNames[i]<<"\t"<<fruitPrices[i]<<"\t"<<fruitStock[i]<<endl;
                        }
                            cout<<"Enter any letter to continue"<<endl;
                        getch();
                    }
                    else if(sellerOption=="5") { // Low Stock
                        cout<<"Low Stock (<10kg):"<<endl;
                        for(int i=0;i<items;i++){
                            if(fruitStock[i]<10){
                                 cout<<fruitNames[i]<<" ("<<fruitStock[i]<<"kg)\n";
                                }
                            }
                                cout<<"Enter any letter to continue"<<endl;
                                getch();
                    }
                    else if(sellerOption=="6") {  //  Sort
                        for(int i=0;i<items-1;i++){
                            for(int j=0;j<items-i-1;j++){
                                if(fruitPrices[j]>fruitPrices[j+1]) {
                                    int tempPrice = fruitPrices[j];
                                    fruitPrices[j]=fruitPrices[j+1];
                                    fruitPrices[j+1]= tempPrice;

                                    string tempName = fruitNames[j]; 
                                    fruitNames[j]=fruitNames[j+1];
                                    fruitNames[j+1] = tempName;

                                    int tempStock = fruitStock[j];
                                    fruitStock[j]=fruitStock[j+1];
                                    fruitStock[j+1] = tempStock;
                                }
                            }
                        }
                        cout<<"Products have been Sorted by Price ";
                        cout<<"Enter any letter to continue"<<endl; 
                        getch();
                    }
                    else if(sellerOption == "7") {  //  Restock
                        cout<<"Enter fruit name: "; 
                        string name; 
                        cin>>name;
                        cout<<"Enter quantity to add: "; 
                        int quant; 
                        cin>>quant;
                        for(int i=0;i<items;i++){
                            if(fruitNames[i]==name) { 
                                fruitStock[i]+=quant; 
                                cout<<"Restocked!"; 
                            }
                        }
                            cout<<"Enter any letter to continue"<<endl;
                        getch();
                    }
                    else if(sellerOption=="8") {  //  Clear
                        items=0; 
                        cout<<"All cleared";
                        cout<<"Enter any letter to continue"<<endl; 
                        getch();
                    }
                    else if(sellerOption =="9") {  //  Total Value
                        float total=0;
                        for(int i=0;i<items;i++){ 
                        total+=fruitPrices[i]*fruitStock[i];
                        }
                        cout<<"Total Value: Rs "<<total;
                        cout<<"Enter any letter to continue"<<endl; 
                        getch();
                    }
                    else if(sellerOption=="10") 
                    break;
                }
            }
        }

        // BUYER SECTION
        else if(Option=="2") {
            while(true) {
                system("cls");
                cout<<"--- BUYER MENU ---"<<endl;
                cout<<"1 View Fruits "<< endl;
                cout<<"2 Search Fruit"<<endl;
                cout<<"3 Buy Fruit"<<endl;
                cout<<"4 Sort by Price "<< endl;
                cout<<"5 View Cheapest Fruit"<<endl;
                cout<<"6 View Most Expensive Fruit"<<endl;
                cout<<"7 Check Availability"<<endl;
                cout<<"8 Bill History "<<endl;
                cout<<"9 Suggest Alternatives"<<endl;
                cout<<"10 Back "<<endl;
                cout<<"Select any of the above given Option: "<<endl;
            
                string buyerOption; 
                cin>>buyerOption;

                if(buyerOption=="1") { // View
                    for(int i=0;i<items;i++){
                        cout<<i+1<<". "<<fruitNames[i]<<" - Rs " <<fruitPrices[i] <<"/kg ("<<fruitStock[i]<<"kg )"<<endl;
                    }
                    cout<<"Enter any letter to continue"<<endl;
                    getch();
                }
                else if(buyerOption=="2") { // Search
                    cout<<"Search: "; 
                    string search; 
                    cin>>search;
                    for(int i=0;i<items;i++){
                        if(fruitNames[i]==search) {cout<<"Found! Rs "<<fruitPrices[i]<<"/kg"<<endl;}
                    }
                    cout<<"Enter any letter to continue"<<endl;
                    getch();
                }
                else if(buyerOption==" 3 ") { // Buy
                    cout<<"Fruit: "<<endl; 
                    string buy; 
                    cin>>buy;
                    cout<<"Weight (kg): "<<endl; 
                    float weight; 
                    cin>>weight;
                    for(int i=0;i<items;i++){
                        if(fruitNames[i]== buy && fruitStock[i]>=weight) {
                            float total= weight*fruitPrices[i];
                            fruitStock[i]-= weight;
                            cout<<"------- RECEIPT -------"<<endl;
                            cout<<"Item: "<<buy <<endl;
                            cout<<"Total: Rs "<< total<<endl;
                        }
                    }
                    cout<<"Enter any letter to continue"<<endl;
                    getch();
                }
                else if(buyerOption == "4") { // Sorted
                    for(int i=0;i<items-1; i++){
                        for(int j=0;j<items-i-1;j++){
                            if(fruitPrices[j]>fruitPrices[j+1]) {
                                int tempPrice = fruitPrices[j];
                                fruitPrices[j]=fruitPrices[j+1];
                                fruitPrices[j+1]= tempPrice;

                                string tempNames = fruitNames[j];
                                fruitNames[j]=fruitNames[j+1];
                                fruitNames[j+1]=tempNames;

                                int tempStock = fruitStock[j];
                                fruitStock[j]=fruitStock[j+1];
                                fruitStock[j+1]=tempStock;
                            }
                        }
                    }
                    cout<<"Sorted by Price!";
                    cout<<"Enter any letter to continue"<<endl; 
                    getch();                                                                      
                }
                else if(buyerOption== "5") { // Most Cheap
                    int min=0;
                    for(int i=1;i<items;i++){
                        if(fruitPrices[i]<fruitPrices[min]) 
                        min= i;
                    }
                    cout<<"Cheapest: "<<fruitNames[min] << " Rs "<<fruitPrices[min]<<endl;
                    cout<<"Enter any letter to continue"<<endl;
                    getch();
                }
                else if(buyerOption=="6") { // Most Expensive
                    int max=0;
                    for(int i=1;i<items;i++){
                        if(fruitPrices[i]>fruitPrices[max]) 
                        max= i;
                    }
                    cout<<"Most Expensive: "<<fruitNames[max]<<" Rs "<<fruitPrices[max]<<endl;
                    cout<<"Enter any letter to continue"<<endl;
                    getch();
                }
                else if(buyerOption=="7") { //  Available
                    cout<<"Enter fruit name: "; 
                    string fru; 
                    cin>>fru;
                    for(int i=0;i<items;i++){
                        if(fruitNames[i]==fru) 
                        cout<<fru<<" available: "<<fruitStock[i]<<"kg"<<endl;
                    }
                    cout<<"Enter any letter to continue"<<endl;
                    getch();
                }
                else if(buyerOption== "8") { // Bill's History
                    cout<<"Feature under development (can store past bills)."<<endl;
                    cout<<"Enter any letter to continue"<<endl;
                    getch();
                }
                else if(buyerOption== "9") { // Alternatives
                    cout<<"Enter fruit name: "; 
                    string fruit; 
                    cin>>fruit;
                    cout<<"Similar fruits according to price :"<<endl;
                    for(int i=0;i<items;i++){
                        if(fruitPrices[i]<=200){ 
                            cout<<fruitNames[i]<<" Rs "<<fruitPrices[i]<<endl;
                        }
                    }
                    cout<<"Enter any letter to continue "<<endl;
                    getch();
                }
                else if(buyerOption== "10") 
                break;
            }
        }
    }
    return 0;
}