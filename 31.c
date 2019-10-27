#include<stdio.h>
int main()
{
  int n=0,m=0;

  do{
  printf("Row:");
  scanf("%d",&n);
  }
  while (n<2);

  do{
  printf("Colu:");
  scanf("%d",&m);
  }
  while (m<2);



  int a[n][m];

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      a[n][m]=0;
      } 
    }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("element-[%d],[%d]:",i,j);
      scanf("%d",&a[i][j]);
     
    } 
  }
  // Out put
  printf("The matrix is:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      
      printf("%d ",a[i][j]);
     
    } printf("\n");
  }
  return 0 ;
}
