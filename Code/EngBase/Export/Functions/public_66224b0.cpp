#include "EngBase-PCH.h"


#define public_66224c4 _public_66224c4
#define public_66224c7 _public_66224c7

PROC_DECLARE(0x66224b0, internal_66224b0, public_66224b0);
extern "C" NAKED register_t __cdecl internal_66224b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        je public_66224c4
        test eax, eax
        je public_66224c4
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        jne public_66224c7
        public_66224c4 : nop
        or eax, 0xFFFFFFFF
        public_66224c7 : nop
        ret 8
        UNREACHABLE_TRAP(0x66224b0)
    }
}

#undef public_66224c4
#undef public_66224c7
