// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from react.djinni

#include "NativeJavascriptMapKeyIterator.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeJavascriptMapKeyIterator::NativeJavascriptMapKeyIterator() : ::djinni::JniInterface<::JavascriptMapKeyIterator, NativeJavascriptMapKeyIterator>() {}

NativeJavascriptMapKeyIterator::~NativeJavascriptMapKeyIterator() = default;

NativeJavascriptMapKeyIterator::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeJavascriptMapKeyIterator::JavaProxy::~JavaProxy() = default;

bool NativeJavascriptMapKeyIterator::JavaProxy::hasNextKey() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeJavascriptMapKeyIterator>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_hasNextKey);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
std::string NativeJavascriptMapKeyIterator::JavaProxy::nextKey() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeJavascriptMapKeyIterator>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_nextKey);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}

}  // namespace djinni_generated
