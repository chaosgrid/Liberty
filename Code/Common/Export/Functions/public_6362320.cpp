#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6362340);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6362338 _public_6362338

PROC_DECLARE(0x6362320, internal_6362320, public_6362320);
extern "C" NAKED register_t __cdecl internal_6362320()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6362340
        test byte ptr ss : [esp+8], 1
        je public_6362338
        push esi
        call public_6391d5a
        add esp, 4
        public_6362338 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6362320)
    }
}

#undef public_6362338
