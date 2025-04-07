#include "Server-PCH.h"


#define public_6d45b45 _public_6d45b45

PROC_DECLARE(0x6d45b40, internal_6d45b40, public_6d45b40);
extern "C" NAKED register_t __cdecl internal_6d45b40()
{
    __asm
    {
        mov eax, offset public_6d8f964
        public_6d45b45 : nop
        mov dword ptr ds : [eax], 0
        sub eax, 4
        cmp eax, offset public_6d8f768
        jge public_6d45b45
        mov dword ptr ds : [public_6d8f968], 0
        ret 
        UNREACHABLE_TRAP(0x6d45b40)
    }
}

#undef public_6d45b45
