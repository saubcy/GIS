/*
 * gpsutil.h
 *
 *  Created on: 2012-9-10
 *      Author: Conan
 */

#ifndef GPSUTIL_H_
#define GPSUTIL_H_

#define BJ54 54//����54��׼��Ϊ
#define WGS84 84//WGS84��׼��Ϊ
#define XIAN80 80//����80��׼��Ϊ

//�ѿ�������ϵ
typedef struct tagCRDCARTESIAN{
	double x;
	double y;
	//double z;
}CRDCARTESIAN,*PCRDCARTESIAN;

//�������ϵ
typedef struct tagCRDGEODETIC{
	double longitude; //����
	double latitude; //γ��
	//double height;    //��ظ�,����Ϊ0
}CRDGEODETIC;
typedef CRDGEODETIC *PCRDGEODETIC;

/*++
����������תΪƽ��������ϵ��ȥ����WGS84��׼ȥת
���룺
[IN]PCRDCARTESIAN pcc ת����ƽ������ϵ
[IN]PCRDGEODETIC pcg ԭʼ�����澭γ������
����
--*/
void GeodeticToCartesian(PCRDCARTESIAN pcc,
		PCRDGEODETIC pcg, int type=WGS84);

#endif /* GPSUTIL_H_ */
