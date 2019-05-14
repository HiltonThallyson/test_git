#include <iostream>
#include <map>


using namespace std;	
class teste{
	public:
		int a;
		double b;
		teste(int,double);
		teste();
		friend ostream & operator << (ostream &out, const teste t);
};


ostream & operator << (ostream &out, const teste t){
	out << t.a << endl;
	out << t.b << endl;
	return out;
}

teste::teste(){
	a = 10;
	b = 2.5;
}
teste::teste(int aa, double bb){
	a = aa;
	b = bb;
}

int main(){
	int a = 10;
	double b = 2.5;
	map <int,teste *> mp;
	map <int, teste *>::iterator it1;
	map <int, teste *>::iterator it2;
	teste *j = new teste(115,7.59);
	teste *t = new teste(a,b);
	mp.insert(pair <int, teste *>(1,j));
	mp.insert(pair <int, teste *> (2,t));

	it1 = mp.find(1);
	it2 = mp.find(2);

	//cout << mp.size() << endl;

	cout << (*it1).second;

	//cout << "mp[1:j] = " << *it1 << endl;
	// cout << "a: " << t->a << endl;
	// cout << "b: " << t->b << endl;
	return 0;
}