// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#include "EthereumLikeWallet.hpp"  // my header

namespace djinni_generated {

EthereumLikeWallet::EthereumLikeWallet() : ::djinni::JniInterface<::ledger::core::api::EthereumLikeWallet, EthereumLikeWallet>("EthereumLikeWallet$CppProxy") {}

EthereumLikeWallet::~EthereumLikeWallet() = default;


CJNIEXPORT void JNICALL Java_EthereumLikeWallet_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::EthereumLikeWallet>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
