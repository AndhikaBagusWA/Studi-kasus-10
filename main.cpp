#include <iostream>
using namespace std;

class node{
  public :
    void input();
    void output();
		node *next;
		node *head = NULL;
		char nama[20],nim[20];
  private :
 	

};

void node::input(){
	node *baru;
	char lanjut;
	do{
		baru = new node;
		cout <<"\nNama Mhs: "; cin>>baru->nama;
		cout <<"NIM Mhs: "; cin>>baru->nim;
		baru->next=head;
		head = baru;
		cout<<"input lagi? (y/t): ";
		cin>>lanjut;
	}while(lanjut !='t');
}

void node::output()
{
	node *jalan;
	jalan = head;
	cout<<"------------------------------------"<<endl;
	cout<<"  Mahasiswa yang masuk babak final "<<endl;
	cout<<"------------------------------------\n"<<endl;
	while(jalan != NULL){
		cout<<"Nama : "<<jalan->nama<<endl;
		cout<<"Nim  : "<<jalan->nim<<endl;
		cout<<endl;
		jalan = jalan->next;
	}
}
  


int main() {
  node x;
  x.input();
  x.output();
}