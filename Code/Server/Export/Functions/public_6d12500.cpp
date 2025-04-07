#include "Server-PCH.h"


#define public_6d12505 _public_6d12505

PROC_DECLARE(0x6d12500, internal_6d12500, public_6d12500);
extern "C" NAKED register_t __cdecl internal_6d12500()
{
    __asm
    {
        mov eax, offset public_6d8e114
        public_6d12505 : nop
        mov dword ptr ds : [eax], 0
        sub eax, 4
        cmp eax, offset public_6d8df18
        jge public_6d12505
        mov dword ptr ds : [public_6d8e118], 0
        ret 
        UNREACHABLE_TRAP(0x6d12500)
    }
}

#undef public_6d12505
