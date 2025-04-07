#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41210);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f41208 _public_6f41208

PROC_DECLARE(0x6f411f0, internal_6f411f0, public_6f411f0);
extern "C" NAKED register_t __cdecl internal_6f411f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f41210
        test byte ptr ss : [esp+8], 1
        je public_6f41208
        push esi
        call public_6f57e26
        add esp, 4
        public_6f41208 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f411f0)
    }
}

#undef public_6f41208
