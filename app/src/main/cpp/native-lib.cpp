#include <jni.h>
#include <string>

extern "C"
jstring
Java_org_cowpoop_moooooo_Moooooo_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "COW Poop\n\nA Collection of Vulnerabilities Based Around The CVE-2016-5195 Exploit";
    return env->NewStringUTF(hello.c_str());
}
