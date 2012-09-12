/*
 * gpsutil.h
 *
 *  Created on: 2012-9-10
 *      Author: Conan
 */

#ifndef GPSUTIL_H_
#define GPSUTIL_H_

#define BJ54 54//北京54基准面为
#define WGS84 84//WGS84基准面为
#define XIAN80 80//西安80基准面为

//笛卡尔坐标系
typedef struct tagCRDCARTESIAN{
	double x;
	double y;
	//double z;
}CRDCARTESIAN,*PCRDCARTESIAN;

//大地坐标系
typedef struct tagCRDGEODETIC{
	double longitude; //经度
	double latitude; //纬度
	//double height;    //大地高,可设为0
}CRDGEODETIC;
typedef CRDGEODETIC *PCRDGEODETIC;

/*++
把球面坐标转为平面坐标体系中去采用WGS84标准去转
输入：
[IN]PCRDCARTESIAN pcc 转出的平面坐标系
[IN]PCRDGEODETIC pcg 原始的球面经纬度坐标
返回
--*/
void GeodeticToCartesian(PCRDCARTESIAN pcc,
		PCRDGEODETIC pcg, int type=WGS84);

#endif /* GPSUTIL_H_ */
