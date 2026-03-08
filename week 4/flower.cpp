#include<iostream>
using namespace std;
main(){
    int red_r_price = 2;
    float white_r_price = 4.1;
    float tullip_price = 2.50;
    int discount_on = 200;
    float discount_percentage = 0.2;
    int red_num;
    cout<<" Red            Rose:           ";
    cin>> red_num;
    int white_num;
    cout<<" White          Rose:           ";
    cin>> white_num;
    int tullips_num;
    cout<<" Tulips :  ";
    cin>> tullips_num;
    float final_price ;
    float price = (red_num * red_r_price)+(white_num * white_r_price)+(tullips_num * tullip_price );

    if (price > discount_on){
    final_price = price * (1 - discount_percentage);    

    } else { final_price = price;}
        cout<<"Original Price: "<< price << endl;
    cout<< " Price after Discount: "<< final_price ;


}