#include <iostream>
using namespace std;
int main(){ 
char name[100 ];

int k=0,n,l=0, m=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0;
 char a,b,c,d,e, f,g,i,h,j;
 int kk, ll, mm, nn, oo, pp,qq,rr,ss,tt, money;

cout<<"आपको किसी ने 💰 ₹164 दिए क्या आप 🤔बता सकते है की 💶₹100 के कितने नोट लगेंगे और,🪙 ₹5 के कितने सिक्के लागेंग और ₹2 के कितने लगेंगे "<<"\n";

cout<<"यहां पर इस प्रकार के questions ko आसानी से🤷 solve कर सकते हैं, किसी ने  कोई भी value (money) पूछा हो वह enter करे 🪙₹1 से💶 ₹100लाख तक ,, और कुछ easy questions के answer लिखने के बाद Enter दबाए । आपको answer मिलते रहेंगे ।" <<"\n"<<"\n";
cout<<"\n"<<"\n"<<"English में अपना नाम  लिखें ";

//cin>>name;
gets(name);

cout<<"\n"<<"\n"<<"value(money) लिखें ₹";

cin>>n;
if (n<1){
	
cout<<"o ho !! 🤯😩🧐 आपने गलत लिखा, पुनः प्रयास करें "<<"\n"<<"\n";
goto final;
 }
if (n==0){
goto final;}
else if (n<2&&n>=1){
goto one;}
else if (n<5&&n>=2){
goto two;}
else if (n<10&&n>=5){
goto five;}
else if (n<20&&n>=10){
goto ten;}
else if (n<50&&n>=20){
goto twenty;}
else if (n<100&&n>=50){
goto fifty;}
else if (n<200&&n>=100){
goto hundred;}

else if (n<500&&n>=200){
goto twohundred;}

else if (n<2000&&n>=500){
goto fivehundred;}

else if (n>2000)
goto twoo;


twoo:
cout<<"₹2000 के नोट को शामिल करना है-: हां के लिए  h लिखे अन्यथा n " ;
cin>>a; 
if (a=='h'){
k=n/2000;
cout<<"---------------------------------"<<"\n";
cout<<"₹2000 के "<<k <<" नोट "<<"\n"<<"\n";}
kk=(n-(2000*k));

cout<<"शेष ₹"<<(n-(2000*k))<<"\n"<<"\n"; 
if (kk==0)
goto final;
else if (kk<2&&kk>=1){
goto one;}
else if (kk<5&&kk>=2){
goto two;}
else if (kk<10&&kk>=5){
goto five;}
else if (kk<20&&kk>=10){
goto ten;}
else if (kk<50&&kk>=20){
goto twenty;}
else if (kk<100&&kk>=50){
goto fifty;}
else if (kk<200&&kk>=100){
goto hundred;}

else if (kk<500&&kk>=200){
goto twohundred;}


fivehundred:
cout<<"₹500 के नोट  को शामिल करना है-: हां के लिए  h लिखे अन्यथा n " ;
cin>>b ;
if (b=='h'){
l=(n-2000*k)/500; 
cout<<"---------------------------------"<<"\n";
cout<<"₹500 के "<< l <<" नोट "<<"\n"<<"\n";}
cout<<"शेष   ₹"<<(n-(2000*k)-500*l)<<"\n"<<"\n";
ll=(n-(2000*k)-500*l);
if (ll==0)
goto final;
else if (ll<2&&ll>=1){
goto one;}
else if (ll<5&&ll>=2){
goto two;}
else if (ll<10&&ll>=5){
goto five;}
else if (ll<20&&ll>=10){
goto ten;}
else if (ll<50&&ll>=20){
goto twenty;}
else if (ll<100&&ll>=50){
goto fifty;}
else if (ll<200&&ll>=100){
goto hundred;}

twohundred:
cout<<"₹200 के नोट  को शामिल करना है-: हां के लिए  h लिखे अन्यथा n " ;
cin>>c;
if (c=='h'){
m=(n-(2000*k)-500*l)/200; 
cout<<"---------------------------------"<<"\n";
cout<<"₹200 के "<< m <<" नोट "<<"\n"<<"\n";}
cout<<"शेष    ₹"<<(n-(2000*k)-500*l-200*m)<<"\n"<<"\n";
mm=n-(2000*k)-500*l-200*m;
if (mm==0)
goto final;
else if (mm<2&&mm>=1){
goto one;}
else if (mm<5&&mm>=2){
goto two;}
else if (mm<10&&mm>=5){
goto five;}
else if (mm<20&&mm>=10){
goto ten;}
else if (mm<50&&mm>=20){
goto twenty;}
else if (mm<100&&mm>=50){
goto fifty;}

hundred:	
cout<<"₹100 के नोट  को शामिल करना है-: हां के लिए  h लिखे अन्यथा n " ;
cin>>d;
if (d=='h'){
o=(n-(2000*k)-500*l-200*m)/100; 
cout<<"---------------------------------"<<"\n";
cout<<"₹100 के "<< o <<" नोट "<<"\n"<<"\n";}
cout<<"शेष    ₹"<<(n-(2000*k)-500*l-200*m-100*o)<<"\n"<<"\n";
oo=n-(2000*k)-500*l-200*m-100*o;
if (oo==0)
goto final;
else if (oo<2&&oo>=1){
goto one;}
else if (oo<5&&oo>=2){
goto two;}
else if (oo<10&&oo>=5){
goto five;}
else if (oo<20&&oo>=10){
goto ten;}
else if (oo<50&&oo>=20){
goto twenty;}

fifty:
cout<<"₹50 के नोट  को शामिल करना है-: हां के लिए  h लिखे अन्यथा n " ;
cin>>e;
if (e=='h'){
p=(n-(2000*k)-500*l-200*m-100*o)/50; 
cout<<"---------------------------------"<<"\n";
cout<<"₹50 के "<< p <<" नोट "<<"\n"<<"\n";}
cout<<"शेष   ₹"<<(n-(2000*k)-500*l-200*m-100*o-p*50)<<"\n"<<"\n";
pp=(n-(2000*k)-500*l-200*m-100*o-p*50);
if (pp==0)
goto final;
else if (pp<2&&pp>=1){
goto one;}
else if (pp<5&&pp>=2){
goto two;}
else if (pp<10&&pp>=5){
goto five;}
else if (pp<20&&pp>=10){
goto ten;}


twenty:
cout<<"₹20 के नोट  को शामिल करना है-: हां के लिए  h लिखे अन्यथा n " ;
cin>>f;
if (f=='h'){
q=(n-(2000*k)-500*l-200*m-100*o-p*50)/20; 
cout<<"---------------------------------"<<"\n";
cout<<"₹20 के "<< q <<" नोट "<<"\n"<<"\n";}
cout<<"शेष   ₹"<<(n-(2000*k)-500*l-200*m-100*o-p*50-20*q)<<"\n"<<"\n";
qq=(n-(2000*k)-500*l-200*m-100*o-p*50-20*q);
if (qq==0)
goto final;
else if (qq<2&&qq>=1){
goto one;}
else if (qq<5&&qq>=2){
goto two;}
else if (qq<10&&qq>=5){
goto five;}


ten:
cout<<"₹10 के नोट/सिक्के  को शामिल करना है -: हां के लिए  h लिखे अन्यथा n " ;
cin>>g;
if (g=='h'){
r=(n-(2000*k)-500*l-200*m-100*o-p*50-20*q)/10; 
cout<<"---------------------------------"<<"\n";
cout<<"₹10 के "<<r <<" नोट/सिक्के "<<"\n"<<"\n";}
cout<<"शेष    ₹"<<(n-(2000*k)-500*l-200*m-100*o-p*50-20*q-10*r)<<"\n"<<"\n";
rr=n-(2000*k)-500*l-200*m-100*o-p*50-20*q-10*r;
if (rr==0)
goto final;
else if (rr<2&&rr>=1){
goto one;}
else if (rr<5&&rr>=2){
goto two;}


five:
cout<<"₹5 के सिक्के  को शामिल करना है-: हां के लिए  h लिखे अन्यथा n " ;
cin>>i;
if (i=='h'){
s=(n-(2000*k)-500*l-200*m-100*o-p*50-20*q-10*r)/5; 
cout<<"---------------------------------"<<"\n";
cout<<"₹5 के "<< s <<"  सिक्के "<<"\n"<<"\n";}
cout<<"शेष   ₹"<<(n-(2000*k)-500*l-200*m-100*o-p*50-20*q-10*r-5*s)<<"\n"<<"\n";
ss=(n-(2000*k)-500*l-200*m-100*o-p*50-20*q-10*r-5*s);
if (ss==0)
goto final;
else if (ss<2&&ss>=1){
goto one;}


two:
cout<<"₹2 के सिक्के  को शामिल करना है-: हां के लिए  h लिखे अन्यथा n " ;
cin>>j;
if (j=='h'){
t=(n-(2000*k)-500*l-200*m-100*o-p*50-20*q-10*r-5*s)/2; 
cout<<"---------------------------------"<<"\n";
cout<<"₹2 के "<<t <<" सिक्के "<<"\n"<<"\n";}
cout<<"शेष ₹"<<(n-(2000*k)-500*l-200*m-100*o-p*50-20*q-10*r-5*s-2*t)<<"\n"<<"\n";

one:
u=(n-(2000*k)-500*l-200*m-100*o-p*50-20*q-10*r-5*s-2*t)/1; 
cout<<"---------------------------------"<<"\n";
cout<<"₹1 के "<< u <<" सिक्के "<<"\n"<<"\n";

final :
cout<<"नोटो/सिक्के की संख्या इस प्रकार हैं"<<"\n"<<"\n";
cout<<"  नोट  : "<<" संख्या " <<"\n";

cout<<" ₹2000: " << k<<"\n";
cout<<"₹500: " <<l <<"\n";
cout<<"₹200: " << m<<"\n";
cout<<"₹100: " << o <<"\n";
cout<<"₹50: " <<  p<<"\n";
cout<<"₹20: " << q <<"\n";
cout<<"₹10: " << r <<"\n";
cout<<"₹5: " << s <<"\n";
cout<<"₹2: " << t <<"\n";
cout<<"₹1: " << u ;

cout<<"\n"<<"\n"<<"👌 thanks धन्यवाद "<<name;
cout<<"\n"<<"\n"<<"##शुभम ";


}