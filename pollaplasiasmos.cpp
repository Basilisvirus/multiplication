#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
//Dhlosh metavlhtwn
float x ,y;
int newx,newy,k,i;
//dhlwsh dinamikwn pinakwn zdier,poll gia kathorismo tou megethous tous argotera
int *dier,*poll;

cout<< "dwse 2 akeraious arithmous"<<endl;
cout << "x= ";
cin>>x;
cout <<"y= ";
cin>>y;


//elexw to x na einai >0
while(x<=0)
{
	cout<<"lathos, theloume x>=0"<<endl;
cout << "x= ";
cin>>x;
}

//ftiaxnw tous int x,y (newx, newy)
newx=x;
newy=y;

//elexos gia to an einai akeraioi oi arithmoi x,y
while((x-newx!=0)||(y-newy!=0))
{
cout<<"lathos, ksanadwse akeraio"<<endl;
cout << "x= ";
cin>>x;
cout <<"y= ";
cin>>y;
    newx=x;
    newy=y;
}

//dokimazw poses fores prepei na dierethei gia na ginei 1 o epikefalhs arithmos 'x'
//gia na kathoristei kai to megethos tou pinaka dier kai poll.
int doka=newx;
k=1;
while (doka!=1)
{
k++;
doka=doka/2;
}



//dhmiourgia twn dinamikwn pinakwn dier,poll.
dier= new int [k];
poll= new int [k];
//vazw tous epikefalhs arithous sta prwta kelia tou kathe pinaka
dier[0]=newy;
poll[0]=newx;

//xrhsh metrhth gia th symplhrwsh tou pinaka (diaireseis/pollaplasiasmoi me to 2)
k=0;
while(poll[k]!=1)
{
k=k+1;
  poll[k]=poll[k-1]/2;
  dier[k]=dier[k-1]*2;
}

//athroisma twn katallhlwn/antistoixwn stoixeiwn tou pinaka dier gia to teliko apotelesma 'sum'
int sum=0;
for (i=0;i<=k;i++)
{
//elexos an einai zygoi h monoi, kai xrhsh twn thesewn twn monwn arithmwn gia ton pinaka dier
if (poll[i]%2!=0)
{
sum+=dier[i];
}

cout<<setw(10)<<poll[i]<<"  |  "<<dier[i]<<endl;
}

//emfanisma tou apotelesmatos 'sum'
cout<<endl<<"apotelesma pollaplasiasmou= "<<sum<<endl;
system("PAUSE");
return 0;
}
