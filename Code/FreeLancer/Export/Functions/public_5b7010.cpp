#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7000);
CLANG_FORWARD_PROC_SYMBOL(public_5b7010);

#define public_5b701d _public_5b701d
#define public_5b702a _public_5b702a

PROC_DECLARE(0x5b7010, internal_5b7010, public_5b7010);
extern "C" NAKED register_t __cdecl internal_5b7010()
{
    __asm
    {
        call public_5b7000
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        xor eax, eax
        public_5b701d : nop
        cmp dword ptr ds : [ecx+eax*4], edx
        je public_5b702a
        inc eax
        cmp eax, 0x16
        jl public_5b701d
        xor eax, eax
        public_5b702a : nop
        ret 
        UNREACHABLE_TRAP(0x5b7010)
    }
}

#undef public_5b701d
#undef public_5b702a
