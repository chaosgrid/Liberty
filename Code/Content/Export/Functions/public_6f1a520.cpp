#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1a5c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1a538 _public_6f1a538

PROC_DECLARE(0x6f1a520, internal_6f1a520, public_6f1a520);
extern "C" NAKED register_t __cdecl internal_6f1a520()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f1a5c0
        test byte ptr ss : [esp+8], 1
        je public_6f1a538
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f1a538 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f1a520)
    }
}

#undef public_6f1a538
