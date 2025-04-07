#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb560);
CLANG_FORWARD_PROC_SYMBOL(public_62bb5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62bb578 _public_62bb578

PROC_DECLARE(0x62bb560, internal_62bb560, public_62bb560);
extern "C" NAKED register_t __cdecl internal_62bb560()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62bb5a0
        test byte ptr ss : [esp+8], 1
        je public_62bb578
        push esi
        call public_6391d5a
        add esp, 4
        public_62bb578 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62bb560)
    }
}

#undef public_62bb578
