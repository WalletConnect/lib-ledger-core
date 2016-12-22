// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "BitcoinLikeBlock.hpp"  // my header

namespace djinni_generated {

BitcoinLikeBlock::BitcoinLikeBlock() = default;

BitcoinLikeBlock::~BitcoinLikeBlock() = default;

auto BitcoinLikeBlock::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    (void)c; // Suppress warnings in release builds for empty records
    const auto& data = ::djinni::JniClass<BitcoinLikeBlock>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor)};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto BitcoinLikeBlock::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 1);
    assert(j != nullptr);
    (void)j; // Suppress warnings in release builds for empty records
    return {};
}

}  // namespace djinni_generated