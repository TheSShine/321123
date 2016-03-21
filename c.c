#include<stdio.h> 
 #include<math.h> 
 void List(); 
 void fuli1(); 
 void fuli2(); 
 void danli(); 
 void benjin(); 
 void shijian();
 void lilv();
 void benxi();

  
 void List()//目录表 
 { 
     
     printf("\t                                      \n"); 
     printf("\t           1.复利(一次)               \n");
     printf("\t           2.复利(多次)               \n");
     printf("\t           3.单利                     \n"); 
     printf("\t           4.资金                     \n"); 
     printf("\t           5.时间                     \n"); 
     printf("\t           6.利率                     \n");
     printf("\t           7.本息                     \n");
     printf("\t                                      \n"); 
    
 } 
 void fuli1()//一次复利计算 
 { 
     int n;
     double p,i,sum1;//总金额p,利率i,本利和sum1 
     printf("输入存款金额:\n"); 
     scanf("%lf",&p); 
     printf("输入利率:\n"); 
     scanf("%lf",&i); 
     printf("输入存储时间(年):\n"); 
     scanf("%d",&n); 
     sum1=p*pow((1+i),n);//复利的计算公式 
     printf("本利和为:%.2lf\n",sum1);//输出复利计算的结果 
 } 
void fuli2()//多次复利计算
 { 
     int n;
     double p,i,sum2=0;
     char c;
     printf("多次等额投入方式:\na.等额多次月投\nb.等额多次年投\n请选择:");
     scanf("%s",&c);
     if(c=='a')
     {
        printf("输入月投金额:"); 
        scanf("%lf",&p); 
        printf("输入年利率:"); 
        scanf("%lf",&i); 
        printf("输入存储时间(年):"); 
        scanf("%d",&n);
        sum2=p*12*(pow(1+i,n)-1)/i;
        printf("本利和为:%.2lf\n",sum2);
     }
     else
     {
        printf("输入年投金额:"); 
        scanf("%lf",&p); 
        printf("\t*输入年利率:"); 
        scanf("%lf",&i); 
        printf("\t*输入存储时间(年):"); 
        scanf("%d",&n);
        sum2=(p*pow((1+i),n)-1)/i;
        printf("本利和为:%.2lf\n",sum2);
     }
 } 
 
 void danli()//单利计算 
 { 
     int n; 
     double p,i,sum3; 
     printf("输入存款金额:\n"); 
     scanf("%lf",&p); 
     printf("输入年利率:\n"); 
     scanf("%lf",&i); 
     printf("输入存储时间(年):\n"); 
     scanf("%d",&n); 
     sum3=p*(1+i*n); 
     printf("本利和为:%.2lf\n",sum3); 
 } 
 void benjin() //投入资金
 { 
     int n; 
     double sum4,i,p;//p为投入本金 
     printf("\n\t*输入本利和:"); 
     scanf("%lf",&sum4); 
     printf("\t*输入年利率:"); 
     scanf("%lf",&i); 
     printf("\t*请输入存款时间(年):"); 
     scanf("%d",&); 
     p=sum4/(1+i*n); 
     printf("\t投入的本金为:%.2lf\n\n",p); 
 }
 void shijian()   //投入时间
 {
     double n;
     double sum5,i,p;
     printf("\n\t*输入存储金额:");
     scanf("%lf",&p);
     printf("\t*输入年利率:");
     scanf("%lf",&i);
     printf("\t*输入本利和:");
     scanf("%lf",&sum5);
     n=(log(sum5/p))/(log(1+i));
     printf("\t投入的时间为:%.0lf\n\n",n);
 }
void lilv()  //利率
{
    double sum6,i,p,n;
    printf("\n\t*输入存储金额:");
    scanf("%lf",&p);
    printf("\t*输入存储时间(年):");
    scanf("%lf",&n);
    printf("\t*输入本利和:");
    scanf("%lf",&sum6);
    i=pow((sum6/p),(1/n))-1;
    printf("\t利率为:%.2lf\n\n",i);
}
void benxi()
{
    double sum7,i,p,n;
    printf("\n\t*输入贷款金额:");
    scanf("%lf",&sum7);
    printf("\t*输入贷款时间(年):");
    scanf("%lf",&n);
    printf("\t*输入年利率:");
    scanf("%lf",&i);
    p=sum7*i/(12*(1+i)*(pow(1+i,n)-1));
    printf("\t每月等额本息还款为:%.2lf\n\n",p);

}
 main() 
 { 
    int a; 
    while(1)
    {
        List(); 
        printf("\t请选择:"); 
        while(scanf("%d",&a)!=1||a<0||a>7)
        { 
             printf("\t输入错误!\n\t重新选择:"); 
             getchar(); 
        } 
       
         switch(a){
         case 1: 
            fuli1(); 
             break; 
         case 2: 
            fuli2(); 
             break; 
         case 3: 
             danli(); 
             break; 
         case 4:
            benjin();
             break;
         case 5:
             shijian();
             break;
         case 6:
             benxi();
             break;
         case 7:
             benxi();
             break;
        }
    }
 } 