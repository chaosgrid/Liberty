#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b500);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_5a61f2 _public_5a61f2

PROC_DECLARE(0x5a61c0, internal_5a61c0, public_5a61c0);
extern "C" NAKED register_t __cdecl internal_5a61c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push 1
        push esi
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_5a61f2
        cmp dword ptr ds : [eax+0x1C], 1
        jne public_5a61f2
        mov cl, byte ptr ds : [eax+0x18C]
        or cl, 4
        push esi
        mov byte ptr ds : [eax+0x18C], cl
        call public_46b500
        add esp, 4
        public_5a61f2 : nop
        inc dword ptr ds : [public_6724b0]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5a61c0)
    }
}

#undef public_5a61f2
