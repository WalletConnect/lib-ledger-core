// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from crypto.djinni

package co.ledger.core;

/** Helper class for commonly used crypto algorithms */
public abstract class HashAlgorithmHelper {
    /**
     *RACE Integrity Primitives Evaluation Message Digest (used in Bitcoin)
     *@param data in bytes, message to hash
     *@return 160 bits hashed message
     */
    public abstract byte[] ripemd160(byte[] data);

    /**
     *Secure Hash Algorithm (used in Bitcoin)
     *@param data in bytes, message to hash
     *@return 256 bits hashed message
     */
    public abstract byte[] sha256(byte[] data);

    /**
     *Hash algorithm used in ethereum
     *@param data in bytes, message to hash
     *@return 256 bits hashed message
     */
    public abstract byte[] keccak256(byte[] data);
}
