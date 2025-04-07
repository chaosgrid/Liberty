#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220eb0);

#define public_6220eba _public_6220eba

PROC_DECLARE(0x6220eb0, internal_6220eb0, public_6220eb0);
extern "C" NAKED register_t __cdecl internal_6220eb0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6220eba
        xor eax, eax
        ret 
        public_6220eba : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x6220eb0)
    }
}

#undef public_6220eba
