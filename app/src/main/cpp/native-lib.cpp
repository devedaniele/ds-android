#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_ds_android_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++ DS Android";
    return env->NewStringUTF(hello.c_str());
}