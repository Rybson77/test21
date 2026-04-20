#include <iostream>
using namespace std;
void error(){
    cout << "Neplatny operator\n";
}
int soucet (int cislo1, int cislo2){
    return cislo1+cislo2;
}
int rozdil (int cislo1, int cislo2){
    return cislo1-cislo2;
}
int soucin (int cislo1, int cislo2){
    return cislo1*cislo2;
}
int podil (float cislo1, float cislo2){
    return cislo1/cislo2;
}

int mocnina1(int x, int y){
    int vysledek = 1;
    for(int i = 0; i < y; i++){
        vysledek*=x;
    }
return vysledek;

}

int mocnina2(int x, int y){
    if(y==0){
        return 1;
    }else{
        return x*mocnina2(x, y-1);
    }
}


int main(){
    char operace;
    int x,y;
        cout << "Zadejte hodnotu pro cislo x: ";
        cin >> x;
        cout << "Zadejte hodnotu pro cislo y: ";
        cin >> y;
        cout << "Mocnina je: " << mocnina1(x,y) << endl;
        cout << "Mocnina je: " << mocnina2(x,y) << endl;
        cout << "Vyberte matimatickou operaci (+,-,*,/,k - (Konec))";
        cin >> operace;


        switch(operace){
        case '+':
            cout << "Soucet je: " << soucet(x,y) << endl;
            break;
        case '-':
            cout << "Rozdil je: " << rozdil(x,y) << endl;
            break;
        case '*':
            cout << "Soucin je: " << soucin(x,y) << endl;
            break;
        case '/':
            cout << "Podil je: " << podil(x,y) << endl;
            break;
        case 'k':
            cout << "Konec";
            break;
        default:
            error();
        }

return 0;
}
