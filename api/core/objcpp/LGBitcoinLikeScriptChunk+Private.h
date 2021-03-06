// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_script.djinni

#include "BitcoinLikeScriptChunk.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class LGBitcoinLikeScriptChunk;

namespace djinni_generated {

class BitcoinLikeScriptChunk
{
public:
    using CppType = std::shared_ptr<::ledger::core::api::BitcoinLikeScriptChunk>;
    using CppOptType = std::shared_ptr<::ledger::core::api::BitcoinLikeScriptChunk>;
    using ObjcType = LGBitcoinLikeScriptChunk*;

    using Boxed = BitcoinLikeScriptChunk;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

