#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed2c18 _public_6ed2c18

PROC_DECLARE(0x6ed2c00, internal_6ed2c00, public_6ed2c00);
extern "C" NAKED register_t __cdecl internal_6ed2c00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ed2c20
        test byte ptr ss : [esp+8], 1
        je public_6ed2c18
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ed2c18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ed2c00)
    }
}

#undef public_6ed2c18
