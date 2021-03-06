// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from react.djinni

#include "JavascriptPromise.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol RVJavascriptPromise;

namespace djinni_generated {

class JavascriptPromise
{
public:
    using CppType = std::shared_ptr<::JavascriptPromise>;
    using CppOptType = std::shared_ptr<::JavascriptPromise>;
    using ObjcType = id<RVJavascriptPromise>;

    using Boxed = JavascriptPromise;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

