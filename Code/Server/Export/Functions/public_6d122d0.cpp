#include "Server-PCH.h"


#define public_6d122d5 _public_6d122d5

PROC_DECLARE(0x6d122d0, internal_6d122d0, public_6d122d0);
extern "C" NAKED register_t __cdecl internal_6d122d0()
{
    __asm
    {
        mov eax, offset public_6d8e31c
        public_6d122d5 : nop
        mov dword ptr ds : [eax], 0
        sub eax, 4
        cmp eax, offset public_6d8e120
        jge public_6d122d5
        mov dword ptr ds : [public_6d8e320], 0
        ret 
        UNREACHABLE_TRAP(0x6d122d0)
    }
}

#undef public_6d122d5
