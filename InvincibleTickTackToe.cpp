#include <bits/stdc++.h>
using namespace std;

char arr[3][3];


void print(){
	printf("\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return;
}

pair<int,int>check1(){ //Can i lose
	bool yo=false;
    if(arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='#')return make_pair(0,2);
    if(arr[0][0]=='X' && arr[0][2]=='X' && arr[0][1]=='#')return make_pair(0,1);
    if(arr[0][1]=='X' && arr[0][2]=='X' && arr[0][0]=='#')return make_pair(0,0);
    if(arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='#')return make_pair(1,2);
    if(arr[1][0]=='X' && arr[1][2]=='X' && arr[1][1]=='#')return make_pair(1,1);
    if(arr[1][1]=='X' && arr[1][2]=='X' && arr[1][0]=='#')return make_pair(1,0);
    if(arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='#')return make_pair(2,2);
    if(arr[2][0]=='X' && arr[2][2]=='X' && arr[2][1]=='#')return make_pair(2,1);
    if(arr[2][1]=='X' && arr[2][2]=='X' && arr[2][0]=='#')return make_pair(2,0);
    if(arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='#')return make_pair(2,0);
    if(arr[0][0]=='X' && arr[2][0]=='X' && arr[2][0]=='#')return make_pair(2,0);
    if(arr[1][0]=='X' && arr[2][0]=='X' && arr[0][0]=='#')return make_pair(0,0);
    if(arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='#')return make_pair(2,1);
    if(arr[0][1]=='X' && arr[2][1]=='X' && arr[1][1]=='#')return make_pair(1,1);
    if(arr[1][1]=='X' && arr[2][1]=='X' && arr[0][1]=='#')return make_pair(0,1);
    if(arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='#')return make_pair(2,2);
    if(arr[0][2]=='X' && arr[2][2]=='X' && arr[1][2]=='#')return make_pair(1,2);
    if(arr[1][2]=='X' && arr[2][2]=='X' && arr[0][2]=='#')return make_pair(0,2);
    if(arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='#')return make_pair(2,2);
    if(arr[0][0]=='X' && arr[2][2]=='X' && arr[1][1]=='#')return make_pair(1,1);
    if(arr[1][1]=='X' && arr[2][2]=='X' && arr[0][0]=='#')return make_pair(0,0);
    if(arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='#')return make_pair(2,0);
    if(arr[0][2]=='X' && arr[2][0]=='X' && arr[1][1]=='#')return make_pair(1,1);
    if(arr[1][1]=='X' && arr[2][0]=='X' && arr[0][2]=='#')return make_pair(0,2);
    if(arr[0][0]=='X' && arr[2][0]=='X' && arr[1][0]=='#')return make_pair(1,0);
    if(arr[0][0]=='X' && arr[0][2]=='X' && arr[0][1]=='#')return make_pair(0,1);
    if(arr[0][2]=='X' && arr[2][2]=='X' && arr[1][2]=='#')return make_pair(1,2);
    if(arr[2][0]=='X' && arr[2][2]=='X' && arr[2][1]=='#')return make_pair(2,1);
    return make_pair(-1,-1);
}

pair<int,int>check2(){ //Can i win
	bool yo=false;
    if(arr[0][0]=='O' && arr[0][1]=='0' && arr[0][2]=='#')return make_pair(0,2);
    if(arr[0][0]=='O' && arr[0][2]=='0' && arr[0][1]=='#')return make_pair(0,1);
    if(arr[0][1]=='O' && arr[0][2]=='O' && arr[0][0]=='#')return make_pair(0,0);
    if(arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='#')return make_pair(1,2);
    if(arr[1][0]=='O' && arr[1][2]=='O' && arr[1][1]=='#')return make_pair(1,1);
    if(arr[1][1]=='O' && arr[1][2]=='O' && arr[1][0]=='#')return make_pair(1,0);
    if(arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='#')return make_pair(2,2);
    if(arr[2][0]=='O' && arr[2][2]=='O' && arr[2][1]=='#')return make_pair(2,1);
    if(arr[2][1]=='O' && arr[2][2]=='O' && arr[2][0]=='#')return make_pair(2,0);
    if(arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='#')return make_pair(2,0);
    if(arr[0][0]=='O' && arr[2][0]=='O' && arr[2][0]=='#')return make_pair(2,0);
    if(arr[1][0]=='O' && arr[2][0]=='O' && arr[0][0]=='#')return make_pair(0,0);
    if(arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='#')return make_pair(2,1);
    if(arr[0][1]=='O' && arr[2][1]=='O' && arr[1][1]=='#')return make_pair(1,1);
    if(arr[1][1]=='O' && arr[2][1]=='O' && arr[0][1]=='#')return make_pair(0,1);
    if(arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='#')return make_pair(2,2);
    if(arr[0][2]=='O' && arr[2][2]=='O' && arr[1][2]=='#')return make_pair(1,2);
    if(arr[1][2]=='O' && arr[2][2]=='O' && arr[0][2]=='#')return make_pair(0,2);
    if(arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='#')return make_pair(2,2);
    if(arr[0][0]=='O' && arr[2][2]=='O' && arr[1][1]=='#')return make_pair(1,1);
    if(arr[1][1]=='O' && arr[2][2]=='O' && arr[0][0]=='#')return make_pair(0,0);
    if(arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='#')return make_pair(2,0);
    if(arr[0][2]=='O' && arr[2][0]=='O' && arr[1][1]=='#')return make_pair(1,1);
    if(arr[1][1]=='O' && arr[2][0]=='O' && arr[0][2]=='#')return make_pair(0,2);
    if(arr[0][0]=='O' && arr[2][0]=='O' && arr[1][0]=='#')return make_pair(1,0);
    if(arr[0][0]=='O' && arr[0][2]=='O' && arr[0][1]=='#')return make_pair(0,1);
    if(arr[0][2]=='O' && arr[2][2]=='O' && arr[1][2]=='#')return make_pair(1,2);
    if(arr[2][0]=='O' && arr[2][2]=='O' && arr[2][1]=='#')return make_pair(2,1);
    return make_pair(-1,-1);
}




bool game(){
	int g=0;
	for(int i=0;i<3;i++)
		 for(int j=0;j<3;j++){
		 	 if(arr[i][j]=='#')return false;
		 }
	return true;
}



int main(){
   for(int i=0;i<3;i++)
   	 for(int j=0;j<3;j++)
   	 	arr[i][j]='#';
   int t=1;
   int x,y;
   bool won;
   bool done=false;
   while(1){
   	done=game();
   	if(done){
   		printf("Match is drawn\n");
   		 break;
   	}
     if(t%2){
       scanf("%d%d",&x,&y);
       if(arr[x][y]!='#'){cout << "Wrong input.Aborting game\n";return 0;}
       else{
       	     arr[x][y]='X';
       	     	print();
       	      t++;
        }
     }
    else{
    		if(t==2 && arr[1][1]!='X'){
    			 arr[1][1]='O';
    			 print();
    			 t++;
    			 continue;
    		}
    		else if(t==2 && arr[1][1]=='X'){
    			arr[0][0]='O';
    			print();
    			t++;
    		}
    		else{
    			  pair<int,int> p;
    			  p=check2();//Can I win?
    			  if(p.first!=-1){
    			  	 arr[p.first][p.second]='O';
    			  	 printf("\nMachine won\n");
    			  	 print();
    			  	 return 0;
    			  }
    			  else{
    			  		p=check1();//Am i on verge of losing;
    			  		if(p.first!=-1){
    			  			arr[p.first][p.second]='O';
    			  			t++;
    			  			print();
    			  			continue;
    			  		}
    			  		else{
    			  			  int a=-1,b;
    			  			  bool mila=false;
                              if(t==4){
                                 if(arr[1][1]=='X' && arr[2][2]=='X'){
                                    if(arr[0][2]=='#'){t++;arr[0][2]='O';print();continue;}
                                    else if(arr[2][0]=='#'){t++;arr[2][0]='O';print();continue;}
                                    else if(arr[0][0]=='#'){t++;arr[0][0]='O';print();continue;}
                                
                                 }
                                 else if(arr[1][1]=='X' && arr[0][0]=='X'){
                                    if(arr[2][2]=='#'){t++;arr[2][2]='O';print();continue;}
                                    else if(arr[0][2]=='#'){t++;arr[0][2]='O';print();continue;}
                                    else if(arr[2][0]=='#'){t++;arr[2][0]='O';print();continue;}
                                
                                 }
                                else if(arr[0][0]=='X' && arr[2][2]=='X'){
                                     if(arr[0][1]=='#'){t++;arr[0][1]='O';print();continue;}
                                }
                                else if(arr[0][2]=='X' && arr[2][0]=='X'){
                                     if(arr[0][1]=='#'){t++;arr[0][1]='O';print();continue;}
                                }
                                else if(arr[0][1]=='X' && arr[2][0]=='X'){
                                    if(arr[1][0]=='#'){t++;arr[1][0]='O';print();continue;}
                                }
                                else if(arr[0][1]=='X' && arr[2][2]=='X'){
                                     if(arr[1][2]=='#'){t++;arr[1][2]='O';print();continue;}
                                }
                                else if(arr[0][0]=='X' && arr[2][1]=='X'){
                                     if(arr[1][0]=='#'){t++;arr[1][0]='O';print();continue;}
                                }
                                else if(arr[0][0]=='X' && arr[1][2]=='X'){
                                    if(arr[0][1]=='#'){t++;arr[0][1]='O';print();continue;}
                                }
                                else if(arr[0][2]=='X' && arr[2][1]=='X'){
                                    if(arr[1][2]=='#'){t++;arr[1][2]='O';print();continue;}
                                }
                                else if(arr[2][0]=='X' && arr[1][2]=='X'){
                                     if(arr[2][1]=='#'){t++;arr[2][1]='O';print();continue;}
                                }
                                else if(arr[0][2]=='X' && arr[1][0]=='X'){
                                     if(arr[0][1]=='#'){t++;arr[0][1]='O';print();continue;}
                                }
                                else if(arr[1][0]=='X' && arr[2][2]=='X'){
                                     if(arr[2][1]=='#'){t++;arr[2][1]='O';print();continue;}
                                }


                              }
                              if(t==6){
                                   if(arr[0][1]=='X' && arr[1][2]=='X' && arr[0][2]=='#'){
                                     arr[0][2]='O';t++;print();continue;
                                   }
                                   if(arr[0][1]=='X' && arr[1][0]=='X' && arr[0][0]=='#'){
                                     arr[0][0]='O';t++;print();continue;
                                   }
                                   if(arr[2][1]=='X' && arr[1][2]=='X' && arr[2][2]=='#'){
                                     arr[2][2]='O';t++;print();continue;
                                   }
                                   if(arr[1][0]=='X' && arr[2][1]=='X' && arr[2][0]=='#'){
                                     arr[2][0]='O';t++;print();continue;
                                   }

                                    if(arr[0][1]=='#'){
                                        arr[0][1]='O';
                                        t++;
                                        print();
                                        continue;
                                    }
                                    else if(arr[1][0]=='#'){
                                         arr[1][0]='O';
                                         t++;
                                         print();
                                         continue;
                                    }
                                    else if(arr[1][2]=='#'){
                                         arr[1][2]='O';
                                         t++;
                                         print();
                                         continue;
                                    }
                                    else if(arr[2][1]=='#'){
                                         arr[2][1]='O';
                                         t++;
                                         print();
                                         continue;
                                    }




                              }
    			  			  for(int i=0;i<3;i++){
    			  			  	 for(int j=0;j<3;j++){
    			  			  	 	if(arr[i][j]=='#'){
    			  			  	 		a=i;
    			  			  	 		b=j;
    			  			  	 		mila=true;
    			  			  	 		break;
    			  			  	 	}
    			  			  	 }
    			  			  	 if(mila)break;
    			  			  }
    			  			  if(a==-1){
    			  			  	printf("The Game is Drawn\n");
    			  			  	print();
    			  			  	return 0;
    			  			  }
    			  			  else{
    			  			  arr[a][b]='O';
    			  			  t++;
    			  			  print();
    			  			}

    			  		}

    			  }


    		}
     }
   }
	return 0;
}
