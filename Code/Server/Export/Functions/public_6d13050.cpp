#include "Server-PCH.h"


#define public_6d13055 _public_6d13055

PROC_DECLARE(0x6d13050, internal_6d13050, public_6d13050);
extern "C" NAKED register_t __cdecl internal_6d13050()
{
    __asm
    {
        mov eax, offset public_6d8df0c
        public_6d13055 : nop
        mov dword ptr ds : [eax], 0
        sub eax, 4
        cmp eax, offset public_6d8dd10
        jge public_6d13055
        mov dword ptr ds : [public_6d8df10], 0
        ret 
        UNREACHABLE_TRAP(0x6d13050)
    }
}

#undef public_6d13055
