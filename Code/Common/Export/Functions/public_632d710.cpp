#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c340);
CLANG_FORWARD_PROC_SYMBOL(public_632d710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632d728 _public_632d728

PROC_DECLARE(0x632d710, internal_632d710, public_632d710);
extern "C" NAKED register_t __cdecl internal_632d710()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_632c340
        test byte ptr ss : [esp+8], 1
        je public_632d728
        push esi
        call public_6391d5a
        add esp, 4
        public_632d728 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x632d710)
    }
}

#undef public_632d728
