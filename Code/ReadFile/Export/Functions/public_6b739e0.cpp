#include "ReadFile-PCH.h"


#define public_6b739f6 _public_6b739f6

PROC_DECLARE(0x6b739e0, internal_6b739e0, public_6b739e0);
extern "C" NAKED register_t __cdecl internal_6b739e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x230]
        test ecx, ecx
        je public_6b739f6
        mov eax, 1
        ret 8
        public_6b739f6 : nop
        mov dword ptr ds : [eax+0x1C], 5
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6b739e0)
    }
}

#undef public_6b739f6
