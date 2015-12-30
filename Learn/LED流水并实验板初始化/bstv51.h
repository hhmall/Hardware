/*********************************************************************
 *
 *                          bstv51.h
 *
 *********************************************************************
 * �ļ���: bstv51.h
 * ��  ��: BST-V51������ͷ�ļ�
 ********************************************************************/

#ifndef bstv51_H
#define bstv51_H

/*�������ͱ�ʶ�ĺ궨��,ͨ������*/
#define uchar unsigned char //8 0-255
#define uint unsigned int   //16  0-65535
#define ON 1
#define OFF 0

/*���徧��Ƶ�ʣ���λ Hz��*/
#define FOSC  11059200 
//#define FOSC  12000000 
//#define FOSC  22118400 


/* BST-V51 ���Ŷ��� */
sbit L0  = P1^0; //LED0����
sbit L1  = P1^1;
sbit L2  = P1^2;
sbit L4  = P1^4;
sbit L5  = P1^5;
sbit L6  = P1^6;
sbit L7  = P1^7;

sbit RS  = P1^0;   //RSΪ�Ĵ���ѡ��1=���ݼĴ�����0=ָ��Ĵ�����
sbit RW  = P1^1;   //RWΪ��д�ź��ߣ�1=��������0=д������
                   //��RS=RW=0����д��ָ�������ʾ��ַ��
                   //��RS=0��RW=1���Զ�æ�źţ�
                   //��RS=1��RW=0����д�����ݡ�

sbit SDI  = P1^5;  //DS1302
sbit SDO  = P1^6;  //DS1302
sbit SCK  = P1^7;  //DS1302


sbit EN	 = P2^5;   //��EN���ɸߵ�ƽ����ɵ͵�ƽʱ��Һ��ģ��ִ�����
sbit CS  = P2^6;
sbit RST = P2^7;   //DS1302ʱ��
sbit RX  = P3^0;
sbit TX  = P3^1;
sbit IR  = P3^2;
sbit B20 = P2^4;
sbit FM =  P2^3;

sbit DU=P2^6;
sbit WE=P2^7;

/*Ϊ����ʹ�ã����ֹܽŵĶ��ض���*/

#define CLK SW0
#define DAT SW1




//ϵͳ��ʼ������
void bstv51_init(void);/*BST-V51�����������ʼ��*/


#endif