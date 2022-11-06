/*This code is written by prateek raj
In this code you can enter your age and height to know who much percantage you have grew and who much you will grow more. 
 ____________________________
 | ∆∆∆••1=enter your age____|
 ----------------------------
 _________________________________________
 | ∆∆∆••2=enter your height in inches____|
 -----------------------------------------*/




#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double age, height, heightt,gheight, lheight, nheight, rheight, aaj, sant, dan, dann, kat, katt, kattt, four, six, nine, eleven, lg, pa, tej;
    string ab,abt, ant, two, pin, pant, van, can, shirt, tshirt, skeep, jacket, cann, san, vant, antt, don, donn, pot, pott, poot, pottt, one, three, five, seven, eight, ten, tv, av, kg, ap, aap, lot, pkt, min;
    ab="sorry,you are under 7 years and you have lots of time to grow. we tell us about her height who are more then 8 years or of 8 years. ";
    abt="you are 8 years old, your height is ";
    ant=" inches ";
    two=" more ";
    pin=" and ";
    pant="If you are a boy,you have grew 72% and you will grow approximately ";
    van="If you are a girl,you have grew 77% and you will grow approximately ";
    can=" you are 9 years old,your height is ";
    shirt="If you are a boy,you have grew 75% and you will grow approximately ";
    tshirt="If you are girl,you have grew 81% and you will grow approximately ";
    skeep="you are 10 years old, your height is ";
    jacket="If you are a boy, you have grew 78% and you will grow approximately ";
    cann="If you are a girl,you have grew 84% and you will grow approximately ";
    san="you are 11 years old,your height is ";
     vant="If you are a boy,you have grew 81% and you will grow approximately ";
    antt="If you are a girl,you have grew 88% and you will grow appriximately ";
    don="you are 12 years old your height is ";
    donn="If you are a boy,you have grew 84% and you will grow approximately ";
    pot="If you are a girl, youhave grown 91% and you will grow appriximately ";
    pott="you are 13 years old, your height is ";
    poot="If you are a boy,you have grew 88% and you will grow approximately ";
    pottt="If you are a girl you have grew 95% and you will grow approximately ";
    one="you are 14 years old, your height is ";
    three="If you are a boy, you have grew 92% and you will grow approximately ";
    five="If you are a girl, you have grew 98% and you will grow appriximately ";
    seven="you are 15 years old, your height is ";
    eight="If you are a boy you have grew 95% and you will grow approximately ";
    ten="If you are a girl you have grew 99% and you will grow approximately ";
    tv="you are 16 years old,your height is ";
    av="If you are a boy you have grew 98% and you will grow approximately ";
    kg="If you are a girl,you have grew 99.5% and you will grow approximately ";
    ap="you are 17 years old, your height is ";
    aap="If you are a boy, you have grew 99% and you will grow appriximately ";
    lot="If you are a girl you have grew 100% you will not grow a more ";
    pkt="You have grown 100%. You will not grow a more. After 18 years of birth no one grows nither girl nor boy. It is sentifically proved ";
    min="You have entered something wrong or might be you have enter you age in decimal form.if,yes renter your age and this time dont enter in decimal or fractional form or you have enter your height in feet on in cm,you have to enter your height in inches. ";
    cout<<" Know How Much You will Grow More"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Enter your age :";
    cin>>age;
    cout<<"Enter your height in inches :";
    cin>>height;
    heightt=(height-(height*72/100));
    gheight=(height-(height*77/100));
    lheight=(height-(height*75/100));
    sant=(height-(height*81/100));
    aaj=(height-(height*84/100));
    rheight=(height*(height*78/100));
    nheight=(height-(height*81/100));
    katt=(height-(height*88/100));
    kat=(height-(height*91/100));
    dann=(height-(height*84/100));
    dan=(height-(height*88/100));
    nine=(height-(height*95/100));
    six=(height-(height*98/100));
    four=(height-(height*92/100));
    kattt=(height-(height*95/100));
    tej=(height-(height*99/100));
    pa=(height-(height*99.5/100));
    lg=(height-(height*98/100));
    eleven=(height-(height*99/100));
    if(age<=7){
       cout<<ab;
    }else if(age==8){
       cout<<abt<<height<<ant<<pant<<heightt<<ant<<two<<pin<<van<<gheight<<ant<<two<<endl;
    }else if(age==9){
    cout<<can<<height<<ant<<shirt<<lheight<<ant<<two<<pin<<tshirt<<nheight<<ant<<two<<endl;
    }else if(age==10){
       cout<<skeep<<height<<ant<<jacket<<rheight<<ant<<two<<pin<<cann<<aaj<<ant<<two<<endl;
    }else if(age==11){
    cout<<san<<height<<ant<<vant<<sant<<ant<<two<<pin<<antt<<dan<<ant<<two<<endl;
    }else if(age==12){
    cout<<don<<height<<ant<<donn<<dann<<ant<<two<<pin<<pot<<kat<<ant<<two<<endl;
    }else if(age==13){
    cout<<pott<<height<<ant<<poot<<katt<<ant<<two<<pin<<pottt<<kattt<<ant<<two<<endl;
    }else if(age==14){
    cout<<one<<height<<ant<<three<<four<<ant<<two<<pin<<five<<six<<ant<<two<<endl;
    }else if(age==15){
    cout<<seven<<height<<ant<<eight<<nine<<ant<<two<<pin<<ten<<eleven<<ant<<two<<endl;
    }else if(age==16){
    cout<<tv<<height<<ant<<av<<lg<<ant<<two<<pin<<kg<<pa<<ant<<two<<endl;
    }else if(age==17){
    cout<<ap<<height<<ant<<aap<<tej<<ant<<two<<pin<<lot<<endl;
    }else if(age>=18){
    cout<<pkt<<endl;
    }else{
    cout<<min<<endl;
    }
}    