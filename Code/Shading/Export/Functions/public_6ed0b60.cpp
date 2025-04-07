#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0b60);

#define public_6ed0b6d _public_6ed0b6d
#define public_6ed0b7a _public_6ed0b7a

PROC_DECLARE(0x6ed0b60, internal_6ed0b60, public_6ed0b60);
extern "C" NAKED register_t __cdecl internal_6ed0b60()
{
    __asm
    {
        call public_6ed0b50
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        xor eax, eax
        public_6ed0b6d : nop
        cmp dword ptr ds : [ecx+eax*4], edx
        je public_6ed0b7a
        inc eax
        cmp eax, 0x16
        jl public_6ed0b6d
        xor eax, eax
        public_6ed0b7a : nop
        ret 
        UNREACHABLE_TRAP(0x6ed0b60)
    }
}

#undef public_6ed0b6d
#undef public_6ed0b7a
