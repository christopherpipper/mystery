#include <iostream>
#include <vector>
using namespace std;

void print(auto A)
{
   for (auto a : A) 
        cout <<a<<" ";

   cout<<endl;
}

void mystery1(auto& Data)// also known as bubble sort dtat
{
  cout<<endl<<"Mystery 1"<<endl<<"---------------------"<<endl;

  for ( int i = 0 ; i < Data.size( ) ; i++)
  {
    for ( int j = 0 ; j < i ; j++)
    {
	if ( Data[ i ] < Data[ j ] )
	 {
	    swap( Data[ i ] , Data[ j ] );
	}
}

    print(Data);
  }//end outer for (this brace is needed to include the print statement)

}
void mystery2(auto& Data)// also given as insertion sort
{
	for (int i = 1; i < Data.size( ); i++)
	{
		int j = i;
		
		while(j>0 and Data[j] < Data[j-1])
		{
			swap(Data[j], Data[j-1]);
			j--;
		}
	}
}

void mystery3(auto& Data)
{
	for (int i = 0; i < Data.size( ); i++)
	{
		int min = i; // index of the smallest element 
		
		for(int j = i+1; j < Data.size( ); j++)
		{
			if( Data[j] < Data[min])
			{
				min = j;
			}
		}
		
		swap(Data[i], Data[min]);
	}
}
//... Other mysteries...

int main()
{
    
  vector<int> Data = {36, 18, 22, 30, 29, 25, 12};

  vector<int> D1 = Data;
  vector<int> D2 = Data;
  vector<int> D3 = Data;

  mystery1(D1);
  mystery2(D2);
  mystery3(D3);
  
  

}
