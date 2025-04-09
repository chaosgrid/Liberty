#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e990);

#define public_52b4df _public_52b4df

PROC_DECLARE(0x52b4d0, internal_52b4d0, public_52b4d0);
extern "C" NAKED register_t __cdecl internal_52b4d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x2C]
        test ecx, ecx
        je public_52b4df
        call public_40e990
        public_52b4df : nop
        mov ecx, esi
        pop esi
        jmp dword ptr ds : [public_5c6850]
        UNREACHABLE_TRAP(0x52b4d0)
    }
}

#undef public_52b4df
