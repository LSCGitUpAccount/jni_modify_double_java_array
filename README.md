# jni_modify_double_java_array

## 一、depend_c文件夹

### 1. dll.h

与**利用javah命令**生成的头文件的内容相同

```java
//进入工程的src文件下,打开window命令行,运行以下命令
javah com.test.ModifyDoubleArray
//生成的.h文件内容与dll.h文件的内容相同
```

### 2. dllmain.c

对dll.h头文件中方法的实现

### 3. jni.h + jni_md.h

win安装jdk后，两个文件所在路径如下图

![image](https://note.youdao.com/yws/api/personal/file/WEB13ffe50335f0471c1801d9a693993ca3?method=download&shareKey=e00c0317f8ba792c330a1623bedfe894)

## 二、 lib文件夹

**在depend_c文件夹中，对dllmain.c文件进行编译，形成的动态库dll文件**

## 三、intellij中将jniTest1.dll文件加入library

**使用loadLibrary方式**加载dll库文件时需要对工程进行下图配置。

```java
System.loadLibrary("jniTest1");
```
![image](https://note.youdao.com/yws/api/personal/file/WEBbc2f0eacbbce5c571f9c06d2366a43ae?method=download&shareKey=bb65e8013f2c2a078f549c31510291e7)