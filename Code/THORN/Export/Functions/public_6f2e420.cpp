#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d490);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e420);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f2e438 _public_6f2e438

PROC_DECLARE(0x6f2e420, internal_6f2e420, public_6f2e420);
extern "C" NAKED register_t __cdecl internal_6f2e420()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f2d490
        test byte ptr ss : [esp+8], 1
        je public_6f2e438
        push esi
        call public_6f57e26
        add esp, 4
        public_6f2e438 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f2e420)
    }
}

#undef public_6f2e438
