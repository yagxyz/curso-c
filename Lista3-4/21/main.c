

//#include <stdio.h>
//int main()
//{
//    int x=5, y=3, z;
//    int *p;
//p=&x;
//z=2*y+(*p)−x;
//printf("z=%d", z);
//return 0;
//}



// #include <stdio.h>
//
// int main()
// {
//     int x[]={1 ,2 ,3 ,4 ,5};
//     int n=5, i ;
//     int *p;
//p=x;
//for ( i =0;i<n; i++)
//    {
//        printf ("%d\n" ,*(p+i ));
//    }
//
//    return 0;
// }


// #include <stdio.h>
//
//int main()
//{
//    int x[]={1,2,3,4,5}, y[]={6,7,8,9,10};
//    int n=5, i;
//    int *p, *q;
//    p=x;
//    q=y;
//    for (i=0; i<n;i++)
//    {
//        printf("%d\n", *(p+i) + *(q+(n-1-i)));
//    }
//
//    return 0;
//}


// #include <stdio.h>
// int main()
// {
//      int x[]={1 ,2 ,3 ,4 ,5};
//      int *y[5];
//      int n=5, i ;
//      int **p;
//      p=y;
//
//      for (i =0;i<n; i++)
//       {
//           *(p+i)=&x[i];
//       }
//      for (i=0;i<n;i++)
//      {
//            printf ("%d\n", *(*(p+i )));
//      }
//      return 0;
// }




// #include <stdio.h>
//  int maior( int x,int y)
//  {
//      if(x>y) return x;
//      else return y;
//       }
//
//int main()
//{
//    int a=6, b=8;
//    int (*f)();
//    f=maior;
//    printf ("%d\n", f(a,b));
//     return 0;
//      }




  #include <stdio.h>
  int mensagem(char msg[])
  {
      printf("%s\n", msg);
  }

      int main()
      {
          char a[]= "Hello World !";
           int (*f)();
         f=mensagem;
         f(a);
         return 0;
         }
