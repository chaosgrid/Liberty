#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7550);

#define public_6eb755d _public_6eb755d

PROC_DECLARE(0x6eb7550, internal_6eb7550, public_6eb7550);
extern "C" NAKED register_t __cdecl internal_6eb7550()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 4
        jb public_6eb755d
        add eax, 0xFFFFFFFC
        ret 
        public_6eb755d : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6eb7550)
    }
}

#undef public_6eb755d
