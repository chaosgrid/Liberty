#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343120);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6343118 _public_6343118

PROC_DECLARE(0x6343100, internal_6343100, public_6343100);
extern "C" NAKED register_t __cdecl internal_6343100()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6343120
        test byte ptr ss : [esp+8], 1
        je public_6343118
        push esi
        call public_6391d5a
        add esp, 4
        public_6343118 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6343100)
    }
}

#undef public_6343118
