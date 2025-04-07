#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f828f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f82900);

#define public_6f8290d _public_6f8290d
#define public_6f8291a _public_6f8291a

PROC_DECLARE(0x6f82900, internal_6f82900, public_6f82900);
extern "C" NAKED register_t __cdecl internal_6f82900()
{
    __asm
    {
        call public_6f828f0
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        xor eax, eax
        public_6f8290d : nop
        cmp dword ptr ds : [ecx+eax*4], edx
        je public_6f8291a
        inc eax
        cmp eax, 0x16
        jl public_6f8290d
        xor eax, eax
        public_6f8291a : nop
        ret 
        UNREACHABLE_TRAP(0x6f82900)
    }
}

#undef public_6f8290d
#undef public_6f8291a
