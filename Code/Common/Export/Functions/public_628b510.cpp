#include "Common-PCH.h"


#define public_628b52e _public_628b52e

PROC_DECLARE(0x628b510, internal_628b510, public_628b510);
extern "C" NAKED register_t __cdecl internal_628b510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_628b52e
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_628b52e
        mov eax, dword ptr ds : [eax+0x78]
        and eax, 0x300
        neg eax
        sbb eax, eax
        neg eax
        ret 
        public_628b52e : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x628b510)
    }
}

#undef public_628b52e
