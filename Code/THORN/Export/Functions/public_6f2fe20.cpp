#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fe40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f2fe38 _public_6f2fe38

PROC_DECLARE(0x6f2fe20, internal_6f2fe20, public_6f2fe20);
extern "C" NAKED register_t __cdecl internal_6f2fe20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f2fe40
        test byte ptr ss : [esp+8], 1
        je public_6f2fe38
        push esi
        call public_6f57e26
        add esp, 4
        public_6f2fe38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f2fe20)
    }
}

#undef public_6f2fe38
