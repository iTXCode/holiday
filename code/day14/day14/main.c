//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct stu   //����ѧ���ṹ����
//{
// char sz_Name[20];   //ѧ������
// char sz_ID[11];     //ѧ��ѧ��
// char sz_Class[10];  //���ڰ༶
// float r_Score[3];   //���ſγ̳ɼ�����
//} student;
//
//#define STU_MAXSIZE 60     //��������ѧ������
//int i_stuSize;             //��¼ʵ��ѧ������
//student stu[STU_MAXSIZE];  //ѧ����Ϣ����
//
////===== ��ʾ���˵� =====//
//void Dis_Mian_Menu()         
//{
//  printf("\n ѧ���ɼ�����ϵͳ    \n");
//  printf("-----------------------\n");
//  printf("    1:��¼��ѧ���ɼ�   \n");
//  printf("    2:�޸�ѧ���ɼ�     \n");
//  printf("    3:ѧ���ɼ���ѯ     \n");
//  printf("    4:ƽ���ɼ�������   \n");
//  printf("    5:��ʾ�༶�ɼ���   \n");
//  printf("    6:׷��ѧ���ɼ�     \n");
//  printf("    0:�˳�             \n");
//  printf("-----------------------\n");
//}
//
////===== ¼��ѧ���ɼ� =====//
//void Input_Stu_Information(student stu[])     
//{
// int i;                                 //�������α���i
// printf("����������ѧ���ɼ���Ϣ(���� ѧ�� �༶ ��ѧ ���� ��ѧ):\n");       //����ѧ����Ϣ
// for(i=0;i<i_stuSize;i++)          //ѭ����䣬�������Ʊ���i��ʵ��������Ĵ�С��ϵ
// { 
//  printf("Student %d:",i+1);            //���ѧ���������
//  scanf("%s%s%s",stu[i].sz_Name,stu[i].sz_ID,stu[i].sz_Class);       //���������i��ѧ��������ѧ�źͰ༶
//  scanf("%f%f%f",&stu[i].r_Score[0],&stu[i].r_Score[1],&stu[i].r_Score[2]);    //��ʵ����ʽ�����i��ѧ�������ſγɼ�
// }
//}
//
////===== ����Ϣ����scorefile.dat�ļ� =====//
//void Save_File(student stu[])    
//{
// FILE *fp;                  //����fp��һ��ָ��FILE���͵�ָ����� 
// int i;
// if((fp=fopen("c:\\scorefile.dat","wb"))==NULL)  //���������ж��Ƿ��ܴ��ļ�
// {
//  printf("Save_File�������ļ�c:\\scorefile.dat!ʧ�ܣ���������˳�!\n");
//  exit(1);  
// }
// for(i=0;i<i_stuSize;i++)           //��ѭ������ǵı���iС��ʵ��ѧ������
//  if(fwrite(&stu[i],sizeof(student),1,fp)!=1)
//  { 
//   printf("Write file error!\n");
//   exit(1);
//  }
// fclose(fp);                  //�ر�fpָ����ļ�
//}
//
////===== ���˵���һѡ���¼��ѧ���ɼ� =====//
//int Input_Data()                
//{
// printf("\n������ʵ������ѧ��������");       //��������׼ȷѧ������
// scanf("%d",&i_stuSize);                     //����׼ȷѧ���������ҷ��䴢�浥Ԫ
// Input_Stu_Information(stu);                 //����ѧ����Ϣ  
// Save_File(stu);                             //����ѧ����Ϣ
// return(i_stuSize);                          //����ʵ��ѧ������
//}
//
////===== ѧ���ɼ���ѯ�˵� =====//
//void Dis_Search_Menu()                                //�����޷������͵�ѧ���ɼ���ѯ����
//{
// printf("\n  ѧ���ɼ���ѯ   \n");
// printf("-------------------\n");
// printf("   1:��ѧ�Ų�ѯ    \n");
// printf("   2:����Ŀ��ѯ    \n");
// printf("   0:�˳���ѯ      \n");
// printf("-------------------\n");
//}
//
////===== ��ѧ�Ų�ѯ =====//
//int Search_ID(char sz_ID[11])		                     //���尴ѧ�Ų�ѯ�ɼ��ĺ���
//{
// int i;
// for(i=0;i<=i_stuSize;i++)
// {
//  if(!strcmp(sz_ID,stu[i].sz_ID))                       //ͨ���Ƚ������ַ�������Ϊ�����ж��Ƿ�ִ���������
//  {
//   printf("����\tѧ��\t�༶\t��ѧ\t\t����\t\t��ѧ\n");  
//   printf("-----------------------------------------------------------------\n");
//   printf("%s\t%s\t%s",stu[i].sz_Name,stu[i].sz_ID,stu[i].sz_Class);   
//   printf("\t%-8.1f\t%-8.1f\t%-8.1f\n",stu[i].r_Score[0],stu[i].r_Score[1],stu[i].r_Score[2]);//��Ҫ���ʽ����ɼ�
//   break;
//  }
// }
// return(i);                                              //���ر仯���ʵ��iֵ
//}
//
////===== ����Ŀ��ѯ =====//
//void Search_Course(int course)                                      //���尴��Ŀ��ѯ�ĺ���    
//{                             
// int i; 
// switch(course)                                                //switchѭ�����
// { 
//  case 1:printf("\n ����\tѧ��\t�༶\t��ѧ\n"); break;
//  case 2:printf("\n ����\tѧ��\t�༶\t����\n"); break;
//  case 3:printf("\n ����\tѧ��\t�༶\t��ѧ\n"); break;
// }
// printf("-----------------------------------------------------------------\n");
// for(i=0;i<i_stuSize;i++)
// { 
//  printf("%s\t%s\t%s",stu[i].sz_Name,stu[i].sz_ID,stu[i].sz_Class);                //�����i��ѧ����Ϣ
//  printf("\t%-8.1f\n",stu[i].r_Score[course-1]);
// }
// printf("-----------------------------------------------------------------\n");
//}
//
////===== ���˵��ڶ�ѡ��޸�ѧ���ɼ� =====//
//void Modify_Data()//�޸�ָ��ѧ�ŵ�ѧ���ĳɼ�
//{
// int i=0;                               //����������ҽ��г�ʼ��
// char s_ID[11];                         //����һ���ַ����͵�����
// FILE *fp;                             //����һ��ָ��FLIE���͵�ָ��fp
// if((fp=fopen("c:\\scorefile.dat","wb"))==NULL)  //��д��ʽ�򿪳ɼ��ļ�
// {
//  printf("Modify_Data�������ļ�c:\\scorefile.dat!ʧ�ܣ���������˳�!"); 
//  return;
// } 
// printf("������Ҫ�޸ĳɼ���ѧ��ѧ��:");
// scanf("%s",s_ID);
// i=Search_ID(s_ID);        //����Ҫ�޸ĵ�ѧ��
// printf("�밴[��ѧ ���� ��ѧ]˳�������µĵĳɼ�:");
// scanf("%f%f%f",&stu[i].r_Score[0],&stu[i].r_Score[1],&stu[i].r_Score[2]);// �����޸ĵ�ѧ���ĳɼ�
// fwrite(&stu[i],sizeof(student),i_stuSize,fp);   //���޸ĺ�ĳɼ�д���ļ�
// fclose(fp);                                 //�ر�ָ��fp
//}
//
////===== ���˵�����ѡ�ѧ���ɼ���ѯ =====//
//void Search_Data()		
//{
// int Select,flag=1;
// int course;			//�γ̺�
// char s_id[11];			//ѧ��    
// while(flag)
// {
//  Dis_Search_Menu();
//  printf("��������ѡ��ѯ���ܺ�:");
//  scanf("%d",&Select);
//  switch(Select)                     //switchѭ����䣨����while�������Ƕ��
//  { 
//   case 1:printf("�������ѯѧ��:");
//          scanf("%s",s_id);
//          Search_ID(s_id);
//          break;
//   case 2:printf("�������ѯ��Ŀ��:1 ��ѧ,2 ����,3 ��ѧ\n");
//          scanf("%d",&course);
//          Search_Course(course);
//          break;
//   default:printf("�������,����ѡ��!\n");
//           break;
//  }
//  if (Select==0)   //�˳���־����
//	 flag=0;
//  else
//     flag=1;
// }
//}
//
////===== �ɼ����� =====//
//void Sort(float average[STU_MAXSIZE])//��ƽ���ֲ�����
//{
// int i,j,k;
// student stemp;           
// float ave;
// for(i=0;i<i_stuSize-1;i++) //�ɼ�����
//  {
//   k=i;
//   for(j=i;j<i_stuSize;j++)
//	if(average[j]<average[k])k=j;
//   if(k!=i)
//   {
//    stemp=stu[i];   
//    stu[i]=stu[k];   
//    stu[k]=stemp;
//    ave=average[i];  
//    average[i]=average[k]; 
//    average[k]=ave;                  //if����н����˱���ֵ�Ľ���
//   }
//  }
//}
//
////===== ���˵�����ѡ�����ƽ���ֺ����� =====//
//void Average_Sort()     
//{
// int i;
// float sum,average[STU_MAXSIZE];
// for(i=0;i<i_stuSize;i++)   //����ƽ���ɼ�
// {
//  sum=stu[i].r_Score[0]+stu[i].r_Score[1]+stu[i].r_Score[2];
//  average[i]=sum/3;
// }
// Sort(average);             //��ƽ���ɼ�����
// printf("\n\t\t\t  ��ƽ���ɼ�������ʾ�ɼ�\n");   //��������ĳɼ���
//              /*  \t��ˮƽ�Ʊ������ǰλ���Ƶ���һ��tabλ��*/
// printf("\t\t\t=========================\n");
// printf("����\tѧ��\t�༶\t��ѧ\t\t����\t\t��ѧ\t\tƽ���ɼ�\n");
// printf("----------------------------------------------------------------------------------\n");
// for(i=0;i<i_stuSize;i++)
//  {
//   printf("%s\t%s\t%s",stu[i].sz_Name,stu[i].sz_ID,stu[i].sz_Class);   
//   printf("\t%-8.1f\t%-8.1f\t%-8.1f",stu[i].r_Score[0],stu[i].r_Score[1],stu[i].r_Score[2]);
//   printf("\t%-8.1f\n",average[i]);
//  }
// printf("----------------------------------------------------------------------------------\n");
//}
//
////===== ���˵�����ѡ���ʾ�༶�ɼ��� =====//
//void Display_Data()      
//{
// char sz_Class[10];                        //�����ַ����͵��������sz_Class
// int i=0;
// printf("������༶���ƣ�");                    //��ʾ����༶���
// scanf("%s",sz_Class);
// printf("\n\t\t\t %s��ɼ���\n",sz_Class);          //��Ҫ�������Ӧ���
// printf("\t\t\t===========\n");
// printf("����\tѧ��\t��ѧ\t\t����\t\t��ѧ\n");
// printf("-------------------------------------------------------\n");
// for(;i<i_stuSize;i++)
// { 
//  if(!strcmp(sz_Class,stu[i].sz_Class))
//   {
//    printf("%s\t%s",stu[i].sz_Name,stu[i].sz_ID);    
//	printf("\t%-8.1f\t%-8.1f\t%-8.1f\n",stu[i].r_Score[0],stu[i].r_Score[1],stu[i].r_Score[2]);
//   }
// }
// printf("--------------------------------------------------------\n");
//}
//
////===== ���˵�����ѡ�׷��ѧ���ɼ� =====//
//void Insert_Data()
//{
// student st;
// FILE *fp;
// printf("�밴����˳������Ҫ����ѧ���ɼ���Ϣ(���� ѧ�� �༶ ��ѧ ���� ��ѧ):\n");
// scanf("%s%s%s",st.sz_Name,st.sz_ID,st.sz_Class);
// scanf("%f%f%f",&st.r_Score[0],&st.r_Score[1],&st.r_Score[2]);
// if((fp=fopen("c:\\scorefile.dat","ab"))==NULL)   //��׷�ӷ�ʽ���ļ�
// {
//  printf("Insert_stu�������ļ�scorefile.dat!ʧ�ܣ���������˳�!"); 
//  return; 
// }
// fwrite(&st,sizeof(student),1,fp);  //����ѧ�����뵽�ļ�ĩβ
// fclose(fp);
//}
//
////===== ��ʼ�����麯�� =====//
//int Init_Arr()
//{
// FILE *fp;
// int i=0;
// if((fp=fopen("c:\\scorefile.dat","rb"))==NULL) //�Զ���ʽ�򿪳ɼ��ļ�
// {
//  printf("Init_Arr�������ļ�c:\\scorefile.dat!ʧ�ܣ���������˳�!"); 
//  return(0);
// } 
// while(!feof(fp))
// {
//  fread(&stu[i],sizeof(student),1,fp); //��ѧ�����ݶ�����stu����
//  i++;
// }
// i_stuSize=i-1;
// fclose(fp);        //�رճɼ��ļ�
// return(1);
//}
//
////===== ������ =====//
//void main()           
//{
// int iSelectNum,flag=1;  //flagΪ�˳���־
// while(flag)
// {
//  Dis_Mian_Menu();
//  printf("��������ѡ���ܺ�0-1:");
//  scanf("%d",&iSelectNum);
//  switch(iSelectNum)
//  { 
//   case 1:Input_Data();  //��¼��ѧ���ɼ�
//          break;
//   case 2:               //�޸�ѧ���ɼ�
//          if (Init_Arr()) Modify_Data();
//          break;
//   case 3:               //ѧ���ɼ���ѯ
//          if (Init_Arr()) Search_Data();
//          break;
//   case 4:               //ƽ���ɼ�������
//          if (Init_Arr()) Average_Sort();
//          break;
//   case 5:               //��ʾ�༶�ɼ���
//          if (Init_Arr()) Display_Data();
//          break;
//   case 6:               //׷��ѧ���ɼ�
//          if (Init_Arr()) Insert_Data();
//          break;
//   default:printf("�������,����ѡ���ܺ�!\n");
//          break;
//   }
//  if (iSelectNum==0)     //�˳���־����
//	 flag=0;
//  else;
// }
//     flag=1;
// } 