#include "Server-PCH.h"


#define public_6d13335 _public_6d13335

PROC_DECLARE(0x6d13330, internal_6d13330, public_6d13330);
extern "C" NAKED register_t __cdecl internal_6d13330()
{
    __asm
    {
        mov eax, offset public_6d8dd04
        public_6d13335 : nop
        mov dword ptr ds : [eax], 0
        sub eax, 4
        cmp eax, offset public_6d8db08
        jge public_6d13335
        mov dword ptr ds : [public_6d8dd08], 0
        ret 
        UNREACHABLE_TRAP(0x6d13330)
    }
}

#undef public_6d13335
