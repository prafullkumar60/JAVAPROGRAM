/*delay.h*/
#include"types.h"
void delay_ms(u16);

/*delay.c*/
#include"types.h"
void delay_ms(u16 i)
{
	u16 j;
	for(i;i>0;i--)
		for(j=122;j>0;j--);
}

/*lcd.h*/
#include"types.h"
 extern void LCD_Init(void);
 extern void LCD_cmd(s8);
 extern void LCD_char(s8);
// extern void LCD_int(u16);
 extern void LCD_str(s8 *);
 
/*lcd.c*/
#include<reg51.h>
#include"types.h"
#include"delay.h"
#include"lcd.h"
#define lcd P0
sbit rs=P1^0;
sbit rw=P1^1;
sbit en=P1^2;
void LCD_Init(void)
{
	delay_ms(16);
	LCD_cmd(0x30);
	delay_ms(6);
	LCD_cmd(0x30);
	delay_ms(1);
	LCD_cmd(0x30);
	delay_ms(1);
	LCD_cmd(0x38);
	LCD_cmd(0x10);
	LCD_cmd(0x01);
	LCD_cmd(0x06);
	LCD_cmd(0x0f);
}
void LCD_disp(s8 val)
{
	rw=0;
	lcd=val;
	en=1;
	en=0;
	delay_ms(2);
}
void LCD_cmd(s8 cmd)
{
	rs=0;
	LCD_disp(cmd);
}
void LCD_char(s8 ch)
{
	rs=1;
	LCD_disp(ch);
}
void LCD_str(s8 *p)
{
	while(*p)
		LCD_char(*p++);
}
/*void LCD_int(u16 temp)
{
	s8 arr[10],i=0;
	u16 temp1;
	while(temp)
	{
		temp1=temp%10;
		arr[i++]=temp1+48;
		temp/=10;
	}
	for(i--;i>=0;i--)
	{
		LCD_char(arr[i]);
	}
}*/

/*types.h*/
#ifndef _TYPES_H__
#define _TYPES_H__
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u16;
typedef signed int s16;
typedef unsigned long int u32;
typedef signed long int s32;
typedef float f32;
typedef double s64;
#endif 
/*reg51.h*/
/*--------------------------------------------------------------------------
REG51.H

Header file for generic 80C51 and 80C31 microcontroller.
Copyright (c) 1988-2002 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
--------------------------------------------------------------------------*/

#ifndef __REG51_H__
#define __REG51_H__

/*  BYTE Register  */
sfr P0   = 0x80;
sfr P1   = 0x90;
sfr P2   = 0xA0;
sfr P3   = 0xB0;
sfr PSW  = 0xD0;
sfr ACC  = 0xE0;
sfr B    = 0xF0;
sfr SP   = 0x81;
sfr DPL  = 0x82;
sfr DPH  = 0x83;
sfr PCON = 0x87;
sfr TCON = 0x88;
sfr TMOD = 0x89;
sfr TL0  = 0x8A;
sfr TL1  = 0x8B;
sfr TH0  = 0x8C;
sfr TH1  = 0x8D;
sfr IE   = 0xA8;
sfr IP   = 0xB8;
sfr SCON = 0x98;
sfr SBUF = 0x99;


/*  BIT Register  */
/*  PSW   */
sbit CY   = 0xD7;
sbit AC   = 0xD6;
sbit F0   = 0xD5;
sbit RS1  = 0xD4;
sbit RS0  = 0xD3;
sbit OV   = 0xD2;
sbit P    = 0xD0;

/*  TCON  */
sbit TF1  = 0x8F;
sbit TR1  = 0x8E;
sbit TF0  = 0x8D;
sbit TR0  = 0x8C;
sbit IE1  = 0x8B;
sbit IT1  = 0x8A;
sbit IE0  = 0x89;
sbit IT0  = 0x88;

/*  IE   */
sbit EA   = 0xAF;
sbit ES   = 0xAC;
sbit ET1  = 0xAB;
sbit EX1  = 0xAA;
sbit ET0  = 0xA9;
sbit EX0  = 0xA8;

/*  IP   */ 
sbit PS   = 0xBC;
sbit PT1  = 0xBB;
sbit PX1  = 0xBA;
sbit PT0  = 0xB9;
sbit PX0  = 0xB8;

/*  P3  */
sbit RD   = 0xB7;
sbit WR   = 0xB6;
sbit T1   = 0xB5;
sbit T0   = 0xB4;
sbit INT1 = 0xB3;
sbit INT0 = 0xB2;
sbit TXD  = 0xB1;
sbit RXD  = 0xB0;

/*  SCON  */
sbit SM0  = 0x9F;
sbit SM1  = 0x9E;
sbit SM2  = 0x9D;
sbit REN  = 0x9C;
sbit TB8  = 0x9B;
sbit RB8  = 0x9A;
sbit TI   = 0x99;
sbit RI   = 0x98;

#endif
/*keypad.h*/
extern void Row_Init(void);
extern bit ColStatus(void);
extern char KeyScan(void);

/*keypad.c*/
#include<reg51.h>
#include"delay.h"
/****keypad*****/
#define keypd P2
sbit c0=keypd^0;
sbit c1=keypd^1;
sbit c2=keypd^2;
sbit c3=keypd^3;
sbit r0=keypd^4;
sbit r1=keypd^5;
sbit r2=keypd^6;
sbit r3=keypd^7;
char row_val,col_val;
code unsigned char a[][4]={0,1,2,3,4,5,6,7,8,9,'&','$','$','*','#','c'};
				
void Row_Init(void)
{
	r0=r1=r2=r3=0;
}
bit ColStatus(void)
{
	return(c0&&c1&&c2&&c3);
}
int KeyScan(void)
{
	Row_Init();
	while(ColStatus());
	r0=0;r1=r2=r3=1;
	if(!ColStatus())
	{
		row_val=0;
		goto Colcheck;
	}
	r1=0;r0=r2=r3=1;
	if(!ColStatus())
	{
		row_val=1;
		goto Colcheck;
	}
	r2=0;r1=r0=r3=1;
	if(!ColStatus())
	{
		row_val=2;
		goto Colcheck;
	}
	r3=0;r1=r2=r0=1;
	if(!ColStatus())
	{
		row_val=3;
		goto Colcheck;
	}
	
Colcheck:	if(c0==0)
			col_val=0;
		else if(c1==0)
			col_val=1;
		else if(c2==0)
			col_val=2;
		else 
			col_val=3;
		delay_ms(10);
		while(!ColStatus());
		return (a[row_val][col_val]);
}
/*i2c_defines.h*/
#ifndef __I2C_DEFINES_H__
#define __I2C_DEFINES_H__
#include<reg51.h>
sbit scl=P3^6;
sbit sda=P3^7;
#endif


/* i2c.h */
#ifndef __I2C_H__
#define __I2C_H__
#include "types.h"
/*prototypes for i2c Bus events*/
void i2cStart(void);
void i2cRestart(void);
void i2cStop(void);
void i2cWrite(u8);
u8 i2cRead(void);
void i2cAck(void);
void i2cNoAck(void);
void i2cMasterAck();
/*prototype for i2c communication algorithm*/
void i2cDevWrite(u8,u8,u8);
u8 i2cDevRead(u8,u8);
void i2cDevPageWrite(u8,u8,u8 *,u8);
void i2cDevSeqRead(u8,u8,u8 *,u8);
#endif
/*end of i2c.h*/

/*i2c.c*/
#include"types.h"
#include"delay.h"
#include"i2c_defines.h"
void i2cStart(void)
{
	sda=1;
	scl=1;
	sda=0;
}
void i2cWrite(u8 dat)
{
	u8 i;
	for(i=0;i<8;i++)
	{
		scl=0;
		sda=(dat>>(7-i))&1;
		scl=1;
	}
}
u8 i2cRead(void)
{
	u8 i,buff=0;
	for(i=0;i<8;i++)
	{
		scl=0;
		scl=1;
		if(sda)
		{
			buff|=0x80>>i;
		}
	}
	return buff;
}
void i2cAck(void)
{
	scl=0;
	sda=1;
	scl=1;
	while(sda);
}
void i2cNoAck(void)
{
	scl=0;
	sda=1;
	scl=1;
}
void i2cMasterAck(void)
{
	scl=0;
	sda=0;
	scl=1;
	scl=0;
	sda=1;
}
void i2cRestart()
{
	scl=0;
	sda=1;
	scl=1;
	sda=0;
}
void i2cStop()
{
	scl=0;
	sda=0;
	scl=1;
	sda=1;
}
/*void i2cDevWrite(u8 slaveAddr,u8 buffAddr,u8 dat)
{
	i2cStart();
	i2cWrite(slaveAddr);
	i2cAck();
	i2cWrite(buffAddr);
	i2cAck();
	i2cWrite(dat);
	i2cAck();
	i2cStop();
	delay_ms(10);
}
u8 i2cDevRead(u8 slaveAddr,u8 buffAddr)
{
	u8 buff;
	i2cStart();
	i2cWrite(slaveAddr);
	i2cAck();
	i2cWrite(buffAddr);
	i2cAck();
	i2cRestart();
	i2cWrite(slaveAddr|0x01);
	i2cAck();
	buff=i2cRead();
	i2cNoAck();
	i2cStop();
	return buff;
}*/
void i2cDevSeqRead(u8 slaveAddr,u8 buffStartAddr,u8 *arr,u8 nbytes)
{
	u8 i;
	i2cStart();
	i2cWrite(slaveAddr);
	i2cAck();
	i2cWrite(buffStartAddr);
	i2cAck();
	i2cRestart();
	i2cWrite(slaveAddr|0x01);
	i2cAck();
	for(i=0;i<nbytes-1;i++)
	{
		arr[i]=i2cRead();
		i2cMasterAck();
	}
	arr[i++]=i2cRead();
	i2cNoAck();
	arr[i]='\0';
	i2cStop();
}
void i2cDevPageWrite(u8 slaveAddr,u8 buffStartAddr,u8 *arr,u8 nbytes)
{
	u8 i;
	i2cStart();
	i2cWrite(slaveAddr);
	i2cAck();
	i2cWrite(buffStartAddr);
	i2cAck();
	for(i=0;i<nbytes;i++)
	{
		i2cWrite(arr[i]);
		i2cAck();
	}
	i2cStop();
	delay_ms(10);
}

/*uart.h*/
#ifndef __UART_H__
#define __UART_H__
extern void uart_init(void);
extern void uart_tx(unsigned char);
extern void uart_string(unsigned char *);
#endif

/*uart.c*/
#include<reg52.h>
#include"lcd.h"
#include"delay.h"

unsigned char ch=0,i=0;
unsigned char arr[25];
bit t_flag;

void uart_string(unsigned char *);

void uart_init(void)
{
	TMOD = 0X20;	
	SCON = 0X50;	 				
	TH1 = TL1=0XFD;		
	TR1 = 1;		
	IE = 0x90;		
}
void serial_int(void) interrupt 4
{
	if(TI == 1)
	{
		t_flag = 1;		
		TI = 0;	
	}
	if(RI==1) 
	{
		ch = SBUF;
		arr[i++] = ch;	
		RI = 0;			
	}
}

void uart_tx(unsigned char dat)
{
	t_flag = 0;	//clear t_flag variable
	SBUF = dat;	//place one byte data into SBUF register
	while(t_flag == 0);	//waiting for transmit complete	
}
void uart_string(unsigned char *str)
{
	while(*str)	
		uart_tx(*str++);	
}

/*main.c*/
#include<reg51.h>
#include"lcd.h"
#include"delay.h"
#include"types.h"
#include"keypad.h"
#include"i2c.h"
#include"uart.h"
#include<string.h>
#include<stdlib.h>
sbit led=P3^4;
u8 pass[5],otp[5],arr2[5],otp1[5];

extern unsigned char i,arr[25];
void editpassword(void);
/*External Interrupt0 ISR*/
void ENT0(void) interrupt 0
{
	editpassword();
}
void gsminit()
{
	i=0;
	uart_string("AT\r\n");
	while(i<2);
	delay_ms(500);
	arr[i] = '\0';
	if(strstr(arr,"OK"))
	{
			i=0;
		uart_string("AT+CMGF=1\r\n");
		while(i<2);
		delay_ms(500);
		arr[i] = '\0';
		if(strstr(arr,"OK"))
		{
			i=0;
			uart_string("ATE0\r\n");
			while(i<2);
			delay_ms(500);
			arr[i] = '\0';
			if(strstr(arr,"OK"))
			{
				LCD_cmd(0x01);
				LCD_cmd(0x80);
				LCD_str("OK");
				delay_ms(2000);		
			}

		}
	}
}
main()
{
	s8 pass1[5],i,j,ch,k=0;
	IE=0x81;
	IT0=1;
	TMOD=0x01;
	TL0=65461&0xFF;
	TH0=65461>>8;
	TR0=1;
	LCD_Init();
	uart_init();
	gsminit();
	LCD_cmd(0x80);
	LCD_str("Set Password");
	LCD_cmd(0xc0);
	for(i=0;i<4;i++)
	{
		ch=KeyScan();
		pass[i]=ch+48;
		LCD_char(pass[i]);
	}
	pass[i]='\0';
	i2cDevPageWrite(0xa0,0x00,pass,4);
	i2cDevSeqRead(0xa0,0x00,arr2,4);
	LCD_cmd(0x01);
	LCD_cmd(0x80);
	LCD_str(arr2);
	delay_ms(2000);
	rep:j=0xc0;
	LCD_cmd(0x01);
	LCD_cmd(0x80);
	LCD_str("Enter Password");
	for(i=0;i<4;i++)
	{
		ch=KeyScan();
		pass1[i]=ch+48;
		LCD_cmd(j++);
		LCD_char(pass1[i]);
		delay_ms(1000);
		LCD_cmd(--j);
		LCD_char('*');
		j++;	
	}
	if((strcmp(pass1,arr2)==0))
	{
		LCD_cmd(0x01);
		LCD_cmd(0x80);
		LCD_str("password matched");
		delay_ms(2000);
		LCD_cmd(0x01);
		LCD_cmd(0x80);
		srand((TH0<<8)|TL0);
		for(i=0;i<4;i++)
		{
			otp[i]=rand()%10;
			delay_ms(500);
			otp[i]=otp[i]+48;
			LCD_char(otp[i]);
		}
		otp[i]='\0';
		uart_string("AT+CMGS=");
		uart_string("\"9390238719\"\r\n");
		delay_ms(1000);
		uart_string(otp);
		delay_ms(1000);
		uart_tx(0x1A);
		rep1:LCD_cmd(0x01);
		LCD_cmd(0x80);
		LCD_str("Enter otp");
		LCD_cmd(0xc0);
		for(i=0;i<4;i++)
		{
			ch=KeyScan();
			otp1[i]=ch+48;
			LCD_char(otp1[i]);
		}
		otp1[i]='\0';
		delay_ms(1000);
		if((strcmp(otp1,otp)==0))
		{
			LCD_cmd(0x01);
			LCD_cmd(0x80);
			LCD_str("ALL device is on");
			led=~led;
		}
		else
		{
			LCD_cmd(0x01);
			LCD_cmd(0x80);
			LCD_str("Invalid otp");
			delay_ms(1000);
			if(++k<3)
				goto rep1;
			else
			{
			LCD_cmd(0x01);
			LCD_cmd(0x80);
			LCD_str("Try again");
			}
			
		}
	}
	else
	{
		LCD_cmd(0x01);
		LCD_cmd(0x80);
		LCD_str("Wrong password");
		delay_ms(1000);
		if(++k<3)
			goto rep;
		else
		{
			LCD_cmd(0x01);
			LCD_cmd(0x80);
			LCD_str("All Sysytem is blocked");
			while(1);
		}
	}
		
	while(1);
}
void editpassword()
{
	s8 i=0,ch,arr1[5];
	LCD_cmd(0x01);
	LCD_cmd(0x80);
	LCD_str("Enter 4 dig new password");
	LCD_cmd(0xc0);
	for(i=0;i<4;i++)
	{
		ch=KeyScan();
		pass[i]=ch+48;
		LCD_char(pass[i]);
	}
	pass[i]='\0';
	delay_ms(2000);
	LCD_cmd(0x01);
	LCD_cmd(0x80);
	LCD_str("pwd is update");
	i2cDevPageWrite(0xa0,0x00,pass,4);
	i2cDevSeqRead(0xa0,0x00,arr1,4);
	//arr[4]='\0';
	LCD_cmd(0x01);
	LCD_cmd(0x80);
	LCD_str(arr1 );
	delay_ms(2000);
	if(i==4)
	{
		LCD_cmd(0x01);
		LCD_cmd(0x80);
		LCD_str("Password accepted");
		LCD_cmd(0xc0);
		delay_ms(5000);
	}
}






	                                                                        