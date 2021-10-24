using namespace std;
main () {
     unsigned long N,maxX=0,maxY=0,S=0;
          cin>>N;
     unsigned long AX[N],AY[N];
       for (long i=0; i<N; i++) {
                 cin>>AX[i]>>AY[i];
            if (AX[i]>maxX){maxX=AX[i];}
            if (AY[i]>maxY){maxY=AY[i];}
                 }
     if (N==1) {cout <<0;return 0;}
     for (long i=0;i<N;i++){
         S+=maxX-AX[i];
         S+=maxY-AY[i];
         }
     cout << S;
     system ("PAUSE");
     }
