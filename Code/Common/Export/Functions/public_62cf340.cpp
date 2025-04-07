#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cf360);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62cf358 _public_62cf358

PROC_DECLARE(0x62cf340, internal_62cf340, public_62cf340);
extern "C" NAKED register_t __cdecl internal_62cf340()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62cf360
        test byte ptr ss : [esp+8], 1
        je public_62cf358
        push esi
        call public_6391d5a
        add esp, 4
        public_62cf358 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cf340)
    }
}

#undef public_62cf358
