#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_447d70);

#define public_454160 _public_454160

PROC_DECLARE(0x454150, internal_454150, public_454150);
extern "C" NAKED register_t __cdecl internal_454150()
{
    __asm
    {
        call public_446be0
        test eax, eax
        je public_454160
        mov ecx, eax
        call public_447d70
        public_454160 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x454150)
    }
}

#undef public_454160
