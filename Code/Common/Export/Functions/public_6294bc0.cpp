#include "Common-PCH.h"


#define public_6294bd1 _public_6294bd1
#define public_6294bd3 _public_6294bd3

PROC_DECLARE(0x6294bc0, internal_6294bc0, public_6294bc0);
extern "C" NAKED register_t __cdecl internal_6294bc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6294bd1
        cmp dword ptr ds : [eax+0x14], 0x40000
        je public_6294bd3
        public_6294bd1 : nop
        xor eax, eax
        public_6294bd3 : nop
        ret 
        UNREACHABLE_TRAP(0x6294bc0)
    }
}

#undef public_6294bd1
#undef public_6294bd3
