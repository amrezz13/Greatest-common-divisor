// code of GCD 
// author Amr Marey
// this is not a final code you can develope it as u need 
#include  <iostream>
 
using namespace std;

int gcd( int n, int y){
	int reminder = n%y;
	if (reminder ==0 )
	    return y;
	while (reminder !=0){
		n=y;
	
	    return gcd(n ,reminder);
	    
	}
return y;	    
}
int main(){
	
	int x , y ;
	cin >> x>>y;
    if (x>y)
	    cout<< gcd(x,y);
	else if (x<y)
	    cout<< gcd(y,x);
	else 
	    cout<< "both are equal";
	return 0;
}
