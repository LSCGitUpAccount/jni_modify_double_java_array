package com.test;

public class ModifyDoubleArray {
    public native void modifyArray(double [] doubleArray);

    public static void main(String[] args) {
        double[] needModify = {1.0,1.0};
        System.out.println("数组被修改前:"+needModify[0]+";"+needModify[1]);

        /**
         * 第一步: 加载动态库
         */
        //1.1 第一种方法
        System.loadLibrary("jniTest1");
        //1.2 第二种方法
//        System.load("");

        /**
         * 第二步：调用mda中的modifyArray方法,此方法的具体实现在由c编译生成的动态库中,修改数组的值
         */
        ModifyDoubleArray mda = new ModifyDoubleArray();
        mda.modifyArray(needModify);

        System.out.println("数组被修改后:"+needModify[0]+";"+needModify[1]);
    }
}
