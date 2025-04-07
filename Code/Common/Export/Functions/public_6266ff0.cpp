#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266ff0);

#define public_6266ffa _public_6266ffa

PROC_DECLARE(0x6266ff0, internal_6266ff0, public_6266ff0);
extern "C" NAKED register_t __cdecl internal_6266ff0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6266ffa
        xor eax, eax
        ret 
        public_6266ffa : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 1
        ret 
        UNREACHABLE_TRAP(0x6266ff0)
    }
}

#undef public_6266ffa
