#include "RemoteClient-PCH.h"


#define public_6b391c2 _public_6b391c2

PROC_DECLARE(0x6b391b0, internal_6b391b0, public_6b391b0);
extern "C" NAKED register_t __cdecl internal_6b391b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6b328]
        test eax, eax
        je public_6b391c2
        add eax, 4
        mov dword ptr ds : [public_6b73d44], eax
        ret 
        public_6b391c2 : nop
        mov dword ptr ds : [public_6b73d44], 0
        ret 
        UNREACHABLE_TRAP(0x6b391b0)
    }
}

#undef public_6b391c2
