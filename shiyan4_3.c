//#include<stdio.h>
//#include<stdlib.h>
//#define  MAXLEN  10
//typedef  struct
//{
//	int  data[MAXLEN];                    //  �������ݵ����ͼ����ݵĴ洢��
//	int  front, rear;                        //  �����ͷ����βָ��
//}csequeue;
////��Ӳ���  
//void  push(csequeue* SQ)
//{
//	int x,i;
//	int length = sizeof(SQ) / sizeof(SQ[0]);
//	SQ->front = 0;
//
//	//csequeue* sq = SQ->front;
//	scanf("%d", &x);
//	if ((SQ->rear + 1) % MAXLEN == SQ->front) {
//		printf("Error");
//	}
//	if (x > ((SQ->data[SQ->front] + SQ->data[SQ->rear]) / 2.0))  //���ھͲ����ڶ�β
//	{
//		SQ->rear = (SQ->rear + 1) % MAXLEN;
//		SQ->data[SQ->rear] = x;
//		printf("Success");
//	}
//	if (x < ((SQ->data[SQ->front] + SQ->data[SQ->rear]) / 2.0)) {  //С�ڲ����ڶ�ͷ
//
//	   /* while (sq->data[i] != SQ->data[SQ->rear]) {
//			i++;
//		}
//			SQ->data[SQ->front + 1] = SQ->data[SQ->front];
//			SQ->data[SQ->front] = x;*/
//		for(i=0;i<length;i++) {
//			//SQ->data[SQ->front] = 0;
//			if (i == SQ->rear) {
//				length++;
//				SQ->data[i + 1] = SQ->data[i];
//				SQ->data[SQ->front] = x;
//				printf("Success");
//			}
//		}
//	}	
//
//}
//
////���Ӳ���  
//void  pop(csequeue* SQ)
//{
//	csequeue* p = NULL;
//	if (SQ->front == SQ->rear) {
//		printf("Error");
//	}
//	else {
//		p = SQ->front;
//		SQ->front = (SQ->front + 1) % MAXLEN;
//		//free(p);
//		printf("%d", p->data);
//
//	}
//
//}
//
////��ȡ���г���  
//void  length(csequeue* SQ)
//{
//	int count = 0, i = 0;
//	for (i = 0; i < MAXLEN - 1; i++) {
//		if (SQ->data[i] != NULL) {
//			count++;
//		}
//	}
//	printf("%d", count);
//}
//
////��ʾ����Ԫ��  
//void  show(csequeue* SQ)
//{
//	int i = 0;
//	csequeue* q = SQ->front;
//	if (q==NULL) {
//		printf("Empty");
//	}
//	else while (q->data[i]!=NULL) {    //SQ->data[SQ->front] != NULL
//		printf("%d",q->data);
//		i++;
//	}
//
//}
//
//int  main()
//{
//	int  n, T;
//	csequeue* SQ;
//	SQ = (csequeue*)malloc(sizeof(csequeue));
//	SQ->front = SQ->rear = 0;
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d", &n);
//		switch (n)
//		{
//		case  1:push(SQ); break;
//		case  2:pop(SQ); break;
//		case  3:length(SQ); break;
//		case  4:show(SQ); break;
//		}
//	}
//	return  0;
//}