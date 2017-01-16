#include <jni.h>
#include <string>

extern "C"
jstring
Java_org_cowpoop_moooooo_Moooooo_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
