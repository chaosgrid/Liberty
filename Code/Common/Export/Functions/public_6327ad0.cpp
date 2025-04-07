#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6327af0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6327ae8 _public_6327ae8

PROC_DECLARE(0x6327ad0, internal_6327ad0, public_6327ad0);
extern "C" NAKED register_t __cdecl internal_6327ad0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6327af0
        test byte ptr ss : [esp+8], 1
        je public_6327ae8
        push esi
        call public_6391d5a
        add esp, 4
        public_6327ae8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6327ad0)
    }
}

#undef public_6327ae8
