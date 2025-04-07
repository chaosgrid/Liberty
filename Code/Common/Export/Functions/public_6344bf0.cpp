#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6344c08 _public_6344c08

PROC_DECLARE(0x6344bf0, internal_6344bf0, public_6344bf0);
extern "C" NAKED register_t __cdecl internal_6344bf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6344ad0
        test byte ptr ss : [esp+8], 1
        je public_6344c08
        push esi
        call public_6391d5a
        add esp, 4
        public_6344c08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6344bf0)
    }
}

#undef public_6344c08
