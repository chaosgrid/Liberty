#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001910);

#define public_10001a6e _public_10001a6e

PROC_DECLARE(0x10001a60, internal_10001a60, public_10001a60);
extern "C" NAKED register_t __cdecl internal_10001a60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_1000d000]
        test eax, eax
        je public_10001a6e
        call public_10001910
        public_10001a6e : nop
        mov eax, offset public_1000e1d8
        ret 
        UNREACHABLE_TRAP(0x10001a60)
    }
}

#undef public_10001a6e
