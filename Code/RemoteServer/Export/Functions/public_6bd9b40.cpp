#include "RemoteServer-PCH.h"


#define public_6bd9b4c _public_6bd9b4c

PROC_DECLARE(0x6bd9b40, internal_6bd9b40, public_6bd9b40);
extern "C" NAKED register_t __cdecl internal_6bd9b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 2
        jge public_6bd9b4c
        mov dword ptr ds : [ecx+0x2C], eax
        public_6bd9b4c : nop
        ret 4
        UNREACHABLE_TRAP(0x6bd9b40)
    }
}

#undef public_6bd9b4c
