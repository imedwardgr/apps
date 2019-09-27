#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_ipn_cashless_access_welcome_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
