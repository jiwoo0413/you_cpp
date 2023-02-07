#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    int _health;
    int _power;
    const string _name; //const라서 대입은 안됨

public:
    //Plater() {};(생성자)가 우리가 만들지 않으면 디폴트로 생김
    Player() : Player(100, 50, "noname") {

    }; //이걸 쓰지 않으면 인자를 세개를 보내줘야되는데 안보내서 오류 뜸

    Player(int health, int power, string name)
        :_health(health), _power(power), _name(name) //초기화
         {
            cout << "Player " << _name << ", " << _health << ", " << _power << endl;
        }
};

int main() {
    Player player0;
}





// struct Player0{

// };

// class Player {
// private:
//     int _health;
//     int _power;
//     string _name;
// public:
//     Player(int health, int power, string name) {
//         _health =health;
//         _power = power;
//         _name = name;
//     }
    
//     void attack(Player& target) { //private 멤버라서 참조를 넣어줘야 값을 복사하지 않고 그냥 가져와서 원하는 값이 나온다
//         cout << "Attack" << _name << "->" << target._name << endl;
//         target.damaged( _power);
//     }

//     void damaged(int power) {
//         _health -= power;
//         if (_health <= 0) {
//             cout << "Died. " << _name << endl;
//         }
//     }
// };

// int main() {
//     Player player0(200, 100, "P1"); //생성자가 세개라서 세개의 인자를 줌
//     Player player1(200, 100, "P2");

//     player0.attack(player1);
//     player0.attack(player1);
//     player0.damaged(200);

//     //예시
//     //player0._health = 0; 접근이 불가능한 private멤버인데 접근하려고 해서 오류 남
// }




// int main() {
//     //c style
//     char a[100] = "Hello";
//     char b[] = " World";
//     strcat( a, b);
//     cout << a << endl;

//     //c++ style
//     string s0 = "Hello";
//     string s1 = " World";
//     s0.append(s1);
//     cout << s0 << endl;

//     return 0;
// }