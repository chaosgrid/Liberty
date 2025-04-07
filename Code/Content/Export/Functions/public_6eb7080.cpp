#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7080);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);

#define public_6eb708c _public_6eb708c

PROC_DECLARE(0x6eb7080, internal_6eb7080, public_6eb7080);
extern "C" NAKED register_t __cdecl internal_6eb7080()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_6eb708c
        jmp public_6f33f80
        public_6eb708c : nop
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x6eb7080)
    }
}

#undef public_6eb708c
