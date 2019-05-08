//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct stu   //定义学生结构类型
//{
// char sz_Name[20];   //学生姓名
// char sz_ID[11];     //学生学号
// char sz_Class[10];  //所在班级
// float r_Score[3];   //三门课程成绩数组
//} student;
//
//#define STU_MAXSIZE 60     //定义最大的学生人数
//int i_stuSize;             //记录实际学生人数
//student stu[STU_MAXSIZE];  //学生信息数组
//
////===== 显示主菜单 =====//
//void Dis_Mian_Menu()         
//{
//  printf("\n 学生成绩管理系统    \n");
//  printf("-----------------------\n");
//  printf("    1:新录入学生成绩   \n");
//  printf("    2:修改学生成绩     \n");
//  printf("    3:学生成绩查询     \n");
//  printf("    4:平均成绩和排序   \n");
//  printf("    5:显示班级成绩单   \n");
//  printf("    6:追加学生成绩     \n");
//  printf("    0:退出             \n");
//  printf("-----------------------\n");
//}
//
////===== 录入学生成绩 =====//
//void Input_Stu_Information(student stu[])     
//{
// int i;                                 //定义整形变量i
// printf("请依次输入学生成绩信息(姓名 学号 班级 数学 语文 化学):\n");       //输入学生信息
// for(i=0;i<i_stuSize;i++)          //循环语句，用来控制变量i与实际人数间的大小关系
// { 
//  printf("Student %d:",i+1);            //输出学生及其序号
//  scanf("%s%s%s",stu[i].sz_Name,stu[i].sz_ID,stu[i].sz_Class);       //依次输出第i个学生的姓名学号和班级
//  scanf("%f%f%f",&stu[i].r_Score[0],&stu[i].r_Score[1],&stu[i].r_Score[2]);    //以实数形式输出第i个学生的三门课成绩
// }
//}
//
////===== 将信息存入scorefile.dat文件 =====//
//void Save_File(student stu[])    
//{
// FILE *fp;                  //定义fp是一个指向FILE类型的指针变量 
// int i;
// if((fp=fopen("c:\\scorefile.dat","wb"))==NULL)  //根据条件判断是否能打开文件
// {
//  printf("Save_File函数打开文件c:\\scorefile.dat!失败，按任意键退出!\n");
//  exit(1);  
// }
// for(i=0;i<i_stuSize;i++)           //由循环语句是的变量i小于实际学生人数
//  if(fwrite(&stu[i],sizeof(student),1,fp)!=1)
//  { 
//   printf("Write file error!\n");
//   exit(1);
//  }
// fclose(fp);                  //关闭fp指向的文件
//}
//
////===== 主菜单第一选项：新录入学生成绩 =====//
//int Input_Data()                
//{
// printf("\n请输入实际输入学生人数：");       //提醒输入准确学生人数
// scanf("%d",&i_stuSize);                     //输入准确学生人数并且分配储存单元
// Input_Stu_Information(stu);                 //输入学生信息  
// Save_File(stu);                             //储存学生信息
// return(i_stuSize);                          //返回实际学生人数
//}
//
////===== 学生成绩查询菜单 =====//
//void Dis_Search_Menu()                                //定义无符号类型的学生成绩查询函数
//{
// printf("\n  学生成绩查询   \n");
// printf("-------------------\n");
// printf("   1:按学号查询    \n");
// printf("   2:按科目查询    \n");
// printf("   0:退出查询      \n");
// printf("-------------------\n");
//}
//
////===== 按学号查询 =====//
//int Search_ID(char sz_ID[11])		                     //定义按学号查询成绩的函数
//{
// int i;
// for(i=0;i<=i_stuSize;i++)
// {
//  if(!strcmp(sz_ID,stu[i].sz_ID))                       //通过比较两个字符串长度为依据判断是否执行以下语句
//  {
//   printf("姓名\t学号\t班级\t数学\t\t语文\t\t化学\n");  
//   printf("-----------------------------------------------------------------\n");
//   printf("%s\t%s\t%s",stu[i].sz_Name,stu[i].sz_ID,stu[i].sz_Class);   
//   printf("\t%-8.1f\t%-8.1f\t%-8.1f\n",stu[i].r_Score[0],stu[i].r_Score[1],stu[i].r_Score[2]);//按要求格式打出成绩
//   break;
//  }
// }
// return(i);                                              //返回变化后的实际i值
//}
//
////===== 按科目查询 =====//
//void Search_Course(int course)                                      //定义按科目查询的函数    
//{                             
// int i; 
// switch(course)                                                //switch循环语句
// { 
//  case 1:printf("\n 姓名\t学号\t班级\t数学\n"); break;
//  case 2:printf("\n 姓名\t学号\t班级\t语文\n"); break;
//  case 3:printf("\n 姓名\t学号\t班级\t化学\n"); break;
// }
// printf("-----------------------------------------------------------------\n");
// for(i=0;i<i_stuSize;i++)
// { 
//  printf("%s\t%s\t%s",stu[i].sz_Name,stu[i].sz_ID,stu[i].sz_Class);                //输出第i个学生信息
//  printf("\t%-8.1f\n",stu[i].r_Score[course-1]);
// }
// printf("-----------------------------------------------------------------\n");
//}
//
////===== 主菜单第二选项：修改学生成绩 =====//
//void Modify_Data()//修改指定学号的学生的成绩
//{
// int i=0;                               //定义变量并且进行初始化
// char s_ID[11];                         //定义一个字符类型的数组
// FILE *fp;                             //定义一个指向FLIE类型的指针fp
// if((fp=fopen("c:\\scorefile.dat","wb"))==NULL)  //以写方式打开成绩文件
// {
//  printf("Modify_Data函数打开文件c:\\scorefile.dat!失败，按任意键退出!"); 
//  return;
// } 
// printf("请输入要修改成绩的学生学号:");
// scanf("%s",s_ID);
// i=Search_ID(s_ID);        //查找要修改的学生
// printf("请按[数学 语文 化学]顺序输入新的的成绩:");
// scanf("%f%f%f",&stu[i].r_Score[0],&stu[i].r_Score[1],&stu[i].r_Score[2]);// 输入修改的学生的成绩
// fwrite(&stu[i],sizeof(student),i_stuSize,fp);   //将修改后的成绩写入文件
// fclose(fp);                                 //关闭指针fp
//}
//
////===== 主菜单第三选项：学生成绩查询 =====//
//void Search_Data()		
//{
// int Select,flag=1;
// int course;			//课程号
// char s_id[11];			//学号    
// while(flag)
// {
//  Dis_Search_Menu();
//  printf("请输入所选查询功能号:");
//  scanf("%d",&Select);
//  switch(Select)                     //switch循环语句（其在while语句中镶嵌）
//  { 
//   case 1:printf("请输入查询学号:");
//          scanf("%s",s_id);
//          Search_ID(s_id);
//          break;
//   case 2:printf("请输入查询科目号:1 数学,2 语文,3 化学\n");
//          scanf("%d",&course);
//          Search_Course(course);
//          break;
//   default:printf("输入错误,重新选择!\n");
//           break;
//  }
//  if (Select==0)   //退出标志置零
//	 flag=0;
//  else
//     flag=1;
// }
//}
//
////===== 成绩排序 =====//
//void Sort(float average[STU_MAXSIZE])//按平均分并排序
//{
// int i,j,k;
// student stemp;           
// float ave;
// for(i=0;i<i_stuSize-1;i++) //成绩排序
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
//    average[k]=ave;                  //if语句中进行了变量值的交换
//   }
//  }
//}
//
////===== 主菜单第四选项：计算平均分和排序 =====//
//void Average_Sort()     
//{
// int i;
// float sum,average[STU_MAXSIZE];
// for(i=0;i<i_stuSize;i++)   //计算平均成绩
// {
//  sum=stu[i].r_Score[0]+stu[i].r_Score[1]+stu[i].r_Score[2];
//  average[i]=sum/3;
// }
// Sort(average);             //按平均成绩排序
// printf("\n\t\t\t  按平均成绩升序显示成绩\n");   //输出排序后的成绩单
//              /*  \t是水平制表符将当前位置移到下一个tab位置*/
// printf("\t\t\t=========================\n");
// printf("姓名\t学号\t班级\t数学\t\t语文\t\t化学\t\t平均成绩\n");
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
////===== 主菜单第五选项：显示班级成绩单 =====//
//void Display_Data()      
//{
// char sz_Class[10];                        //定义字符类型的数组变量sz_Class
// int i=0;
// printf("请输入班级名称：");                    //提示输入班级编号
// scanf("%s",sz_Class);
// printf("\n\t\t\t %s班成绩单\n",sz_Class);          //按要求输出相应结果
// printf("\t\t\t===========\n");
// printf("姓名\t学号\t数学\t\t语文\t\t化学\n");
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
////===== 主菜单第六选项：追加学生成绩 =====//
//void Insert_Data()
//{
// student st;
// FILE *fp;
// printf("请按下列顺序输入要插入学生成绩信息(姓名 学号 班级 数学 语文 化学):\n");
// scanf("%s%s%s",st.sz_Name,st.sz_ID,st.sz_Class);
// scanf("%f%f%f",&st.r_Score[0],&st.r_Score[1],&st.r_Score[2]);
// if((fp=fopen("c:\\scorefile.dat","ab"))==NULL)   //以追加方式打开文件
// {
//  printf("Insert_stu函数打开文件scorefile.dat!失败，按任意键退出!"); 
//  return; 
// }
// fwrite(&st,sizeof(student),1,fp);  //将该学生插入到文件末尾
// fclose(fp);
//}
//
////===== 初始化数组函数 =====//
//int Init_Arr()
//{
// FILE *fp;
// int i=0;
// if((fp=fopen("c:\\scorefile.dat","rb"))==NULL) //以读方式打开成绩文件
// {
//  printf("Init_Arr函数打开文件c:\\scorefile.dat!失败，按任意键退出!"); 
//  return(0);
// } 
// while(!feof(fp))
// {
//  fread(&stu[i],sizeof(student),1,fp); //将学生数据读出到stu数组
//  i++;
// }
// i_stuSize=i-1;
// fclose(fp);        //关闭成绩文件
// return(1);
//}
//
////===== 主程序 =====//
//void main()           
//{
// int iSelectNum,flag=1;  //flag为退出标志
// while(flag)
// {
//  Dis_Mian_Menu();
//  printf("请输入所选功能号0-1:");
//  scanf("%d",&iSelectNum);
//  switch(iSelectNum)
//  { 
//   case 1:Input_Data();  //新录入学生成绩
//          break;
//   case 2:               //修改学生成绩
//          if (Init_Arr()) Modify_Data();
//          break;
//   case 3:               //学生成绩查询
//          if (Init_Arr()) Search_Data();
//          break;
//   case 4:               //平均成绩和排序
//          if (Init_Arr()) Average_Sort();
//          break;
//   case 5:               //显示班级成绩单
//          if (Init_Arr()) Display_Data();
//          break;
//   case 6:               //追加学生成绩
//          if (Init_Arr()) Insert_Data();
//          break;
//   default:printf("输入错误,重新选择功能号!\n");
//          break;
//   }
//  if (iSelectNum==0)     //退出标志置零
//	 flag=0;
//  else;
// }
//     flag=1;
// } 