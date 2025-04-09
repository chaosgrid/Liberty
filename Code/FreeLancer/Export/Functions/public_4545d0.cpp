#include "FreeLancer-PCH.h"


#define public_4545ec _public_4545ec

PROC_DECLARE(0x4545d0, internal_4545d0, public_4545d0);
extern "C" NAKED register_t __cdecl internal_4545d0()
{
    __asm
    {
        mov cl, byte ptr ss : [esp+8]
        xor eax, eax
        cmp cl, al
        je public_4545ec
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_66d2bc], ecx
        mov dword ptr ds : [public_66d2c0], eax
        ret 0xC
        public_4545ec : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_66d2bc], eax
        mov dword ptr ds : [public_66d2c0], edx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x4545d0)
    }
}

#undef public_4545ec
