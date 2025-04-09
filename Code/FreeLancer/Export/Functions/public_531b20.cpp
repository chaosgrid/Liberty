#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531b20);

#define public_531b3b _public_531b3b

PROC_DECLARE(0x531b20, internal_531b20, public_531b20);
extern "C" NAKED register_t __cdecl internal_531b20()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xA
        push esi
        mov esi, ecx
        jne public_531b3b
        mov ecx, dword ptr ds : [esi+4]
        push esi
        call dword ptr ds : [public_5c6938]
        mov dword ptr ds : [esi+4], 0
        public_531b3b : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x531b20)
    }
}

#undef public_531b3b
