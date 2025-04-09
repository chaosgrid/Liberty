#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52b510);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52a358 _public_52a358

PROC_DECLARE(0x52a340, internal_52a340, public_52a340);
extern "C" NAKED register_t __cdecl internal_52a340()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52b510
        test byte ptr ss : [esp+8], 1
        je public_52a358
        push esi
        call public_5b7e1d
        add esp, 4
        public_52a358 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52a340)
    }
}

#undef public_52a358
