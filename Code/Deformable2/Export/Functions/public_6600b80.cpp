#include "Deformable2-PCH.h"


#define public_6600b8e _public_6600b8e

PROC_DECLARE(0x6600b80, internal_6600b80, public_6600b80);
extern "C" NAKED register_t __cdecl internal_6600b80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6600b8e
        mov dword ptr ds : [eax], 0
        public_6600b8e : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6600b80)
    }
}

#undef public_6600b8e
