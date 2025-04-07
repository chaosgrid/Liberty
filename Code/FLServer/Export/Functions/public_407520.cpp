#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418c3c);

#define public_407538 _public_407538

PROC_DECLARE(0x407520, internal_407520, public_407520);
extern "C" NAKED register_t __cdecl internal_407520()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_418c3c
        test byte ptr ss : [esp+8], 1
        je public_407538
        push esi
        call public_418978
        add esp, 4
        public_407538 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x407520)
    }
}

#undef public_407538
