#include "RemoteClient-PCH.h"


#define public_6b3956d _public_6b3956d

PROC_DECLARE(0x6b39560, internal_6b39560, public_6b39560);
extern "C" NAKED register_t __cdecl internal_6b39560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6b3956d
        mov dword ptr ds : [public_6b73700], eax
        public_6b3956d : nop
        ret 
        UNREACHABLE_TRAP(0x6b39560)
    }
}

#undef public_6b3956d
