#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7793);
CLANG_FORWARD_PROC_SYMBOL(public_5b7cdf);

#define public_5b7cfb _public_5b7cfb

PROC_DECLARE(0x5b7cdf, internal_5b7cdf, public_5b7cdf);
extern "C" NAKED register_t __cdecl internal_5b7cdf()
{
    __asm
    {
/*FIXUP push offset public_5e7300 @0x5b7cdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7300
/*FIXUP push offset public_5e7284 @0x5b7ce4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7284
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b7793
        test eax, eax
        je public_5b7cfb
        jmp eax
        public_5b7cfb : nop
        push 0x7F
        call dword ptr ds : [public_5c6f6c]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x5b7cdf)
    }
}

#undef public_5b7cfb
