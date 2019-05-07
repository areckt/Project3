/*Kacper Kostecki, 300236, projekt III
prowadzący: Wiktor Kuśmirek
*/

#include "Section.hpp"
using namespace std;

int main(){
	int menu;
	vector < Section<int> > sections;
	do{
		cout<<"1.Create new section."<<endl;
		cout<<"2.See exsiting section."<<endl;
		cout<<"3.Exit."<<endl;
		cout<<"What do you want to do: ";
		cin>>menu;
		if(menu == 1){
			Section<int> section;
			section.setData();
			sections.push_back(section);
		}
		else if(menu == 2){
			if(sections.size() == 0){
				cout<<"Empty database!"<<endl;
				continue;
			}
			cout<<"Which section do you want to see?"<<endl;
			for(unsigned int i = 0; i < sections.size(); ++i){
				cout<<i+1<<". ";
				sections[i].show();
			}
			int choose;
			cin>>choose;
			sections[choose-1].show(choose);
		}
		else if(menu != 3)
			cout<<"!!!Wrong number, pick again!!!"<<endl;
	}while(menu != 3);
	
}
