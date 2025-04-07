#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cc20);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);

#define public_6d5cc3d _public_6d5cc3d
#define public_6d5cc4a _public_6d5cc4a

PROC_DECLARE(0x6d5cc30, internal_6d5cc30, public_6d5cc30);
extern "C" NAKED register_t __cdecl internal_6d5cc30()
{
    __asm
    {
        call public_6d5cc20
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        xor eax, eax
        public_6d5cc3d : nop
        cmp dword ptr ds : [ecx+eax*4], edx
        je public_6d5cc4a
        inc eax
        cmp eax, 0x16
        jl public_6d5cc3d
        xor eax, eax
        public_6d5cc4a : nop
        ret 
        UNREACHABLE_TRAP(0x6d5cc30)
    }
}

#undef public_6d5cc3d
#undef public_6d5cc4a
