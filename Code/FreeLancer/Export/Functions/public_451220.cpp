#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_451240);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_451238 _public_451238

PROC_DECLARE(0x451220, internal_451220, public_451220);
extern "C" NAKED register_t __cdecl internal_451220()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_451240
        test byte ptr ss : [esp+8], 1
        je public_451238
        push esi
        call public_5b7e1d
        add esp, 4
        public_451238 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x451220)
    }
}

#undef public_451238
