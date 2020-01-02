/* Replace "dll.h" with the name of your header */
#include "dll.h"

//实现  'dll.h' 文件中的方法 
/*
function: 将一个长度为2的一维的doule类型的java数组 ,值修改为45、20 
*/
void JNICALL Java_com_test_ModifyDoubleArray_modifyArray
  (JNIEnv * env, jobject job, jdoubleArray java){
  	jdouble modify_value1 = 45,modify_value2 = 20;
  	
  	
  	//第一种方法 
  	//1. 修改第一个元素的值 
  	/*
	  数字0:表示第一个数组元素 
	  数字1:表示连续修改的长度 
	  */
	(*env)->SetDoubleArrayRegion(env,java,0,1,&modify_value1);
	
	
	//2. 修改第二个元素的值 
	/*
	  数字1:表示第二个数组元素 
	  数字1:表示连续修改的长度 
	  */
	(*env)->SetDoubleArrayRegion(env,java,1,1,&modify_value2);
	
	
	//第二种方法 
//	jdouble * c_doublearray_temp = (jdouble*) (*env)->GetIntArrayElements(env, java, 0);
//	c_doublearray_temp[0] = &modify_value1;
//	c_doublearray_temp[1] = &modify_value2;
//	(*env)->SetIntArrayRegion(env, java,0,2,c_doublearray_temp);
  }
