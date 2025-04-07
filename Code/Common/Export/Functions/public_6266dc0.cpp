#include "Common-PCH.h"


#define public_6266dca _public_6266dca

PROC_DECLARE(0x6266dc0, internal_6266dc0, public_6266dc0);
extern "C" NAKED register_t __cdecl internal_6266dc0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6266dca
        xor eax, eax
        ret 
        public_6266dca : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 1
        ret 
        UNREACHABLE_TRAP(0x6266dc0)
    }
}

#undef public_6266dca
