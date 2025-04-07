#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0b80);

#define public_6ed0b90 _public_6ed0b90
#define public_6ed0b9d _public_6ed0b9d

PROC_DECLARE(0x6ed0b80, internal_6ed0b80, public_6ed0b80);
extern "C" NAKED register_t __cdecl internal_6ed0b80()
{
    __asm
    {
        call public_6ed0b50
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        mov eax, 9
        public_6ed0b90 : nop
        cmp dword ptr ds : [ecx+eax*4], edx
        je public_6ed0b9d
        inc eax
        cmp eax, 0x16
        jl public_6ed0b90
        xor eax, eax
        public_6ed0b9d : nop
        ret 
        UNREACHABLE_TRAP(0x6ed0b80)
    }
}

#undef public_6ed0b90
#undef public_6ed0b9d
