/* Replace "dll.h" with the name of your header */
#include "dll.h"

//ʵ��  'dll.h' �ļ��еķ��� 
/*
function: ��һ������Ϊ2��һά��doule���͵�java���� ,ֵ�޸�Ϊ45��20 
*/
void JNICALL Java_com_test_ModifyDoubleArray_modifyArray
  (JNIEnv * env, jobject job, jdoubleArray java){
  	jdouble modify_value1 = 45,modify_value2 = 20;
  	
  	
  	//��һ�ַ��� 
  	//1. �޸ĵ�һ��Ԫ�ص�ֵ 
  	/*
	  ����0:��ʾ��һ������Ԫ�� 
	  ����1:��ʾ�����޸ĵĳ��� 
	  */
	(*env)->SetDoubleArrayRegion(env,java,0,1,&modify_value1);
	
	
	//2. �޸ĵڶ���Ԫ�ص�ֵ 
	/*
	  ����1:��ʾ�ڶ�������Ԫ�� 
	  ����1:��ʾ�����޸ĵĳ��� 
	  */
	(*env)->SetDoubleArrayRegion(env,java,1,1,&modify_value2);
	
	
	//�ڶ��ַ��� 
//	jdouble * c_doublearray_temp = (jdouble*) (*env)->GetIntArrayElements(env, java, 0);
//	c_doublearray_temp[0] = &modify_value1;
//	c_doublearray_temp[1] = &modify_value2;
//	(*env)->SetIntArrayRegion(env, java,0,2,c_doublearray_temp);
  }
