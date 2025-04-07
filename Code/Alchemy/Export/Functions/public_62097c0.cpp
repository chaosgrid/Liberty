#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62097e0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62097d8 _public_62097d8

PROC_DECLARE(0x62097c0, internal_62097c0, public_62097c0);
extern "C" NAKED register_t __cdecl internal_62097c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62097e0
        test byte ptr ss : [esp+8], 1
        je public_62097d8
        push esi
        call public_62460e0
        add esp, 4
        public_62097d8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62097c0)
    }
}

#undef public_62097d8
