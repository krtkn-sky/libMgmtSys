#include <iostream>
using namespace std;

int main(){

    int qty,choice;
    //Quantity vars
    int qRooms=0,qDosa=0,qPizza=0,qVadapav=0,qLime=0,qTea=0;
    //Sold vars
    int sRooms=0,sDosa=0,sPizza=0,sVadapav=0,sLime=0,sTea=0;
    //Total price
    int totalRooms=0,totalDosas=0,totalPizzas=0,totalVadapavs=0,totalLimes=0,totalTeas=0;

    //Available items

    cout << "\n\t Quantity available ->";
    cout << "Rooms available -> ";
    cin >> qRooms;
    cout << "\n Quantity of Dosas ->";
    cin >> qDosa;
    cout << "\n Quantity of Pizzas ->";
    cin >> qPizza;
    cout << "\n Quantity of Vadapavs ->";
    cin >> qVadapav;
    cout << "\n Quantity of Limes ->";
    cin >> qLime;
    cout << "\n Quantity of Teas ->";
    cin >> qTea;

    //Choose from menu

    cout << "\n\t\t Please select from the menu -> ";
    cout << "\n\n1) Rooms";
    cout << "\n\n2) Dosas";
    cout << "\n\n3) Pizzas";
    cout << "\n\n4) Vadapavs";
    cout << "\n\n5) Limes";
    cout << "\n\n6) Teas";
    cout << "\n\n7) More info";
    cout << "\n\n8) Exit";

    cout << "\n\n Enter your choice -> ";
    cin >> choice;

    switch(choice){

        case 1:
            cout << "\n\n Enter number of rooms required -> ";
            cin >> qty;
            if(qRooms-sRooms>=qty){
                sRooms+=qty;
                totalRooms+=qty*1200;
                cout << "\n\n\t\t" << qty << " room/rooms alloted.";
            } else {
                cout << "No rooms available. Try again later.";
                break;
            }

        case 2:
            cout << "\n\n Enter Dosa quantity -> ";
            cin >> qty;
            if(qDosa-sDosa>=qty){
                sDosa+=qty;
                totalDosas+=qty*80;
                cout <<"\n\n\t\t"<<qty<<" dosas will be sent to your room.";
            } else {
                cout << "No dosas in the kitchen. Check out our other dishes.";
                break;
            }

        case 3:
            cout << "\n\n Enter Pizza quantity -> ";
            cin >> qty;
            if(qPizza-sPizza>=qty){
                sPizza+=qty;
                totalPizzas+=qty*120;
                cout <<"\n\n\t\t"<<qty<<" pizzas will be sent to your room.";
            } else {
                cout << "No pizzas in the kitchen. Check out our other dishes.";
                break;
            }
        
        case 4:
            cout << "\n\n Enter Vadapav quantity -> ";
            cin >> qty;
            if(qVadapav-sVadapav>=qty){
                sVadapav+=qty;
                totalVadapavs+=qty*40;
                cout <<"\n\n\t\t"<<qty<<" vadapavs will be sent to your room.";
            } else {
                cout << "No vadapavs in the kitchen. Check out our other dishes.";
                break;
            }

        case 5:
            cout << "\n\n Enter Lime quantity -> ";
            cin >> qty;
            if(qLime-sLime>=qty){
                sLime+=qty;
                totalLimes+=qty*30;
                cout <<"\n\n\t\t"<<qty<<" limes will be sent to your room.";
            } else {
                cout << "No limes in the kitchen. Check out our other dishes.";
                break;
            }
        
        case 6:
            cout << "\n\n Enter Tea quantity -> ";
            cin >> qty;
            if(qTea-sTea>=qty){
                sTea+=qty;
                totalTeas+=qty*30;
                cout <<"\n\n\t\t"<<qty<<" dosas will be sent to your room.";
            } else {
                cout << "No teas in the kitchen. Check out our other dishes.";
                break;
            }
        
        case 7:

            //Room info

            cout << "\n\n\tWelcome to the more info section."<<endl;
            cout << "\n\n Number of rooms available -> " << qRooms;
            cout << "\n\n Number of rooms sold -> " << sRooms;
            cout << "\n\n Remaining rooms -> " << qRooms-sRooms;
            cout << "\n\n Total rooms sold for the day -> " << totalRooms;

            //Food items info
            
            cout << "\n\n Number of dosas available -> " << qDosa;
            cout << "\n\n Number of dosas served -> " << sDosa;
            cout << "\n\n Remaining dosas in kitchen -> " << qDosa-sDosa;
            cout << "\n\n Total dosas served for the day -> " << totalDosas;

            cout << "\n\n Number of pizzas available -> " << qPizza;
            cout << "\n\n Number of pizzas served -> " << sPizza;
            cout << "\n\n Remaining pizzas in kitchen -> " << qPizza-sPizza;
            cout << "\n\n Total pizzas served for the day -> " << totalPizzas;


    }
}