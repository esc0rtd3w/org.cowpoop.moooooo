#include <jni.h>
#include <string>

extern "C"
jstring
Java_org_cowpoop_moooooo_Moooooo_SampleText(
        JNIEnv* env,
        jobject /* this */) {
    std::string text = "Sample Text";
    return env->NewStringUTF(text.c_str());
}
