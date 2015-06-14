  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int m,p,c,e,ph,s;
  float pt;
  clrscr();
  printf("enter marks of mathematics");
  scanf("%d",&m);
  printf("\nenter marks of physics");
  scanf("%d",&p);
  printf("\n enter marks of chemistry");
  scanf("%d",&c);
  printf("\n enter marks of english");
  scanf("%d",&e);
  printf("enter marks of physical education");
  scanf("%d",&ph);
  s=m+p+c+e+ph;
  pt=s/5;
  printf("sum of marks is %d",s);
  printf("\npercentage is %f",pt);
  if(pt>=60 && pt<=100)
  printf("\nyou have got first division");
  else if(pt>=45 && pt<60)
  printf("\nyou have got second division");
  else if(pt>=33 && pt<45)
  printf("\nyou have got third division");
  else if(pt<33)
  printf("\nyou are fail");
  getch();
  }

