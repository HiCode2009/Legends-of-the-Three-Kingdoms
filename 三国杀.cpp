#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct pai{
	int paifu;
	int huase;
	int yanse;
	int dianshu;
	int leixing;
	int changdu;
	void Kanpai()
	{
		if(paifu==0 || paifu==1);
		else printf("�Ƹ���������\n");
		switch(huase)
		{
			case 0:cout<<"����";break;
			case 1:cout<<"����";break;
			case 2:cout<<"÷��";break;
			case 3:cout<<"����";break;
			case-1:cout<<"��ɫ";break;
			default:printf("��ɫ����\n");break;
		}
		switch(dianshu)
		{
			case 0:cout<<"A ";break;
			case 1:cout<<"2 ";break;
			case 2:cout<<"3 ";break;
			case 3:cout<<"4 ";break;
			case 4:cout<<"5 ";break;
			case 5:cout<<"6 ";break;
			case 6:cout<<"7 ";break;
			case 7:cout<<"8 ";break;
			case 8:cout<<"9 ";break;
			case 9:cout<<"10 ";break;
			case 10:cout<<"J ";break;
			case 11:cout<<"Q ";break;
			case 12:cout<<"K ";break;
			case-1:cout<<"�޵���";break;
			default:printf("��������\n");break;
		}
		switch(leixing)
		{
			case 101:cout<<"��ɱ��"<<endl;break;
			case 102:cout<<"������"<<endl;break;
			case 103:cout<<"���ҡ�"<<endl;break;
			case 201:cout<<"�����Ӳ��š�"<<endl;break;
			case 202:cout<<"��˳��ǣ��"<<endl;break;
			case 203:cout<<"���������С�"<<endl;break;
			case 204:cout<<"��������"<<endl;break;
			case 205:cout<<"���赶ɱ�ˡ�"<<endl;break;
			case 206:cout<<"����԰���塿"<<endl;break;
			case 207:cout<<"����ȷ�ǡ�"<<endl;break;
			case 208:cout<<"���������֡�"<<endl;break;
			case 209:cout<<"������뷢��"<<endl;break;
			case 210:cout<<"����и�ɻ���"<<endl;break;
			case 251:cout<<"���ֲ�˼��"<<endl;break;
			case 252:cout<<"�����硿"<<endl;break;
			case 301:cout<<"���������(1)��"<<endl;break;
			case 302:cout<<"������˫�ɽ�(2)��"<<endl;break;
			case 303:cout<<"�����G��(2)��"<<endl;break;
			case 304:cout<<"���������µ�(3)��"<<endl;break;
			case 305:cout<<"���ɰ���ì(3)��"<<endl;break;
			case 306:cout<<"����ʯ��(3)��"<<endl;break;
			case 307:cout<<"�����컭�(4)��"<<endl;break;
			case 308:cout<<"�����빭(5)��"<<endl;break;
			case 331:cout<<"��������"<<endl;break;
			case 361:cout<<"������(-1)��"<<endl;break;
			case 362:cout<<"������(-1)��"<<endl;break;
			case 363:cout<<"�����U(-1)��"<<endl;break;
			case 381:cout<<"��צ�Ʒɵ�(+1)��"<<endl;break;
			case 382:cout<<"����¬(+1)��"<<endl;break;
			case 383:cout<<"����Ӱ(+1)��"<<endl;break;
			default:printf("���Ͳ�������");break;
		}
	}
};
void Qishixipai(pai A[2][4][13],pai paidui[104])
{
	int i,m,x,y,z,a[104]={ 0 };
	srand((unsigned)time(NULL));
	for(i=1;i<=104;i++)
	{
		while(a[m=rand()%104]);
		a[m]=i;
	}
	for(i=0;i<=103;i++)
	{
		x=(a[i]-1)/52;
		y=((a[i]-1)-52*x)/13;
		z=(a[i]-1)%13;
		paidui[i]=A[x][y][z];
	}
}
void Xipai(pai paidui[104],int*paiduishu,pai qipaidui[104],int*qipaishu)
{
	int i,m,a[104]={ 0 };
	srand((unsigned)time(NULL));
	for(i=1;i<=(*qipaishu);i++)
	{
		while(a[m=rand()%(*qipaishu)]);
		a[m]=i;
	}
	for(i=0;i<=((*qipaishu)-1);i++)
	{
		paidui[i]=qipaidui[a[i]];
		qipaidui[a[i]].leixing=-1;
		(*paiduishu)++;
		(*qipaishu)--;
	}
	for(i=(*paiduishu);i<=103;i++)paidui[i].leixing=-1;
}
pai Mo1pai(pai A[104],int*x,pai B[104],int*y,int*b)
{
	pai p;
	if((*x)==0)Xipai(A,x,B,y);
	else if((*x)<0)printf("���Ʋ�������");
	else;
	p=A[104-(*x)];
	(*x)--;
	(*b)++;
	return(p);
}
struct wujiang
{
	char name;
	int tili;
	int tilishangxian;
	int shoupaishangxian;
	int huihekaishi;
	int panding;
	int mopai;
	int chupai;
	int qipai;
	int huihejieshu;
	int juese;
	pai shoupai[20];
	int shoupaishu;
	pai zhuangbei[4];
	int zhuangbeishu;
	pai pandingpai[3];
	int pandingshu;
	int juli[1];
	void Kanshoupai()
	{
		printf("��ҵ�ǰ���ƣ�\n");
		if(shoupaishu)
		{
			int m;
			for(m=0;m<=(shoupaishu-1);m++)
			{
				printf("%d ",m);
				(shoupai[m]).Kanpai();
			}
		}
		else printf("�ճ�\n");
		printf("\n");
	}
	void Kanzhuangbei()
	{
		if(juese)printf("���");
		else printf("����");
		printf("��ǰװ����\n");
		printf("0 ������ ");
		if((zhuangbei[0]).leixing==-1)printf("��\n");
		else(zhuangbei[0]).Kanpai();
		printf("1 ���ߣ� ");
		if((zhuangbei[1]).leixing==-1)printf("��\n");
		else(zhuangbei[1]).Kanpai();
		printf("2 ������ ");
		if((zhuangbei[2]).leixing==-1)printf("��\n");
		else(zhuangbei[2]).Kanpai();
		printf("3 ������ ");
		if((zhuangbei[3]).leixing==-1)printf("��\n");
		else(zhuangbei[3]).Kanpai();
		printf("\n");
	}
	void Kanpandingpai()
	{
		if(juese)printf("���");
		else printf("����");
		printf("��ǰ�ж�����\n");
		if((pandingpai[0]).leixing==-1)printf("��\n");
		else
		{
			printf("0 ");
			(pandingpai[0]).Kanpai();
			if((pandingpai[1]).leixing==-1);
			else
			{
				printf("1 ");
				(pandingpai[1]).Kanpai();
				if((pandingpai[2]).leixing==-1);
				else
				{
					printf("2 ");
					(pandingpai[2]).Kanpai();
				}
			}
		}
	}
};
void Mopai(int*shoupaishu,pai shoupai[20],pai A[104],int*x,pai B[104],int*y,int juese)
{
	if(juese)printf("��Ҵ��ƶ���2����\n");
	else printf("���Դ��ƶ���2����\n");
	pai p;
	p=Mo1pai(A,x,B,y,shoupaishu);
	shoupai[*shoupaishu-1]=p;
	pai q;
	q=Mo1pai(A,x,B,y,shoupaishu);
	shoupai[*shoupaishu-1]=q;
	int m;
	if(juese)
	{
		printf("��ҵ�ǰ���ƣ�\n");
		for(m=0;m<=(*shoupaishu-1);m++)
		{
			printf("%d ",m);
			(shoupai[m]).Kanpai();
		}
	}
	printf("�ƶѻ�ʣ%d����\n\n",*x);
}
void Qishishoupai(wujiang*w,pai A[104],int*x,pai B[104],int*y)
{
	pai a;
	a=Mo1pai(A,x,B,y,&((*w).shoupaishu));
	(*w).shoupai[(*w).shoupaishu-1]=a;
	pai b;
	b=Mo1pai(A,x,B,y,&((*w).shoupaishu));
	(*w).shoupai[(*w).shoupaishu-1]=b;
	pai c;
	c=Mo1pai(A,x,B,y,&((*w).shoupaishu));
	(*w).shoupai[(*w).shoupaishu-1]=c;
	pai d;
	d=Mo1pai(A,x,B,y,&((*w).shoupaishu));
	(*w).shoupai[(*w).shoupaishu-1]=d;
	int m;
	if((*w).juese)printf("��Ҵ��ƶ���4����\n");
	else printf("���Դ��ƶ���4����\n");
	if((*w).juese)
	{
		printf("��ҵ�ǰ���ƣ�\n");
		for(m=0;m<=((*w).shoupaishu-1);m++)
		{
			printf("%d ",m);
			((*w).shoupai[m]).Kanpai();
		}
	}
	printf("�ƶѻ�ʣ%d����\n\n",*x);
}
void Panding(pai paidui[104],int*paiduishu,pai qipaidui[104],int*qipaishu)
{
	paidui[*paiduishu].Kanpai();
	qipaidui[*qipaishu]=paidui[*paiduishu];
	(*paiduishu)--;
	(*qipaishu)++;
}
pai Zhangba(wujiang*w,pai qipaidui[104],int*qipaishu)
{
	int x,y;
	pai p;
	for(;;)
	{
		int i,j;
		printf("������������������֮ǰ�ı�ţ��Կո�������Իس�����\n");
		scanf("%d",&x);
		scanf("%d",&y);
		if((x>=0) &&(x<(*w).shoupaishu) &&(y>=0) &&(y<(*w).shoupaishu-1))
		{
			switch((((*w).shoupai[x].huase)%2)+(((*w).shoupai[y].huase)%2))
			{
				case 0:p.yanse=0;break;
				case 2:p.yanse=1;break;
				case 1:p.yanse=2;break;
				default:printf("���ɰ���ì��������������\n");
			}
			qipaidui[*qipaishu]=(*w).shoupai[x];
			(*w).shoupai[x].leixing=-1;
			((*w).shoupaishu)--;
			(*qipaishu)++;
			qipaidui[*qipaishu]=(*w).shoupai[y];
			(*w).shoupai[y].leixing=-1;
			((*w).shoupaishu)--;
			(*qipaishu)++;printf("��������%d",*qipaishu);
			for(i=0;i<=(((*w).shoupaishu)+1);i++)
			{
				if((*w).shoupai[i].leixing==-1)
				{
					for(j=i+1;j<=(((*w).shoupaishu)+2);j++)
						(*w).shoupai[j-1]=(*w).shoupai[j];
					i--;
				}
			}
			printf("��Ұѣ�\n");
			qipaidui[(*qipaishu)-2].Kanpai();
			qipaidui[(*qipaishu)-1].Kanpai();
			printf("����һ��");
			switch(p.yanse)
			{
				case 0:printf("��ɫ");break;
				case 2:printf("��ɫ");break;
				case 1:printf("��ɫ");break;
				default:printf("��ɫ");break;
			}
			printf("�޵����ġ�ɱ��");
			p.dianshu=-1;
			p.leixing=101;
			return p;
			break;
		}
		printf("Ч����������\n");
	}
}
int Xuanpai(wujiang*w,int t)
{
	int x;
	if((*w).juese)
	{
		for(;;)
		{
			printf("��������������֮ǰ�ı�ţ��Իس�����\n�������������ƽ׶Σ������롰-1�����Իس�����\n");
			scanf("%d",&x);
			if((x>=-1 && x<((*w).shoupaishu)) ||((x==100) &&((*w).zhuangbei[0].leixing==305)))
			{
				return x;
				break;
			}
			printf("���ƴ���\n");
		}
	}
	else return t;
}
pai Panpai(wujiang*w1,int*sha,int y,pai qipaidui[104],int*qipaishu)
{
	pai p,q;
	p.leixing=0;
	q.leixing=-1;
	if(y==-1)return q;
	else
	{
		if(y==100)
		{
			if((*sha)> 0)
			{
				q=Zhangba(w1,qipaidui,qipaishu);
				printf("ʹ��\n");
				return q;
			}
			else
			{
				printf("��ǰ�غ�ʹ�á�ɱ���Ĵ������þ�����Ҳ����ʹ�á��ɰ���ì��Ч��\n");
				return p;
			}
		}
		switch((*w1).shoupai[y].leixing)
		{
			case 101:
				if(((*sha)> 0) ||((*w1).zhuangbei[0].leixing==301))
				{
					if(((*w1).zhuangbei[0].leixing==301))printf("�������������Ч��������\n");
					return(*w1).shoupai[y];
					break;
				}
				else
				{
					if((*w1).juese)printf("��ǰ�غ�ʹ�á�ɱ���Ĵ������þ����㲻��ʹ�á�ɱ��\n");
					return p;break;
				}
			case 102:
				if((*w1).juese)
					printf("��ǰ����Ҫ��Ӧ�κβ������㲻���������������\n");
				return p;break;
			case 103:
				if(((*w1).tili)<((*w1).tilishangxian))
				{
					return(*w1).shoupai[y];
					break;
				}
				else
				{
					if((*w1).juese)
						printf("�㲢δ���ˣ����ܶ��Լ�ʹ�á��ҡ�\n");
				}
				return p;break;
			case 210:
				if((*w1).juese)
					printf("��ǰ����Ҫ��Ӧ�κν��ң��㲻�������������и�ɻ���\n");
				return p;break;
			case 201:
			case 202:
			case 203:
			case 204:
			case 205:
			case 206:
			case 207:
			case 208:
			case 209:
			case 251:
			case 252:
			case 301:
			case 302:
			case 303:
			case 304:
			case 305:
			case 306:
			case 307:
			case 308:
			case 331:
			case 361:
			case 362:
			case 363:
			case 381:
			case 382:
			case 383:return(*w1).shoupai[y];break;
			default:printf("�������Ͳ�������\n");return p;break;
		}
	}
}
int Mubiao(pai p,wujiang*w1,wujiang*w2,int*sha)
{
	int x;
	switch(p.leixing)
	{
		case 101:
			if((*w1).juese)
			{
				printf("��ѡ��ɱ����Ŀ��\n����Ŀ��ǰ�ı�ţ��Իس�����\n0 ����1\n");
				scanf("%d",&x);
				if(x==0)
				{
					if((*w1).zhuangbei[0].changdu>=(*w1).juli[0])
					{
						(*sha)--;
						return((*w2).juese);
					}
					else
					{
						printf("�������Ȳ���\n");
						return-2;
					}
				}
				else
				{
					printf("Ŀ�����\n");
					return-2;
				}
			}
			else
			{
				if((*w1).zhuangbei[0].changdu>=(*w1).juli[0])
				{
					(*sha)--;
					return((*w2).juese);
				}
				else return-2;
			}
			break;
		case 103:return((*w1).juese);break;
		case 201:
			if((*w1).juese)
			{
				printf("��ѡ�񡾹��Ӳ��š���Ŀ��\n����Ŀ��ǰ�ı�ţ��Իس�����\n0 ����1\n");
				scanf("%d",&x);
				if(x==0)
				{
					if((*w2).shoupaishu ||(*w2).zhuangbeishu ||(*w2).pandingshu)return((*w2).juese);
					else
					{
						printf("Ŀ��û����\n");
						return-2;
					}
				}
				else
				{
					printf("Ŀ�����\n");
					return-2;
				}
			}
			else return((*w2).juese);
			break;
		case 202:
			if((*w1).juese)
			{
				printf("��ѡ��˳��ǣ�򡿵�Ŀ��\n����Ŀ��ǰ�ı�ţ��Իس�����\n0 ����1\n");
				scanf("%d",&x);
				if(x==0)
				{
					if(((*w2).shoupaishu ||(*w2).zhuangbeishu ||(*w2).pandingshu) &&((*w1).juli[0]<=1))return((*w2).juese);
					else
					{
						printf("Ŀ��û����\n");
						return-2;
					}
				}
				else
				{
					printf("Ŀ�����\n");
					return-2;
				}
			}
			else
			{
				if((*w1).juli[0]<=1)return((*w2).juese);
				else return-2;
			}
			break;
		case 203:
			return((*w1).juese);break;
		case 204:
			if((*w1).juese)
			{
				printf("��ѡ�񡾾�������Ŀ��\n����Ŀ��ǰ�ı�ţ��Իس�����\n0 ����1\n");
				scanf("%d",&x);
				if(x==0)return((*w2).juese);
				else
				{
					printf("Ŀ�����\n");
					return-2;
				}
			}
			else return((*w2).juese);
			break;
		case 205:
			int y;
			if((*w1).juese)
			{
				printf("��ѡ�񡾽赶ɱ�ˡ���Ŀ��\n����Ŀ��ǰ�ı�ţ��Իس�����\n0 ����1\n");
				scanf("%d",&x);
				if(x !=0)
				{
					printf("Ŀ�����\n");
					return-2;
				}
				else
				{
					if(((*w2).zhuangbei[0]).leixing<=300 ||((*w2).zhuangbei[0]).leixing>=331)
					{
						printf("Ŀ��װ������û������\n");
						return-2;
					}
					else
					{
						printf("��ѡ��ɱ����Ŀ��\n��ʾ����ɱ����Ŀ������ڡ��赶ɱ�ˡ���Ŀ��Ĺ�����Χ֮��\n����Ŀ��ǰ�ı�ţ��Իس�����\n0 ���\n");
						scanf("%d",&y);
						if(y !=0)
						{
							printf("Ŀ�����\n");
							return-2;
						}
						else
						{
							if(((*w2).zhuangbei[0].changdu)<(*w2).juli[0])
							{
								printf("�������벻��\n");
								return-2;
							}
							else
								return((*w2).juese);
						}
					}
				}
			}
			else
			{
				if(((*w2).zhuangbei[0]).leixing<=300 ||((*w2).zhuangbei[0]).leixing>=331)return-2;
				else
				{
					if(((*w2).zhuangbei[0].changdu)<(*w2).juli[0])return-2;
					else return((*w2).juese);
				}
			}
			break;
		case 206:
		case 207:return 99;break;
		case 208:
		case 209:return 100;break;
		case 251:
			if((*w1).juese)
			{
				printf("��ѡ���ֲ�˼�񡿵�Ŀ��\n����Ŀ��ǰ�ı�ţ��Իس�����\n0 ����1\n");
				scanf("%d",&x);
				if(x==0)
				{
					int i;
					for(i=0;i<=2;i++)
					{
						if((*w2).pandingpai[i].leixing==251)
							i=-1;
						break;
					}
					if(i==-1)
					{
						printf("Ŀ���ж����ﲻ��ͬʱ����������ͬ����ʱ�����\n");
						return-2;
					}
					else return((*w2).juese);
				}
				else
				{
					printf("Ŀ�����\n");
					return-2;
				}
			}
			else
			{
				int i;
				for(i=0;i<=2;i++)
				{
					if((*w2).pandingpai[i].leixing==251)
						i=-1;
					break;
				}
				if(i==-1)return-2;
				else return((*w2).juese);
			}
			break;
		case 252:
			int i;
			for(i=0;i<=2;i++)
			{
				if((*w1).pandingpai[i].leixing==252)
					i=-1;
				break;
			}
			if(i==-1)
			{
				if((*w1).juese)printf("Ŀ���ж����ﲻ��ͬʱ����������ͬ����ʱ�����\n");
				return-2;
			}
			else return((*w1).juese);
			break;
		case 301:
		case 302:
		case 303:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 331:
		case 361:
		case 362:
		case 363:
		case 381:
		case 382:
		case 383:return((*w1).juese);break;
		default:return-2;break;
	}
}
void Da1pai(wujiang*w1,wujiang*w2,pai qipaidui[104],int*qipaishu,int x)
{
	int i;
	if((x<0 || x>=((*w1).shoupaishu)) && x !=100)
		printf("��û����\n");
	else
	{
		switch(((*w1).shoupai)[x].leixing)
		{
			case 101:
			case 102:
			case 103:
			case 201:
			case 202:
			case 203:
			case 204:
			case 205:
			case 206:
			case 207:
			case 208:
			case 209:
			case 210:
				qipaidui[*qipaishu]=((*w1).shoupai)[x];
				for(i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
				((*w1).shoupaishu)--;
				(*qipaishu)++;
				break;
			case 251:
				for(i=1;i>=0;i--)(*w2).pandingpai[i+1]=(*w2).pandingpai[i];
				(*w2).pandingpai[0]=(*w1).shoupai[x];
				for(i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
				((*w1).shoupaishu)--;
				((*w2).pandingshu)++;
				break;
			case 252:
				for(i=1;i>=0;i--)(*w1).pandingpai[i+1]=(*w1).pandingpai[i];
				(*w1).pandingpai[0]=(*w1).shoupai[x];
				for(i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
				((*w1).shoupaishu)--;
				((*w1).pandingshu)++;
				break;
			case 301:
			case 302:
			case 303:
			case 304:
			case 305:
			case 306:
			case 307:
			case 308:
				if((*w1).zhuangbei[0].leixing==-1)((*w1).zhuangbeishu)++;
				else
				{
					qipaidui[*qipaishu]=((*w1).zhuangbei)[0];
					(*qipaishu)++;
				}
				(*w1).zhuangbei[0]=(*w1).shoupai[x];
				for(i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
				((*w1).shoupaishu)--;
				break;
			case 331:
				if((*w1).zhuangbei[1].leixing==-1)((*w1).zhuangbeishu)++;
				else
				{
					qipaidui[*qipaishu]=((*w1).zhuangbei)[1];
					(*qipaishu)++;
				}
				(*w1).zhuangbei[1]=(*w1).shoupai[x];
				for(i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
				((*w1).shoupaishu)--;
				break;
			case 361:
			case 362:
			case 363:
				if((*w1).zhuangbei[2].leixing==-1)((*w1).zhuangbeishu)++;
				else
				{
					qipaidui[*qipaishu]=((*w1).zhuangbei)[2];
					(*qipaishu)++;
				}
				(*w1).zhuangbei[2]=(*w1).shoupai[x];
				for(i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
				((*w1).shoupaishu)--;
				break;
			case 381:
			case 382:
			case 383:
				if((*w1).zhuangbei[3].leixing==-1)((*w1).zhuangbeishu)++;
				else
				{
					qipaidui[*qipaishu]=((*w1).zhuangbei)[3];
					(*qipaishu)++;
				}
				(*w1).zhuangbei[3]=(*w1).shoupai[x];
				for(i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
				((*w1).shoupaishu)--;
				break;
			default:break;
		}
	}
}
void Miaoshu(pai p,int juese,int duixiang)
{
	if(juese==0)printf("����");
	else if(juese==1)printf("���");
	else printf("��ɫ��������\n");
	if(p.leixing<=300 && p.leixing> 100)
	{
		switch(duixiang)
		{
			case-1:printf("���");break;
			case 0:printf("�Ե���ʹ��");break;
			case 1:printf("�����ʹ��");break;
			case 99:printf("ʹ��");break;
			case 100:printf("��������ʹ��");break;
			default:printf("�����������\n");break;
		}
	}
	else if(p.leixing>=301 && p.leixing<=400)
		printf("װ��");
	else printf("�������ô��\n");
	p.Kanpai();
	if(!juese &&(p.leixing==101 || p.leixing==204 || p.leixing==205 || p.leixing==207 || p.leixing==208 || p.leixing==209))printf("����Ӧ\n");
}
int Wuxie(pai*p,wujiang*w1,wujiang*w2,pai qipaidui[104],int*qipaishu,int a)
{
	int x;
	if((*w1).juese)
	{
		printf("�Ƿ�ʹ�á���и�ɻ�����Ӧ��\n\n");
		for(;;)
		{
			(*w1).Kanshoupai();
			printf("���Ҫʹ�á���и�ɻ�������������֮ǰ��ţ�����Ҫ�����롰-1�����Իس�����\n");
			scanf("%d",&x);
			if(x==-1)
			{
				for(x=0;x<((*w2).shoupaishu);x++)
				{
					if((*w2).shoupai[x].leixing==210)
					{
						printf("����ʹ��");
						((*w2).shoupai)[x].Kanpai();
						printf("������");
						(*p).Kanpai();
						(*p)=((*w2).shoupai)[x];
						qipaidui[*qipaishu]=((*w2).shoupai)[x];
						for(int i=x+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
						((*w2).shoupaishu)--;
						(*qipaishu)++;
						a++;
						break;
					}
				}
				break;
			}
			else if((*w1).shoupai[x].leixing==210)
			{
				printf("���ʹ��");
				((*w1).shoupai)[x].Kanpai();
				printf("������");
				(*p).Kanpai();
				(*p)=((*w1).shoupai)[x];
				qipaidui[*qipaishu]=((*w1).shoupai)[x];
				for(int i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
				((*w1).shoupaishu)--;
				(*qipaishu)++;
				(*w1).Kanshoupai();
				a++;
				break;
			}
			else printf("����и�ɻ�������\n");
		}
	}
	else
	{
		printf("�Ƿ�ʹ�á���и�ɻ�����Ӧ��\n");
		for(;;)
		{
			(*w2).Kanshoupai();
			printf("���Ҫʹ�á���и�ɻ�������������֮ǰ��ţ�����Ҫ�����롰-1�����Իس�����\n");
			scanf("%d",&x);
			if(x==-1)break;
			else if((*w2).shoupai[x].leixing==210)
			{
				printf("���ʹ��");
				((*w2).shoupai)[x].Kanpai();
				printf("������");
				(*p).Kanpai();
				(*p)=((*w2).shoupai)[x];
				qipaidui[*qipaishu]=((*w2).shoupai)[x];
				for(int i=x+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
				((*w2).shoupaishu)--;
				(*qipaishu)++;
				(*w2).Kanshoupai();
				a++;
				break;
			}
			else printf("����и�ɻ�������\n");
		}
	}
	return a;
}
int Qiutao(wujiang*w,pai qipaidui[104],int*qipaishu)
{
	int x;
	if((*w).juese)
	{
		for(;;)
		{
			printf("���Ҫʹ�á��ҡ�����������֮ǰ�ı�ţ�����Ҫ�����롰-1�����Իس�����\n");
			scanf("%d",&x);
			if(x==-1)
			{
				return-1;
				break;
			}
			else if((*w).shoupai[x].leixing==103)
			{
				qipaidui[*qipaishu]=((*w).shoupai)[x];
				for(int i=x+1;i<=((*w).shoupaishu);i++)((*w).shoupai)[i-1]=((*w).shoupai)[i];
				((*w).shoupaishu)--;
				(*qipaishu)++;
				return 0;
				break;
			}
			else printf("���ҡ�����\n");
		}
	}
	else
	{
		for(x=0;x<((*w).shoupaishu);x++)
		{
			if((*w).shoupai[x].leixing==103)
			{
				qipaidui[*qipaishu]=((*w).shoupai)[x];
				for(int i=x+1;i<=((*w).shoupaishu);i++)((*w).shoupai)[i-1]=((*w).shoupai)[i];
				((*w).shoupaishu)--;
				(*qipaishu)++;
				return 0;
				break;
			}
		}
		return-1;
	}
}
int Binsi(wujiang*w1,wujiang*w2,pai qipaidui[104],int*qipaishu)
{
	if(((*w2).tili)> 0)return 0;
	else
	{
		int i;
		if((*w1).juese)
		{
			for(;;)
			{
				printf("���Ա������Ƿ�ʹ�á��ҡ���\n");
				i=Qiutao(w1,qipaidui,qipaishu);
				if(i==0)((*w2).tili)++;
				if((i==-1) ||((*w2).tili> 0))break;
			}
			if((*w2).tili> 0)return 0;
			else
			{
				for(;;)
				{
					i=Qiutao(w2,qipaidui,qipaishu);
					if(i==0)((*w2).tili)++;
					if((i==-1) ||((*w2).tili> 0))break;
				}
				if((*w2).tili> 0)return 0;
				else return-1;
			}
		}
		else
		{
			for(;;)
			{
				printf("��ұ������Ƿ�ʹ�á��ҡ���\n");
				i=Qiutao(w2,qipaidui,qipaishu);
				if(i==0)((*w2).tili)++;
				if((i==-1) ||((*w2).tili> 0))break;
			}
			if((*w2).tili> 0)return 0;
			else return-1;
		}
	}
}
int Shan(wujiang*w1,wujiang*w2,pai paidui[104],int*paiduishu,pai qipaidui[104],int*qipaishu)
{
	int x;
	if((*w2).juese)
	{
		if(((*w2).zhuangbei[1].leixing==331) &&((*w1).zhuangbei[0].leixing !=303))
		{
			for(;;)
			{
				int m;
				printf("�Ƿ񷢶��������󡿷���Ч����\n0 ��\n1 ��\n������ѡ��֮ǰ�ı�ţ��Իس�����\n");
				scanf("%d",&m);
				if(m==1)
				{
					Panding(paidui,paiduishu,qipaidui,qipaishu);
					if(qipaidui[(*qipaishu)-1].huase%2)
					{
						printf("���������ж��ɹ�\n");
						return 0;
					}
				}
				else if(m==0)
				{
					printf("���������ж�ʧ��\n");
					break;
				}
			}
		}
		else if(((*w2).zhuangbei[1].leixing==331) &&((*w1).zhuangbei[0].leixing==303))printf("�����G����������������\n");
		for(;;)
		{
			printf("����������֮ǰ�ı�ţ��������롰-1������������������Իس�����\n");
			scanf("%d",&x);
			if(x==-1)
			{
				return-1;
				break;
			}
			else if((*w2).shoupai[x].leixing==102)
			{
				printf("��Ҵ��");
				((*w2).shoupai)[x].Kanpai();
				qipaidui[*qipaishu]=((*w2).shoupai)[x];
				for(int i=x+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
				((*w2).shoupaishu)--;
				(*qipaishu)++;
				return 0;
				break;
			}
			else printf("����������\n");
		}
	}
	else
	{
		if(((*w2).zhuangbei[1].leixing==331) &&((*w1).zhuangbei[0].leixing !=303))
		{
			Panding(paidui,paiduishu,qipaidui,qipaishu);
			if(qipaidui[(*qipaishu)-1].huase%2)
			{
				printf("���������ж��ɹ�\n");
				return 0;
			}
			else printf("���������ж�ʧ��\n");
		}
		else if(((*w2).zhuangbei[1].leixing==331) &&((*w1).zhuangbei[0].leixing==303))printf("�����G����������������\n");
		int i;
		for(x=0;x<((*w2).shoupaishu);x++)
		{
			if((*w2).shoupai[x].leixing==102)
			{
				printf("���Դ��");
				((*w2).shoupai)[x].Kanpai();
				qipaidui[*qipaishu]=((*w2).shoupai)[x];
				for(i=x+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
				((*w2).shoupaishu)--;
				(*qipaishu)++;
				return 0;
				break;
			}
		}
		return-1;
	}
}
int Sha(wujiang*w1,wujiang*w2,pai paidui[104],int*paiduishu,pai qipaidui[104],int*qipaishu)
{
	int x;
	if((*w2).juese)
	{
		printf("������������Ӧ��ɱ�������㽫�ܵ�1���˺�\n");
		x=Shan(w1,w2,paidui,paiduishu,qipaidui,qipaishu);
		if(x==-1)
		{
			int i;
			((*w2).tili)--;
			printf("���Զ�������1���˺�\n");
			i=Binsi(w1,w2,qipaidui,qipaishu);
			return i;
		}
		else if(x==0 &&((*w1).zhuangbei[0].leixing==306))
		{
			int i;
			if(((*w1).shoupaishu)>=2)
			{
				printf("����������\n");
				((*w1).shoupai)[0].Kanpai();
				qipaidui[*qipaishu]=((*w1).shoupai)[0];
				for(i=1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
				((*w1).shoupaishu)--;
				(*qipaishu)++;
				((*w1).shoupai)[0].Kanpai();
				qipaidui[*qipaishu]=((*w1).shoupai)[0];
				for(i=1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
				((*w1).shoupaishu)--;
				(*qipaishu)++;
				printf("��������ʯ��������Ч��ʹ��ɱ������˺�\n");
				((*w2).tili)--;
				i=Binsi(w1,w2,qipaidui,qipaishu);
				return i;
			}
			else return 0;
		}
		else if(x==0 &&((*w1).zhuangbei[0].leixing==304))
		{
			int i;
			for(x=0;x<((*w1).shoupaishu);x++)
			{
				if((*w1).shoupai[x].leixing==101)
				{
					printf("���Է������������µ���Ч�������ʹ��");
					((*w1).shoupai)[x].Kanpai();
					qipaidui[*qipaishu]=((*w1).shoupai)[x];
					for(i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
					((*w1).shoupaishu)--;
					(*qipaishu)++;
					i=Sha(w1,w2,paidui,paiduishu,qipaidui,qipaishu);
					return i;
					break;
				}
			}
			return 0;
		}
	}
	else
	{
		x=Shan(w1,w2,paidui,paiduishu,qipaidui,qipaishu);
		if(x==-1)
		{
			if((*w1).zhuangbei[0].leixing==308)
			{
				for(;;)
				{
					printf("�Ƿ񷢶������빭������Ч����\n0 ��\n1 ��\n");
					scanf("%d",&x);
					if(x==1)
					{
						if(((*w2).zhuangbei[2].leixing==-1) &&((*w2).zhuangbei[3].leixing==-1))
						{
							printf("����û������\n");
							break;
						}
						else
						{
							for(;;)
							{
								printf("0 ");
								((*w2).zhuangbei[2]).Kanpai();
								printf("1 ");
								((*w2).zhuangbei[3]).Kanpai();
								printf("��ѡ��Ҫ������������֮ǰ�ı�ţ��Իس�����\n");
								scanf("%d",&x);
								if((x==0) &&((*w2).zhuangbei[2].leixing !=-1))
								{
									printf("�������˵��Ե�");
									((*w2).zhuangbei)[2].Kanpai();
									qipaidui[*qipaishu]=((*w2).zhuangbei)[2];
									((*w2).zhuangbeishu)--;
									(*qipaishu)++;
									((*w2).zhuangbei)[2].leixing=-1;
									((*w2).juli[0])++;
									break;
								}
								else if((x==1) &&((*w2).zhuangbei[3].leixing !=-1))
								{
									printf("�������˵��Ե�");
									((*w2).zhuangbei)[3].Kanpai();
									qipaidui[*qipaishu]=((*w2).zhuangbei)[3];
									((*w2).zhuangbeishu)--;
									(*qipaishu)++;
									((*w2).zhuangbei)[3].leixing=-1;
									((*w1).juli[0])--;
									break;
								}
								else printf("����û������");
							}
							break;
						}
					}
					else if(x==0)break;
					else printf("�������\n");
				}
			}
			int i;
			((*w2).tili)--;
			printf("��ҶԵ������1���˺�\n");
			i=Binsi(w1,w2,qipaidui,qipaishu);
			return i;
		}
		else if(x==0 &&((*w1).zhuangbei[0].leixing==306))
		{
			for(;;)
			{
				printf("�Ƿ񷢶�����ʯ��������Ч����\n0 ��\n1 ��\n");
				scanf("%d",&x);
				if(x==1)
				{
					int i;
					if((*w1).shoupaishu+(*w1).zhuangbeishu<=2)
					{
						printf("Ч����������\n");
						break;
					}
					else
					{
						printf("��ֱ�����������\n");
						for(i=0;i<=2;i++)
						{
							for(;;)
							{
								printf("��ѡ������\n0 ����\n1 װ��\n");
								scanf("%d",&x);
								if(x==0 &&((*w1).shoupaishu==0))printf("�������ƴ���\n");
								else if(x==1 &&((*w1).zhuangbeishu==1))printf("����װ������\n");
								else if(x>=0 && x<=1)break;
								else printf("�������\n");
							}
							if(x==0)
							{
								for(;;)
								{
									(*w1).Kanshoupai();
									printf("��������������֮ǰ�ı�ţ��Իس�����\n");
									scanf("%d",&x);
									if(x>=0 && x<((*w1).shoupaishu))break;
									else printf("�������ƴ���\n");
								}
								printf("��������");
								((*w1).shoupai)[x].Kanpai();
								qipaidui[*qipaishu]=((*w1).shoupai)[x];
								for(i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
								((*w1).shoupaishu)--;
								(*qipaishu)++;
							}
							else
							{
								for(;;)
								{
									(*w1).Kanzhuangbei();
									printf("������װ��֮ǰ�ı�ţ��Իس�������\n");
									scanf("%d",&x);
									if((((*w1).zhuangbei[x]).leixing !=-1) &&(x>=0) &&(x<=3))
									{
										printf("��������");
										((*w1).zhuangbei)[x].Kanpai();
										qipaidui[*qipaishu]=((*w1).zhuangbei)[x];
										((*w1).zhuangbeishu)--;
										(*qipaishu)++;
										((*w1).zhuangbei)[x].leixing=-1;
										break;
									}
									else printf("����װ������\n");
								}
							}
						}
					}
					printf("��ҷ�������ʯ��������Ч��ʹ��ɱ������˺�\n");
					((*w2).tili)--;
					i=Binsi(w1,w2,qipaidui,qipaishu);
					return i;
					break;
				}
				else if(x==0)break;
				else printf("�������\n");
			}
		}
		else if(x==0 &&((*w1).zhuangbei[0].leixing==304))
		{
			for(;;)
			{
				printf("�Ƿ񷢶����������µ�������Ч����\n0 ��\n1 ��\n");
				scanf("%d",&x);
				if(x==1)
				{
					for(;;)
					{
						printf("��Ե���ʹ��һ�š�ɱ��\n����������֮ǰ�ı�ţ��������롰-1����������ɱ�����Իس�����\n");
						(*w1).Kanshoupai();
						scanf("%d",&x);
						if(x==-1)
						{
							return 0;
							break;
						}
						else if((*w1).shoupai[x].leixing==101)
						{
							int i;
							printf("��ҶԵ���ʹ��");
							((*w1).shoupai)[x].Kanpai();
							qipaidui[*qipaishu]=((*w1).shoupai)[x];
							for(i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
							((*w1).shoupaishu)--;
							(*qipaishu)++;
							i=Sha(w1,w2,paidui,paiduishu,qipaidui,qipaishu);
							return i;
							break;
						}
						else printf("��ɱ������\n");
					}
				}
				else if(x==0)
				{
					return 0;
					break;
				}
				else printf("�������\n");
			}
		}
		else return 0;
	}
	return 0;
}
void Tao(wujiang*w1)
{
	((*w1).tili)++;
	if((*w1).juese)printf("���");
	else printf("����");
	printf("�ָ���1������\n");
	if(((*w1).tili)>((*w1).tilishangxian))printf("���ҡ�����\n");
}
void Chai(wujiang*w1,wujiang*w2,pai qipaidui[104],int*qipaishu)
{
	int i,x,y;
	if((*w1).juese)
	{
		for(;;)
		{
			if((*w2).shoupaishu+(*w2).zhuangbeishu+(*w2).pandingshu==0)
			{
				printf("�Է��ճ�\n");
				break;
			}
			else
			{
				printf("��ѡ��������������ѡ��֮ǰ�ı�ţ��Իس�����\n0 ����\n1 װ����\n2 �ж���\n");
				scanf("%d",&x);
				if(x==0 &&((*w2).shoupaishu==0))printf("������û�пɲ����\n");
				else if(x==1 &&((*w2).zhuangbeishu==0))printf("������û�пɲ����\n");
				else if(x==2 &&((*w2).pandingshu==0))printf("������û�пɲ����\n");
				else if(x>=0 && x<=2)break;
				else printf("�����Ӳ��š�����\n");
			}
		}
		switch(x)
		{
			case 0:
				srand((unsigned)time(NULL));
				y=rand()%((*w2).shoupaishu);
				printf("�������˵��Ե�");
				((*w2).shoupai)[y].Kanpai();
				qipaidui[*qipaishu]=((*w2).shoupai)[y];
				for(i=y+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
				((*w2).shoupaishu)--;
				(*qipaishu)++;
				break;
			case 1:
				for(;;)
				{
					(*w2).Kanzhuangbei();
					printf("������װ��֮ǰ�ı�ţ��Իس�������\n");
					scanf("%d",&y);
					if((((*w2).zhuangbei[y]).leixing !=-1) &&(y>=0) &&(y<=3))
					{
						printf("�������˵��Ե�");
						((*w2).zhuangbei)[y].Kanpai();
						qipaidui[*qipaishu]=((*w2).zhuangbei)[y];
						((*w2).zhuangbeishu)--;
						(*qipaishu)++;
						((*w2).zhuangbei)[y].leixing=-1;
						if(!y)((*w2).zhuangbei)[y].changdu=1;
						else if(y==2)((*w2).juli[0])++;
						else if(y==3)((*w1).juli[0])--;
						break;
					}
					else printf("�����Ӳ��š�����\n");
				}
				break;
			case 2:
				for(;;)
				{
					(*w2).Kanpandingpai();
					printf("�������ж���֮ǰ�ı�ţ��Իس�������\n");
					scanf("%d",&y);
					if((*w2).pandingpai[y].leixing !=-1)
					{
						printf("�������˵��Ե�");
						((*w2).pandingpai)[y].Kanpai();
						qipaidui[*qipaishu]=((*w2).pandingpai)[y];
						((*w2).pandingshu)--;
						(*qipaishu)++;
						((*w2).pandingpai)[y].leixing=-1;
						break;
					}
					else printf("��������һ�ſ���\n");
				}
				break;
			default:break;
		}
	}
	else
	{
		if((*w2).zhuangbeishu)
		{
			if((*w2).zhuangbei[1].leixing !=-1)
			{
				printf("������������ҵ�");
				((*w2).zhuangbei)[1].Kanpai();
				qipaidui[*qipaishu]=((*w2).zhuangbei)[1];
				((*w2).zhuangbeishu)--;
				(*qipaishu)++;
				((*w2).zhuangbei)[1].leixing=-1;
			}
			else if((*w2).zhuangbei[3].leixing !=-1)
			{
				printf("������������ҵ�");
				((*w2).zhuangbei)[3].Kanpai();
				qipaidui[*qipaishu]=((*w2).zhuangbei)[3];
				((*w2).zhuangbeishu)--;
				(*qipaishu)++;
				((*w2).zhuangbei)[3].leixing=-1;
				((*w1).juli[0])--;
			}
			else if((*w2).zhuangbei[0].leixing !=-1)
			{
				printf("������������ҵ�");
				((*w2).zhuangbei)[0].Kanpai();
				qipaidui[*qipaishu]=((*w2).zhuangbei)[0];
				((*w2).zhuangbeishu)--;
				(*qipaishu)++;
				((*w2).zhuangbei)[0].leixing=-1;
				((*w2).zhuangbei)[0].changdu=1;
			}
			else
			{
				printf("������������ҵ�");
				((*w2).zhuangbei)[2].Kanpai();
				qipaidui[*qipaishu]=((*w2).zhuangbei)[2];
				((*w2).zhuangbeishu)--;
				(*qipaishu)++;
				((*w2).zhuangbei)[2].leixing=-1;
				((*w2).juli[0])++;
			}
		}
		else
		{
			srand((unsigned)time(NULL));
			y=rand()%((*w2).shoupaishu);
			printf("������������ҵ�����");
			((*w2).shoupai)[y].Kanpai();
			qipaidui[*qipaishu]=((*w2).shoupai)[y];
			for(i=y+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
			((*w2).shoupaishu)--;
			(*qipaishu)++;
		}
	}
}
void Qian(wujiang*w1,wujiang*w2)
{
	int i,x,y;
	if((*w1).juese)
	{
		for(;;)
		{
			if((*w2).shoupaishu+(*w2).zhuangbeishu+(*w2).pandingshu==0)
			{
				printf("�Է��ճ�\n");
				break;
			}
			else
			{
				printf("��ѡ����ǣ����������ѡ��֮ǰ�ı�ţ��Իس�����\n0 ����\n1 װ����\n2 �ж���\n");
				scanf("%d",&x);
				if(x==0 &&((*w2).shoupaishu==0))printf("������û�п�ǣ����\n");
				else if(x==1 &&((*w2).zhuangbeishu==0))printf("������û�п�ǣ����\n");
				else if(x==2 &&((*w2).pandingshu==0))printf("������û�п�ǣ����\n");
				else if(x>=0 && x<=2)break;
				else printf("��˳��ǣ�򡿴���\n");
			}
		}
		switch(x)
		{
			case 0:
				srand((unsigned)time(NULL));
				y=rand()%((*w2).shoupaishu);
				printf("��ǣ���˵��Ե�");
				((*w2).shoupai)[y].Kanpai();
				(*w1).shoupai[(*w1).shoupaishu]=((*w2).shoupai)[y];
				for(i=y+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
				((*w2).shoupaishu)--;
				((*w1).shoupaishu)++;
				break;
			case 1:
				for(;;)
				{
					(*w2).Kanzhuangbei();
					printf("������װ��֮ǰ�ı�ţ��Իس�������\n");
					scanf("%d",&y);
					if((((*w2).zhuangbei[y]).leixing !=-1) &&(y>=0) &&(y<=3))
					{
						printf("��ǣ���˵��Ե�");
						((*w2).zhuangbei)[y].Kanpai();
						(*w1).shoupai[(*w1).shoupaishu]=((*w2).zhuangbei)[y];
						((*w2).zhuangbeishu)--;
						((*w1).shoupaishu)++;
						((*w2).zhuangbei)[y].leixing=-1;
						if(!y)((*w2).zhuangbei[y]).changdu=1;
						else if(y==2)((*w2).juli[0])++;
						else if(y==3)((*w1).juli[0])--;
						break;
					}
				}
				break;
			case 2:
				for(;;)
				{
					(*w2).Kanpandingpai();
					printf("�������ж���֮ǰ�ı�ţ��Իس�������\n");
					scanf("%d",&y);
					if((*w2).pandingpai[y].leixing !=-1)
					{
						printf("��ǣ���˵��Ե�");
						((*w2).pandingpai)[y].Kanpai();
						(*w1).shoupai[(*w1).shoupaishu]=((*w2).pandingpai)[y];
						((*w2).pandingshu)--;
						((*w1).shoupaishu)++;
						((*w2).pandingpai)[y].leixing=-1;
						break;
					}
				}
				break;
			default:break;
		}
	}
	else
	{
		if((*w2).zhuangbeishu)
		{
			if((*w2).zhuangbei[1].leixing !=-1)
			{
				printf("����ǣ������ҵ�");
				((*w2).zhuangbei)[1].Kanpai();
				(*w1).shoupai[(*w1).shoupaishu]=((*w2).zhuangbei)[1];
				((*w2).zhuangbeishu)--;
				((*w1).shoupaishu)++;
				((*w2).zhuangbei)[1].leixing=-1;
			}
			else if((*w2).zhuangbei[3].leixing !=-1)
			{
				printf("����ǣ������ҵ�");
				((*w2).zhuangbei)[3].Kanpai();
				(*w1).shoupai[(*w1).shoupaishu]=((*w2).zhuangbei)[3];
				((*w2).zhuangbeishu)--;
				((*w1).shoupaishu)++;
				((*w2).zhuangbei)[3].leixing=-1;
				((*w1).juli[0])--;
			}
			else if((*w2).zhuangbei[0].leixing !=-1)
			{
				printf("����ǣ������ҵ�");
				((*w2).zhuangbei)[0].Kanpai();
				(*w1).shoupai[(*w1).shoupaishu]=((*w2).zhuangbei)[0];
				((*w2).zhuangbeishu)--;
				((*w1).shoupaishu)++;
				((*w2).zhuangbei)[0].leixing=-1;
				((*w2).zhuangbei)[0].changdu=1;
			}
			else
			{
				printf("����ǣ������ҵ�");
				((*w2).zhuangbei)[2].Kanpai();
				(*w1).shoupai[(*w1).shoupaishu]=((*w2).zhuangbei)[2];
				((*w2).zhuangbeishu)--;
				((*w1).shoupaishu)++;
				((*w2).zhuangbei)[2].leixing=-1;
				((*w2).juli[0])--;
			}
		}
		else
		{
			srand((unsigned)time(NULL));
			y=rand()%((*w2).shoupaishu);
			printf("����ǣ������ҵ�����");
			((*w2).shoupai)[y].Kanpai();
			(*w1).shoupai[(*w1).shoupaishu]=((*w2).shoupai)[y];
			for(i=y+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
			((*w2).shoupaishu)--;
			((*w1).shoupaishu)++;
		}
	}
}
void Wuzhong(wujiang*w1,pai A[104],int*x,pai B[104],int*y)
{
	Mopai(&((*w1).shoupaishu),(*w1).shoupai,A,x,B,y,(*w1).juese);
}
int Juedou(wujiang*w1,wujiang*w2,pai qipaidui[104],int*qipaishu)
{
	int i,j,x;
	if((*w1).juese)
	{
		for(;;)
		{
			j=0;
			for(x=0;x<((*w2).shoupaishu);x++)
			{
				if((*w2).shoupai[x].leixing==101)
				{
					printf("���Դ��");
					((*w2).shoupai)[x].Kanpai();
					qipaidui[*qipaishu]=((*w2).shoupai)[x];
					for(int i=x+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
					((*w2).shoupaishu)--;
					(*qipaishu)++;
					j=1;
					break;
				}
			}
			if(!j)
			{
				printf("��ҶԵ������1���˺�\n");
				((*w2).tili)--;
				i=Binsi(w1,w2,qipaidui,qipaishu);
				return i;
				break;
			}
			j=0;
			for(;;)
			{
				printf("����һ�š�ɱ����Ӧ���������������㽫�ܵ�1���˺�\n����������֮ǰ�ı�ţ��������롰-1����������ɱ�����Իس�����\n");
				if(((*w1).zhuangbei[0].leixing==305))printf("����뷢�����ɰ���ì��Ч���������롰100�����Իس�����\n");
				(*w1).Kanshoupai();
				scanf("%d",&x);
				if(x==-1)
				{
					int i;
					((*w1).tili)--;
					printf("���Զ�������1���˺�\n");
					i=Binsi(w2,w1,qipaidui,qipaishu);
					return i;
					break;
				}
				else if(((*w1).zhuangbei[0].leixing==305) && x==100)
				{
					pai p=Zhangba(w1,qipaidui,qipaishu);
					p.paifu=-1;
					printf("���\n");
					j=1;
					break;
				}
				else if((*w1).shoupai[x].leixing==101)
				{
					printf("��Ҵ��");
					((*w1).shoupai)[x].Kanpai();
					qipaidui[*qipaishu]=((*w1).shoupai)[x];
					for(i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
					((*w1).shoupaishu)--;
					(*qipaishu)++;
					j=1;
					break;
				}
				else printf("��ɱ������\n");
			}
		}
	}
	else
	{
		for(;;)
		{
			j=0;
			for(;;)
			{
				printf("����һ�š�ɱ����Ӧ���������������㽫�ܵ�1���˺�\n����������֮ǰ�ı�ţ��������롰-1����������ɱ�����Իس�����\n");
				if(((*w1).zhuangbei[0].leixing==305))printf("����뷢�����ɰ���ì��Ч���������롰100�����Իس�����\n");
				(*w2).Kanshoupai();
				scanf("%d",&x);
				if(x==-1)
				{
					int i;
					((*w2).tili)--;
					printf("���Զ�������1���˺�\n");
					i=Binsi(w1,w2,qipaidui,qipaishu);
					return i;
					break;
				}
				else if(((*w2).zhuangbei[0].leixing==305) && x==100)
				{
					pai p=Zhangba(w2,qipaidui,qipaishu);
					p.paifu=-1;
					printf("���\n");
					j=1;
					break;
				}
				else if((*w2).shoupai[x].leixing==101)
				{
					printf("��Ҵ��");
					((*w2).shoupai)[x].Kanpai();
					qipaidui[*qipaishu]=((*w2).shoupai)[x];
					for(i=x+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
					((*w2).shoupaishu)--;
					(*qipaishu)++;
					j=1;
					break;
				}
				else printf("��ɱ������\n");
			}
			j=0;
			for(x=0;x<((*w1).shoupaishu);x++)
			{
				if((*w1).shoupai[x].leixing==101)
				{
					printf("���Դ��");
					((*w1).shoupai)[x].Kanpai();
					qipaidui[*qipaishu]=((*w1).shoupai)[x];
					for(int i=x+1;i<=((*w1).shoupaishu);i++)((*w1).shoupai)[i-1]=((*w1).shoupai)[i];
					((*w1).shoupaishu)--;
					(*qipaishu)++;
					j=1;
					break;
				}
			}
			if(!j)
			{
				printf("��ҶԵ������1���˺�\n");
				((*w2).tili)--;
				i=Binsi(w2,w1,qipaidui,qipaishu);
				return i;
				break;
			}
		}
	}
}
int Jiedao(wujiang*w1,wujiang*w2,pai paidui[104],int*paiduishu,pai qipaidui[104],int*qipaishu)
{
	int i,j=0,x;
	if((*w1).juese)
	{
		for(x=0;x<((*w2).shoupaishu);x++)
		{
			if((*w2).shoupai[x].leixing==101)
			{
				printf("���Զ����ʹ��");
				((*w2).shoupai)[x].Kanpai();
				qipaidui[*qipaishu]=((*w2).shoupai)[x];
				for(int i=x+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
				((*w2).shoupaishu)--;
				(*qipaishu)++;
				j=1;
				break;
			}
		}
		if(j)
		{
			i=Sha(w2,w1,paidui,paiduishu,qipaidui,qipaishu);
			return i;
			printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w1).tili,(*w1).tilishangxian,(*w2).tili,(*w2).tilishangxian);
		}
		else
		{
			printf("���Է���ʹ�á�ɱ������һ�õ��Ե�����");
			(*w2).zhuangbei[0].Kanpai();
			(*w1).shoupai[(*w1).shoupaishu]=((*w2).zhuangbei)[0];
			((*w2).zhuangbeishu)--;
			((*w1).shoupaishu)++;
			((*w2).zhuangbei)[0].leixing=-1;
			((*w2).zhuangbei)[0].changdu=1;
			(*w1).Kanshoupai();
			return 0;
		}
	}
	else
	{
		for(;;)
		{
			printf("��Ե���ʹ��һ�š�ɱ����������Խ�����������\n����������֮ǰ�ı�ţ��������롰-1����������ɱ�����Իس�����\n");
			if(((*w2).zhuangbei[0].leixing==305))printf("����뷢�����ɰ���ì��Ч���������롰100�����Իس�����\n");
			(*w2).Kanshoupai();
			scanf("%d",&x);
			if(x==-1)break;
			else if(((*w2).zhuangbei[0].leixing==305) && x==100)
			{
				pai p=Zhangba(w2,qipaidui,qipaishu);
				p.paifu=-1;
				printf("ʹ��\n");
				j=1;
				break;
			}
			else if((*w2).shoupai[x].leixing==101)
			{
				printf("��ҶԵ���ʹ��");
				((*w2).shoupai)[x].Kanpai();
				qipaidui[*qipaishu]=((*w2).shoupai)[x];
				for(i=x+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
				((*w2).shoupaishu)--;
				(*qipaishu)++;
				j=1;
				break;
			}
			else printf("��ɱ������\n");
		}
		if(j)
		{
			i=Sha(w2,w1,paidui,paiduishu,qipaidui,qipaishu);
			return i;
			printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w2).tili,(*w2).tilishangxian,(*w1).tili,(*w1).tilishangxian);
		}
		else
		{
			printf("��ҷ���ʹ�á�ɱ�������Ի����ҵ�����");
			((*w2).zhuangbei)[0].Kanpai();
			(*w1).shoupai[(*w1).shoupaishu]=((*w2).zhuangbei)[0];
			((*w2).zhuangbeishu)--;
			((*w1).shoupaishu)++;
			((*w2).zhuangbei)[0].leixing=-1;
			((*w2).zhuangbei)[0].changdu=1;
			return 0;
		}
	}
}
void Taoyuan(wujiang*w)
{
	if((*w).tili<(*w).tilishangxian)
	{
		((*w).tili)++;
		if((*w).juese)printf("���");
		else printf("����");
		printf("�ָ�1������\n");
	}
}
void Kaipai(pai paidui[104],int*paiduishu,int renshu,pai wugu[10])
{
	int i;
	printf("��ȷ�ǿ��ƣ�\n");
	for(i=1;i<=renshu;i++)
	{
		wugu[i-1]=paidui[104-(*paiduishu)];
		(*paiduishu)--;
		printf("%d ",i-1);
		wugu[i-1].Kanpai();
	}
}
void Qupai(pai wugu[10],wujiang*w)
{
	int i,x;
	printf("��ȷ�ǿ��ƣ�\n");
	for(i=0;(wugu[i].leixing) !=-1;i++)
	{
		printf("%d ",i);
		wugu[i].Kanpai();
	}
	if((*w).juese)
	{
		for(;;)
		{
			printf("��ѡ������Ҫ�Ŀ��ƣ����뿨��֮ǰ�ı�ţ��Իس�����\n");
			scanf("%d",&x);
			if(wugu[x].leixing !=-1)
			{
				printf("���ѡ��");
				wugu[x].Kanpai();
				(*w).shoupai[(*w).shoupaishu]=wugu[x];
				((*w).shoupaishu)++;
				for(i=x+1;i<=9;i++)wugu[i-1]=wugu[i];
				wugu[9].leixing=-1;
				break;
			}
			printf("ѡ�����");
		}
	}
	else
	{
		printf("����ѡ��");
		wugu[0].Kanpai();
		(*w).shoupai[(*w).shoupaishu]=wugu[0];
		((*w).shoupaishu)++;
		for(i=1;i<=9;i++)wugu[i-1]=wugu[i];
		wugu[9].leixing=-1;
	}
}
void Rengpai(pai wugu[10],pai qipaidui[104],int*qipaishu)
{
	int i;
	for(i=0;wugu[i].leixing !=-1;i++)
	{
		qipaidui[*qipaishu]=wugu[i];
		(*qipaishu)++;
		wugu[i].leixing=-1;
	}
}
int Nanman(wujiang*w1,wujiang*w2,pai qipaidui[104],int*qipaishu)
{
	int i,x;
	if((*w1).juese)
	{
		for(x=0;x<((*w2).shoupaishu);x++)
		{
			if((*w2).shoupai[x].leixing==101)
			{
				printf("���Դ��");
				((*w2).shoupai)[x].Kanpai();
				qipaidui[*qipaishu]=((*w2).shoupai)[x];
				for(int i=x+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
				((*w2).shoupaishu)--;
				(*qipaishu)++;
				return 0;
				break;
			}
		}
		printf("��ҶԵ������1���˺�\n");
		((*w2).tili)--;
		i=Binsi(w1,w2,qipaidui,qipaishu);
		return i;
	}
	else
	{
		for(;;)
		{
			printf("����һ�š�ɱ����Ӧ���������֡��������㽫�ܵ�1���˺�\n����������֮ǰ�ı�ţ��������롰-1����������ɱ�����Իس�����\n");
			if(((*w2).zhuangbei[0].leixing==305))printf("����뷢�����ɰ���ì��Ч���������롰100�����Իس�����\n");
			(*w2).Kanshoupai();
			scanf("%d",&x);
			if(x==-1)
			{
				int i;
				((*w2).tili)--;
				printf("���Զ�������1���˺�\n");
				i=Binsi(w1,w2,qipaidui,qipaishu);
				return i;
				break;
			}
			else if(((*w2).zhuangbei[0].leixing==305) && x==100)
			{
				pai p=Zhangba(w2,qipaidui,qipaishu);
				p.paifu=-1;
				printf("ʹ��\n");
				return 0;
				break;
			}
			else if((*w2).shoupai[x].leixing==101)
			{
				printf("��Ҵ��");
				((*w2).shoupai)[x].Kanpai();
				qipaidui[*qipaishu]=((*w2).shoupai)[x];
				for(i=x+1;i<=((*w2).shoupaishu);i++)((*w2).shoupai)[i-1]=((*w2).shoupai)[i];
				((*w2).shoupaishu)--;
				(*qipaishu)++;
				return 0;
				break;
			}
			else printf("��ɱ������\n");
		}
	}
}
int Wanjian(wujiang*w1,wujiang*w2,pai paidui[104],int*paiduishu,pai qipaidui[104],int*qipaishu)
{
	int i;
	i=Shan(w1,w2,paidui,paiduishu,qipaidui,qipaishu);
	if(i==-1)
	{
		i=Binsi(w1,w2,qipaidui,qipaishu);
		return i;
	}
	else return 0;
}
int Chupai(pai paidui[104],pai qipaidui[104],int*paiduishu,int*qipaishu,wujiang*w1,wujiang*w2,pai yuanshipaidui[2][4][13])
{
	pai p1;
	int sha=1;int y=-1,i,t=((*w1).shoupaishu)-1;
	for(;;t--)
	{
 
		if((*w1).juese)
		{
			printf("\n���Ե�ǰ��������%d\n",((*w2).shoupaishu));
			(*w2).Kanzhuangbei();
			(*w1).Kanshoupai();
			(*w1).Kanzhuangbei();
		}
		int j=0;
		if((*w1).juese &&((*w1).zhuangbei[0].leixing==305))printf("����뷢�����ɰ���ì��Ч���������롰100�����Իس�����\n");
		y=Xuanpai(w1,t);
		p1=Panpai(w1,&sha,y,qipaidui,qipaishu);
		if((p1).leixing==-1)break;
		else if((p1).leixing==0)continue;
		else
		{
			int duixiang;
			duixiang=Mubiao(p1,w1,w2,&sha);
			if(duixiang==-2)continue;
			else
			{
				Da1pai(w1,w2,qipaidui,qipaishu,y);
				Miaoshu(p1,((*w1).juese),duixiang);
				if(!((*w1).juese))
				{
					printf("\n���Ե�ǰ��������%d\n",((*w1).shoupaishu));
					(*w1).Kanzhuangbei();
					(*w2).Kanshoupai();
					(*w2).Kanzhuangbei();
				}
				switch(p1.leixing)
				{
					case 101:
						i=Sha(w1,w2,paidui,paiduishu,qipaidui,qipaishu);
						if(i==-1) { return-1;break;}
						if((*w1).juese)printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w1).tili,(*w1).tilishangxian,(*w2).tili,(*w2).tilishangxian);
						else printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w2).tili,(*w2).tilishangxian,(*w1).tili,(*w1).tilishangxian);
						break;
					case 103:
						Tao(w1);
						break;
					case 201:
						for(;;)
						{
							i=Wuxie(&p1,w1,w2,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
						}
						if(!(j%2))Chai(w1,w2,qipaidui,qipaishu);
						else;
						if((*w1).juese)(*w1).Kanshoupai();
						break;
					case 202:
						for(;;)
						{
							i=Wuxie(&p1,w1,w2,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
						}
						if(!(j%2))Qian(w1,w2);
						else;
						if((*w1).juese)(*w1).Kanshoupai();
						break;
					case 203:
						for(;;)
						{
							i=Wuxie(&p1,w1,w2,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
						}
						if(!(j%2))Wuzhong(w1,paidui,paiduishu,qipaidui,qipaishu);
						else;
						break;
					case 204:
						for(;;)
						{
							i=Wuxie(&p1,w1,w2,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
						}
						if(!(j%2))
						{
							i=Juedou(w1,w2,qipaidui,qipaishu);
							if(i==-1)return-1;
							if((*w1).juese)printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w1).tili,(*w1).tilishangxian,(*w2).tili,(*w2).tilishangxian);
							else printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w2).tili,(*w2).tilishangxian,(*w1).tili,(*w1).tilishangxian);
						}
						break;
					case 205:
						for(;;)
						{
							i=Wuxie(&p1,w1,w2,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
						}
						if(!(j%2))
						{
							i=Jiedao(w1,w2,paidui,paiduishu,qipaidui,qipaishu);
							if(i==-1)return-1;
							if((*w1).juese)printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w1).tili,(*w1).tilishangxian,(*w2).tili,(*w2).tilishangxian);
							else printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w2).tili,(*w2).tilishangxian,(*w1).tili,(*w1).tilishangxian);
						}
						break;
					case 206:
						for(;;)
						{
							i=Wuxie(&p1,w1,w2,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
						}
						if(!(j%2))Taoyuan(w1);
						j=0;
						for(;;)
						{
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
						}
						if(!(j%2))Taoyuan(w2);
						break;
					case 207:
						pai wugu[10];
						for(i=1;i<=10;i++)wugu[i-1].leixing=-1;
						Kaipai(paidui,paiduishu,2,wugu);
						for(;;)
						{
							i=Wuxie(&p1,w1,w2,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
						}
						if(!(j%2))Qupai(wugu,w1);
						for(;;)
						{
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
						}
						if(!(j%2))Qupai(wugu,w2);
						Rengpai(wugu,qipaidui,qipaishu);printf("������:%d\n",*qipaishu);
						break;
					case 208:
						for(;;)
						{
							i=Wuxie(&p1,w1,w2,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
						}
						if(!(j%2))
						{
							i=Nanman(w1,w2,qipaidui,qipaishu);
							if(i==-1)return-1;
							if((*w1).juese)printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w1).tili,(*w1).tilishangxian,(*w2).tili,(*w2).tilishangxian);
							else printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w2).tili,(*w2).tilishangxian,(*w1).tili,(*w1).tilishangxian);
						}
						break;
					case 209:
						for(;;)
						{
							i=Wuxie(&p1,w1,w2,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
							i=Wuxie(&p1,w2,w1,qipaidui,qipaishu,0);
							if(!i)break;
							j++;
						}
						if(!(j%2))
						{
							i=Wanjian(w1,w2,paidui,paiduishu,qipaidui,qipaishu);
							if(i==-1)return-1;
							if((*w1).juese)printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w1).tili,(*w1).tilishangxian,(*w2).tili,(*w2).tilishangxian);
							else printf("��ҵ�ǰ����ֵ��%d/%d\n���Ե�ǰ����ֵ��%d/%d\n",(*w2).tili,(*w2).tilishangxian,(*w1).tili,(*w1).tilishangxian);
						}
						break;
					case 361:
					case 362:
					case 363:
						((*w1).juli[0])--;break;
					case 381:
					case 382:
					case 383:
						((*w2).juli[0])++;break;
					default:break;
				}
				printf("\n");
			}
		}
	}
	return 0;
}
void Qipai(pai shoupai[20],int*shoupaishu,pai qipaidui[104],int*qipaishu,int juese,int*shoupaishangxian)
{
	int x;
	if((*shoupaishu)>(*shoupaishangxian))
	{
		if(juese !=1 && juese !=0)printf("��ݲ�������");
		int q=(*shoupaishu)-(*shoupaishangxian);
		int i,j;
		for(j=1;j<=q;j++)
		{
			for(;;)
			{
				if(juese)
				{
					printf("��������������֮ǰ�ı�ţ��Իس�����\nע��һ��ֻ����һ����\n");
					printf("��������%d\n",*shoupaishu);
					scanf("%d",&x);
					if(x>=0 && x<(*shoupaishu))break;
					else printf("���ƴ���\n");
				}
				else
				{
					srand((unsigned)time(NULL));
					x=rand()%(*shoupaishu);
					break;
				}
			}
			qipaidui[*qipaishu]=shoupai[x];
			for(i=x+1;i<=(*shoupaishu);i++)shoupai[i-1]=shoupai[i];
			(*shoupaishu)--;
			if(juese)printf("���ƽ׶��������");
			else printf("���ƽ׶ε�������");
			qipaidui[*qipaishu].Kanpai();
			(*qipaishu)++;
			int m;
			if(juese)
			{
				printf("��ҵ�ǰ���ƣ�\n");
				for(m=0;m<=(*shoupaishu-1);m++)
				{
					printf("%d ",m);
					(shoupai[m]).Kanpai();
				}
			} printf("���ƶѣ�%d\n",*qipaishu);
		}
	}
}
int Huihe(pai A[104],pai B[104],int*x,int*y,pai yuanshipaidui[2][4][13],wujiang*w1,wujiang*w2)
{
	printf("\n�غϿ�ʼ�׶Ρ���\n");
	switch((*w1).huihekaishi)
	{
		case 0:break;
		default:printf("�غϿ�ʼ�׶β�������\n");break;
	}
	printf("�ж��׶Ρ���\n");
	int K=0;
	if((*w1).pandingshu> 0)
	{
		int i,j;
		for(;(*w1).pandingshu;)
		{
			switch((*w1).pandingpai[0].leixing)
			{
				case 251:printf("���ֲ�˼�񡿿�ʼ�ж�����\n");break;
				case 252:printf("�����硿��ʼ�ж�����\n");break;
				default:printf("����������ʼ�ж�����\n");break;
			}
			j=0;
			pai p=((*w1).pandingpai[0]);
			for(;;)
			{
				i=Wuxie(&p,w2,w1,B,y,0);
				if(!i)break;
				j++;
				i=Wuxie(&p,w1,w2,B,y,0);
				if(!i)break;
				j++;
			}
			switch((*w1).pandingpai[0].leixing)
			{
				case 251:
					if(!(j%2))
					{
						printf("���ֲ�˼�񡿵��ж����ǣ�");
						Panding(A,x,B,y);
						if((B[(*y)-1].huase) !=1)
						{
							printf("���ֲ�˼���ж��ɹ�\n");
							if((*w1).juese)printf("���");
							else printf("����");
							printf("�������ƽ׶�\n");
							K=-1;
						}
						else printf("���ֲ�˼���ж�ʧ��\n");
					}
					B[*y]=(*w1).pandingpai[0];
					((*w1).pandingshu)--;
					(*w1).pandingpai[0]=(*w1).pandingpai[1];
					(*w1).pandingpai[1]=(*w1).pandingpai[2];
					(*w1).pandingpai[2].leixing=-1;
					(*y)++;
					break;
				case 252:
					if(!(j%2))
					{ 
						printf("�����硿���ж����ǣ�");
						Panding(A,x,B,y);
						if((B[(*y)-1].huase==0) &&(B[(*y)-1].dianshu>=1) &&(B[(*y)-1].dianshu<=8))
						{
							printf("�����硿�ж��ɹ�\n");
							if((*w1).juese)printf("���");
							else printf("����");
							printf("�ܵ�3���׵��˺�");
							((*w1).tili)=((*w1).tili)-3;
							i=Binsi(w2,w1,B,y);
							B[*y]=(*w1).pandingpai[0];
							((*w1).pandingshu)--;
							(*w1).pandingpai[0]=(*w1).pandingpai[1];
							(*w1).pandingpai[1]=(*w1).pandingpai[2];
							(*w1).pandingpai[2].leixing=-1;
							(*y)++;
							if(i==-1)return-1;
						}
						else
						{
							printf("�����硿�ж�ʧ��\n");
							(*w2).pandingpai[2]=(*w2).pandingpai[1];
							(*w2).pandingpai[1]=(*w2).pandingpai[0];
							(*w2).pandingpai[0]=(*w1).pandingpai[0];
							(*w1).pandingpai[0]=(*w1).pandingpai[1];
							(*w1).pandingpai[1]=(*w1).pandingpai[2];
							(*w1).pandingpai[2].leixing=-1;
							((*w1).pandingshu)--;
							((*w2).pandingshu)++;
						}
						break;
					}
				default:printf("�ж��ƴ���");
			} printf("������:%d\n",*y);
		}
	}
	else if(!((*w1).pandingshu));
	else printf("�ж��׶β�������\n");
	printf("���ƽ׶Ρ���\n");
	switch((*w1).mopai)
	{
		case 0:Mopai(&((*w1).shoupaishu),(*w1).shoupai,A,x,B,y,(*w1).juese);break;
		case-1:break;
		default:printf("���ƽ׶β�������\n");break;
	}
	if(K==-1)goto M;
	printf("���ƽ׶Ρ���\n");
	switch((*w1).chupai)
	{
		case 0:
		{
			int i;
			i=Chupai(A,B,x,y,w1,w2,yuanshipaidui);
			if(i==-1)
			{
				return-1;
				break;
			}
			else break;
		}
		case-1:break;
		default:printf("���ƽ׶β�������\n");break;
	}
M:
	printf("���ƽ׶Ρ���\n");
	switch((*w1).qipai)
	{
		case 0:Qipai((*w1).shoupai,&((*w1).shoupaishu),B,y,(*w1).juese,&((*w1).tili));break;
		default:printf("���ƽ׶β�������\n");break;
	}
	printf("�غϽ����׶Ρ���\n");
	switch((*w1).huihejieshu)
	{
		case 0:break;
		default:printf("�غϽ����׶β�������\n");break;
	}
	return 0;
}
int main()
{
	void Kanshoupai(pai p);
	pai yuanshipaidui[2][4][13],qipaidui[104],paidui[104];
	wujiang wanjia,com;
	com.tili=wanjia.tili=5;
	com.tilishangxian=wanjia.tilishangxian=5;
	com.huihekaishi=wanjia.huihekaishi=0;
	com.panding=wanjia.panding=0;
	com.mopai=wanjia.mopai=0;
	com.chupai=wanjia.chupai=0;
	com.qipai=wanjia.qipai=0;
	com.huihejieshu=wanjia.huihejieshu=0;
	com.shoupaishu=wanjia.shoupaishu=0;
	com.pandingshu=wanjia.pandingshu=0;
	com.zhuangbeishu=wanjia.zhuangbeishu=0;
	com.juese=0;wanjia.juese=1;
	pai p;
	p.leixing=-1;
	com.zhuangbei[0]=com.zhuangbei[1]=com.zhuangbei[2]=com.zhuangbei[3]=wanjia.zhuangbei[0]=wanjia.zhuangbei[1]=wanjia.zhuangbei[2]=wanjia.zhuangbei[3]=p;
	com.zhuangbei[0].changdu=wanjia.zhuangbei[0].changdu=1;
	com.pandingpai[0]=com.pandingpai[1]=com.pandingpai[2]=wanjia.pandingpai[0]=wanjia.pandingpai[1]=wanjia.pandingpai[2]=p;
	com.juli[0]=wanjia.juli[0]=1;
	int a,b,c;
	for(a=0;a<=1;a++)
	{
		for(b=0;b<=3;b++)
		{
			for(c=0;c<=12;c++)
			{
				yuanshipaidui[a][b][c].paifu=a;
				yuanshipaidui[a][b][c].huase=b;
				yuanshipaidui[a][b][c].dianshu=c;
			}
		}
	}
	yuanshipaidui[0][0][0].leixing=204;
	yuanshipaidui[0][0][1].leixing=331;
	yuanshipaidui[0][0][2].leixing=201;
	yuanshipaidui[0][0][3].leixing=201;
	yuanshipaidui[0][0][4].leixing=304;yuanshipaidui[0][0][4].changdu=3;
	yuanshipaidui[0][0][5].leixing=251;
	yuanshipaidui[0][0][6].leixing=101;
	yuanshipaidui[0][0][7].leixing=101;
	yuanshipaidui[0][0][8].leixing=101;
	yuanshipaidui[0][0][9].leixing=101;
	yuanshipaidui[0][0][10].leixing=202;
	yuanshipaidui[0][0][11].leixing=201;
	yuanshipaidui[0][0][12].leixing=208;
	yuanshipaidui[0][1][0].leixing=209;
	yuanshipaidui[0][1][1].leixing=102;
	yuanshipaidui[0][1][2].leixing=103;
	yuanshipaidui[0][1][3].leixing=103;
	yuanshipaidui[0][1][4].leixing=308;yuanshipaidui[0][1][4].changdu=5;
	yuanshipaidui[0][1][5].leixing=103;
	yuanshipaidui[0][1][6].leixing=103;
	yuanshipaidui[0][1][7].leixing=103;
	yuanshipaidui[0][1][8].leixing=103;
	yuanshipaidui[0][1][9].leixing=101;
	yuanshipaidui[0][1][10].leixing=101;
	yuanshipaidui[0][1][11].leixing=103;
	yuanshipaidui[0][1][12].leixing=102;
	yuanshipaidui[0][2][0].leixing=204;
	yuanshipaidui[0][2][1].leixing=101;
	yuanshipaidui[0][2][2].leixing=101;
	yuanshipaidui[0][2][3].leixing=101;
	yuanshipaidui[0][2][4].leixing=101;
	yuanshipaidui[0][2][5].leixing=101;
	yuanshipaidui[0][2][6].leixing=101;
	yuanshipaidui[0][2][7].leixing=101;
	yuanshipaidui[0][2][8].leixing=101;
	yuanshipaidui[0][2][9].leixing=101;
	yuanshipaidui[0][2][10].leixing=101;
	yuanshipaidui[0][2][11].leixing=205;
	yuanshipaidui[0][2][12].leixing=205;
	yuanshipaidui[0][3][0].leixing=204;
	yuanshipaidui[0][3][1].leixing=102;
	yuanshipaidui[0][3][2].leixing=102;
	yuanshipaidui[0][3][3].leixing=102;
	yuanshipaidui[0][3][4].leixing=102;
	yuanshipaidui[0][3][5].leixing=101;
	yuanshipaidui[0][3][6].leixing=101;
	yuanshipaidui[0][3][7].leixing=101;
	yuanshipaidui[0][3][8].leixing=101;
	yuanshipaidui[0][3][9].leixing=101;
	yuanshipaidui[0][3][10].leixing=102;
	yuanshipaidui[0][3][11].leixing=103;
	yuanshipaidui[0][3][12].leixing=101;
	yuanshipaidui[1][0][0].leixing=252;
	yuanshipaidui[1][0][1].leixing=302;yuanshipaidui[1][0][1].changdu=2;
	yuanshipaidui[1][0][2].leixing=202;
	yuanshipaidui[1][0][3].leixing=202;
	yuanshipaidui[1][0][4].leixing=383;
	yuanshipaidui[1][0][5].leixing=303;yuanshipaidui[1][0][5].changdu=2;
	yuanshipaidui[1][0][6].leixing=208;
	yuanshipaidui[1][0][7].leixing=101;
	yuanshipaidui[1][0][8].leixing=101;
	yuanshipaidui[1][0][9].leixing=101;
	yuanshipaidui[1][0][10].leixing=210;
	yuanshipaidui[1][0][11].leixing=305;yuanshipaidui[1][0][11].changdu=3;
	yuanshipaidui[1][0][12].leixing=362;
	yuanshipaidui[1][1][0].leixing=206;
	yuanshipaidui[1][1][1].leixing=102;
	yuanshipaidui[1][1][2].leixing=207;
	yuanshipaidui[1][1][3].leixing=207;
	yuanshipaidui[1][1][4].leixing=361;
	yuanshipaidui[1][1][5].leixing=251;
	yuanshipaidui[1][1][6].leixing=203;
	yuanshipaidui[1][1][7].leixing=203;
	yuanshipaidui[1][1][8].leixing=203;
	yuanshipaidui[1][1][9].leixing=101;
	yuanshipaidui[1][1][10].leixing=203;
	yuanshipaidui[1][1][11].leixing=201;
	yuanshipaidui[1][1][12].leixing=381;
	yuanshipaidui[1][2][0].leixing=301;yuanshipaidui[1][2][0].changdu=1;
	yuanshipaidui[1][2][1].leixing=331;
	yuanshipaidui[1][2][2].leixing=201;
	yuanshipaidui[1][2][3].leixing=201;
	yuanshipaidui[1][2][4].leixing=382;
	yuanshipaidui[1][2][5].leixing=251;
	yuanshipaidui[1][2][6].leixing=208;
	yuanshipaidui[1][2][7].leixing=101;
	yuanshipaidui[1][2][8].leixing=101;
	yuanshipaidui[1][2][9].leixing=101;
	yuanshipaidui[1][2][10].leixing=101;
	yuanshipaidui[1][2][11].leixing=210;
	yuanshipaidui[1][2][12].leixing=210;
	yuanshipaidui[1][3][0].leixing=301;yuanshipaidui[1][3][0].changdu=1;
	yuanshipaidui[1][3][1].leixing=102;
	yuanshipaidui[1][3][2].leixing=202;
	yuanshipaidui[1][3][3].leixing=202;
	yuanshipaidui[1][3][4].leixing=306;yuanshipaidui[1][3][4].changdu=3;
	yuanshipaidui[1][3][5].leixing=102;
	yuanshipaidui[1][3][6].leixing=102;
	yuanshipaidui[1][3][7].leixing=102;
	yuanshipaidui[1][3][8].leixing=102;
	yuanshipaidui[1][3][9].leixing=102;
	yuanshipaidui[1][3][10].leixing=102;
	yuanshipaidui[1][3][11].leixing=307;yuanshipaidui[1][3][11].changdu=4;
	yuanshipaidui[1][3][12].leixing=363;
	int paiduishu=104;
	int qipaishu=0;
	printf("��Ϸ��ʼ\n");
	Qishixipai(yuanshipaidui,paidui);
	Qishishoupai(&wanjia,paidui,&(paiduishu),qipaidui,&(qipaishu));
	Qishishoupai(&com,paidui,&(paiduishu),qipaidui,&(qipaishu));
	int i;
	for(;;)
	{
		i=Huihe(paidui,qipaidui,&paiduishu,&qipaishu,yuanshipaidui,&wanjia,&com);
		if(i==-1)break;
		i=Huihe(paidui,qipaidui,&paiduishu,&qipaishu,yuanshipaidui,&com,&wanjia);
		if(i==-1)break;
	}
}
