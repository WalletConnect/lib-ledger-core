// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_EXTENDEDKEYACCOUNTCREATIONINFO_HPP
#define DJINNI_GENERATED_EXTENDEDKEYACCOUNTCREATIONINFO_HPP

#include <cstdint>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

namespace ledger { namespace core { namespace api {

struct ExtendedKeyAccountCreationInfo final {
    int32_t index;
    std::vector<std::string> owners;
    std::vector<std::string> derivations;
    std::vector<std::string> extendedKeys;

    ExtendedKeyAccountCreationInfo(int32_t index_,
                                   std::vector<std::string> owners_,
                                   std::vector<std::string> derivations_,
                                   std::vector<std::string> extendedKeys_)
    : index(std::move(index_))
    , owners(std::move(owners_))
    , derivations(std::move(derivations_))
    , extendedKeys(std::move(extendedKeys_))
    {}

    ExtendedKeyAccountCreationInfo(const ExtendedKeyAccountCreationInfo& cpy) {
       this->index = cpy.index;
       this->owners = cpy.owners;
       this->derivations = cpy.derivations;
       this->extendedKeys = cpy.extendedKeys;
    }

    ExtendedKeyAccountCreationInfo() = default;


    ExtendedKeyAccountCreationInfo& operator=(const ExtendedKeyAccountCreationInfo& cpy) {
       this->index = cpy.index;
       this->owners = cpy.owners;
       this->derivations = cpy.derivations;
       this->extendedKeys = cpy.extendedKeys;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(index, owners, derivations, extendedKeys);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(index, owners, derivations, extendedKeys);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_EXTENDEDKEYACCOUNTCREATIONINFO_HPP