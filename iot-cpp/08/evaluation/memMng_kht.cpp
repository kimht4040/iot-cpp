#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class Member {
    int id;
    string name;
    string phone;
    string email;
    public:
    Member() {}
    Member(int id, string name, string phone, string email):id(id), name(name), phone(phone), email(email) {}
    int getId() {return id;}
    string getName() {return name;}
    string getPhone() {return phone;}
    string getEmail() {return email;}
    void setName(string name) {this->name = name;}
    void setPhone(string phone) {this->phone = phone;}
    void setEmail(string email) {this -> email = email;}
    void input() {
        cout << "ID : " << endl;
        cin >> id;
        cout << "NAME : " << endl;
        cin >> name;
        cout << "PHONE : " << endl;
        cin >> phone;
        cout << "EMAIL : " << endl;
        cin >> email;
    }
    void print() {
        cout << left << setw(10) << id
        << left << setw(15) << name
        << left << setw(15) << phone
        << left << setw(25) << email << endl;
    }
    void update() {
        cout << "NEW NAME : " << endl;
        cin >> name;
        cout << "NEW PHONE : " << endl;
        cin >> phone;
        cout << "NEW EMAIL : " << endl;
        cin >> email;
    }

};

class MemberManager {
    vector<Member> members;
    public:
    MemberManager() {}
    MemberManager(vector<Member> members) {
        this->members = members;
    }

    void loadFromFile() {
        ifstream File("members.txt");
        if (!File) {
            cout << "저장된 파일이 없습니다.";
            return;
        }
        int id;
        string name, phone, email;
        while (File >> id >> name >> phone >> email) {
            members.emplace_back(Member(id, name, phone, email));
        }
        File.close();
    }
    void saveToFile() {
        ofstream File("members.txt");
        for (auto& m : members) {
            File << m.getId() << " " << m.getName() << " " << m.getPhone() << " " << m.getEmail() << endl;
        }
        File.close();

    }
    bool exists(int id) {
        for (auto& m : members) {
            if (m.getId() == id) {
                return true;
            }
        }
        return false;
    }

    void addMember() {
        Member m;
        m.input();
        if (exists(m.getId())) {
            cout << "존재" << endl;
            return;
        }
        members.push_back(m);
        cout << "회원 등록 완료" << endl;
    }

    void viewMembers() {
        if (members.empty()) {
            cout << "등록된 회원이 없습니다.";
            return;
        }
        else {
            for (auto& m : members) {
                m.print();
            }
        }
    }
    void selectMember(int id) {
        for (auto& m : members) {
            if (m.getId() == id) {
                m.print();
                return;
            }
        }
        cout << "id오류" << endl;
    }
    void replaceMember(int id) {
        for (auto& m : members) {
            if (m.getId() == id) {
                m.input();
                cout << "수정 완료" << endl;
                return;
            }
        }
        cout << "id오류" << endl;
    }

    void deleteMember() {
        int i=0;
        for (auto& m : members) {
            cout << "번호="<<i++ << " " <<m.getId() << " " << m.getName() << " " << m.getPhone() << " " << m.getEmail()<< endl;
        }
        cout << "지울 번호를 선택하세요 : ";
        cin >> i;
        members.erase(members.begin() + i);

    }


};


int main() {
    MemberManager m;
    m.loadFromFile();
    while (true) {
        cout << "\n====================회원관리=================\n" ;
        cout << "1.등록" << endl;
        cout << "2.전체 조회" << endl;
        cout  << "3.검색" << endl;
        cout << "4.수정" << endl;
        cout << "5.삭제" << endl;
        cout << "Q.종료" << endl;
        cout << "메뉴선택 : ";
        char menu;
        cin >> menu;
        switch (menu) {
            case '1':
                cout << "등록 메뉴 선택" << endl;
                m.addMember();
                break;
            case '2':
                cout << "전체조회 메뉴 선택" << endl;
                m.viewMembers();
                break;
            case '3':
                int x;
                cout << "검색 메뉴 선택" << endl;
                cout << "아이디를 입력하세요 : ";
                cin >> x;
                m.selectMember(x);
                break;
            case '4':
                cout << "수정 메뉴 선택" << endl;
                cout << "수정할 아이디를 입력하세요 : ";
                cin >> x;
                m.replaceMember(x);

                break;
            case '5':
                cout << "삭제 메뉴 선택" << endl;
                m.deleteMember();
                break;
            case 'q':
                cout << "종료"<< endl;
                m.saveToFile();
                return 0;

            default:
                cout << "다시 선택" << endl;

        }
    }



    return 0;
}