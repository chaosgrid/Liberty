#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91310);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d91338 _public_6d91338

PROC_DECLARE(0x6d91320, internal_6d91320, public_6d91320);
extern "C" NAKED register_t __cdecl internal_6d91320()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d91310
        test byte ptr ss : [esp+8], 1
        je public_6d91338
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d91338 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d91320)
    }
}

#undef public_6d91338
