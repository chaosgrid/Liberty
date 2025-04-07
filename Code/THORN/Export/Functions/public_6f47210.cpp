#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47230);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f47228 _public_6f47228

PROC_DECLARE(0x6f47210, internal_6f47210, public_6f47210);
extern "C" NAKED register_t __cdecl internal_6f47210()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f47230
        test byte ptr ss : [esp+8], 1
        je public_6f47228
        push esi
        call public_6f57e26
        add esp, 4
        public_6f47228 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f47210)
    }
}

#undef public_6f47228
