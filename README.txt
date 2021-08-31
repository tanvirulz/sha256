c implementation of SHA256 hashing algorithm.
This is a bare-bone implementation of the orignal SHA-2 algorithm SHA256 
reference: https://en.wikipedia.org/wiki/SHA-2
and http://csrc.nist.gov/publications/fips/fips180-2/fips180-2withchangenotice.pdf

This implementation is not fortified against side-channel attacks. 
For user-facing applications please use implementation from known cryptography libraries such as openssl.
