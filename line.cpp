int main(){
  float x1,y1,x2,y2,x3,y3; 
  //x3 and y3 is point of which position need to be find on line segment
cin>>x1>>y1>>x2>>y2>>x3>>y3;
float a=(y2-y1)/(x2-x1);
float b=(y3-y2)/(x3-x2);
if(a==b){
  cout<<"point x3 y3 is collinear with line segement"<<endl; 
}
else if(a>b){
  cout<<"point lie in clockwise dirn"<<endl;
}
else{
  cout<<"clockwise dirn"<<endl;
}
}