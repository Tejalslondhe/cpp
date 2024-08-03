#include<iostream>
#include<vector>
#include <algorithm>
//#include <numeric>


using namespace std;

int main()
{
	vector<int> vectInt={12,3,45,6,7,8};
	
	
	
	
	cout<<"count:"<<vectInt.size()<<endl;
	
	
    vector<int>::iterator  itr1;
 	vector<int>::iterator  itr2;
 	itr1=vectInt.begin();//first
 	itr2=vectInt.end();//last	
	
	
	
	cout<<"1:show vector 2:add 3:count 4:pop 5:sort 6:reverse 7:clear"<<endl;
	int ch,no;
	do{
		cout<<"\n Choice ";
		cin>>ch;
		switch(ch){
			case 1:
				          
                for(int no:vectInt)//for each int no in collection vectInt
                {
                cout<<no<<" ";	
				}
 				
 				   cout<<"\n";
					
				break;
			case 2:cout<<" Enter No=";
				  cin>>no;
				  vectInt.push_back(no);
				  break;
			case 3:cout<<"Count="<<vectInt.size();
		      	break;
		   	case 4:vectInt.pop_back();
		   	cout<<"pop"<<endl;
		   	break;
		     case 7:cout<<"---clear vector----"<<endl;
		            vectInt.clear();
		            break;
		    case 5:cout<<"----sort-------"<<endl;
		    sort(vectInt.begin(),vectInt.end());
		    cout<<"----sorted----"<<endl;
		    break;
		    case 6:cout<<"----reverse-------"<<endl;
		      reverse(vectInt.begin(),vectInt.end());
		      break;
		}
		
	}while(ch!=0);
	
	
	
	
	
	
	
	
}


