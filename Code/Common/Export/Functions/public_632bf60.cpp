#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632afb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632bf78 _public_632bf78

PROC_DECLARE(0x632bf60, internal_632bf60, public_632bf60);
extern "C" NAKED register_t __cdecl internal_632bf60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_632afb0
        test byte ptr ss : [esp+8], 1
        je public_632bf78
        push esi
        call public_6391d5a
        add esp, 4
        public_632bf78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x632bf60)
    }
}

#undef public_632bf78
