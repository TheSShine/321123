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

  
 void List()//Ŀ¼�� 
 { 
     
     printf("\t                                      \n"); 
     printf("\t           1.����(һ��)               \n");
     printf("\t           2.����(���)               \n");
     printf("\t           3.����                     \n"); 
     printf("\t           4.�ʽ�                     \n"); 
     printf("\t           5.ʱ��                     \n"); 
     printf("\t           6.����                     \n");
     printf("\t           7.��Ϣ                     \n");
     printf("\t                                      \n"); 
    
 } 
 void fuli1()//һ�θ������� 
 { 
     int n;
     double p,i,sum1;//�ܽ��p,����i,������sum1 
     printf("��������:\n"); 
     scanf("%lf",&p); 
     printf("��������:\n"); 
     scanf("%lf",&i); 
     printf("����洢ʱ��(��):\n"); 
     scanf("%d",&n); 
     sum1=p*pow((1+i),n);//�����ļ��㹫ʽ 
     printf("������Ϊ:%.2lf\n",sum1);//�����������Ľ�� 
 } 
void fuli2()//��θ�������
 { 
     int n;
     double p,i,sum2=0;
     char c;
     printf("��εȶ�Ͷ�뷽ʽ:\na.�ȶ�����Ͷ\nb.�ȶ�����Ͷ\n��ѡ��:");
     scanf("%s",&c);
     if(c=='a')
     {
        printf("������Ͷ���:"); 
        scanf("%lf",&p); 
        printf("����������:"); 
        scanf("%lf",&i); 
        printf("����洢ʱ��(��):"); 
        scanf("%d",&n);
        sum2=p*12*(pow(1+i,n)-1)/i;
        printf("������Ϊ:%.2lf\n",sum2);
     }
     else
     {
        printf("������Ͷ���:"); 
        scanf("%lf",&p); 
        printf("\t*����������:"); 
        scanf("%lf",&i); 
        printf("\t*����洢ʱ��(��):"); 
        scanf("%d",&n);
        sum2=(p*pow((1+i),n)-1)/i;
        printf("������Ϊ:%.2lf\n",sum2);
     }
 } 
 
 void danli()//�������� 
 { 
     int n; 
     double p,i,sum3; 
     printf("��������:\n"); 
     scanf("%lf",&p); 
     printf("����������:\n"); 
     scanf("%lf",&i); 
     printf("����洢ʱ��(��):\n"); 
     scanf("%d",&n); 
     sum3=p*(1+i*n); 
     printf("������Ϊ:%.2lf\n",sum3); 
 } 
 void benjin() //Ͷ���ʽ�
 { 
     int n; 
     double sum4,i,p;//pΪͶ�뱾�� 
     printf("\n\t*���뱾����:"); 
     scanf("%lf",&sum4); 
     printf("\t*����������:"); 
     scanf("%lf",&i); 
     printf("\t*��������ʱ��(��):"); 
     scanf("%d",&); 
     p=sum4/(1+i*n); 
     printf("\tͶ��ı���Ϊ:%.2lf\n\n",p); 
 }
 void shijian()   //Ͷ��ʱ��
 {
     double n;
     double sum5,i,p;
     printf("\n\t*����洢���:");
     scanf("%lf",&p);
     printf("\t*����������:");
     scanf("%lf",&i);
     printf("\t*���뱾����:");
     scanf("%lf",&sum5);
     n=(log(sum5/p))/(log(1+i));
     printf("\tͶ���ʱ��Ϊ:%.0lf\n\n",n);
 }
void lilv()  //����
{
    double sum6,i,p,n;
    printf("\n\t*����洢���:");
    scanf("%lf",&p);
    printf("\t*����洢ʱ��(��):");
    scanf("%lf",&n);
    printf("\t*���뱾����:");
    scanf("%lf",&sum6);
    i=pow((sum6/p),(1/n))-1;
    printf("\t����Ϊ:%.2lf\n\n",i);
}
void benxi()
{
    double sum7,i,p,n;
    printf("\n\t*���������:");
    scanf("%lf",&sum7);
    printf("\t*�������ʱ��(��):");
    scanf("%lf",&n);
    printf("\t*����������:");
    scanf("%lf",&i);
    p=sum7*i/(12*(1+i)*(pow(1+i,n)-1));
    printf("\tÿ�µȶϢ����Ϊ:%.2lf\n\n",p);

}
 main() 
 { 
    int a; 
    while(1)
    {
        List(); 
        printf("\t��ѡ��:"); 
        while(scanf("%d",&a)!=1||a<0||a>7)
        { 
             printf("\t�������!\n\t����ѡ��:"); 
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