#include "RemoteServer-PCH.h"


#define public_6bd98f0 _public_6bd98f0

PROC_DECLARE(0x6bd98e0, internal_6bd98e0, public_6bd98e0);
extern "C" NAKED register_t __cdecl internal_6bd98e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6bd98f0
        push eax
        call dword ptr ds : [public_6c0b124]
        pop ecx
        public_6bd98f0 : nop
        ret 4
        UNREACHABLE_TRAP(0x6bd98e0)
    }
}

#undef public_6bd98f0
