#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f41a18 _public_6f41a18

PROC_DECLARE(0x6f41a00, internal_6f41a00, public_6f41a00);
extern "C" NAKED register_t __cdecl internal_6f41a00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f41a20
        test byte ptr ss : [esp+8], 1
        je public_6f41a18
        push esi
        call public_6f57e26
        add esp, 4
        public_6f41a18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f41a00)
    }
}

#undef public_6f41a18
