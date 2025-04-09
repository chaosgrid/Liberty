#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_474420);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_474418 _public_474418

PROC_DECLARE(0x474400, internal_474400, public_474400);
extern "C" NAKED register_t __cdecl internal_474400()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_474420
        test byte ptr ss : [esp+8], 1
        je public_474418
        push esi
        call public_5b7e1d
        add esp, 4
        public_474418 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x474400)
    }
}

#undef public_474418
