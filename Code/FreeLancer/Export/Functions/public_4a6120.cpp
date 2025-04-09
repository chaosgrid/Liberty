#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a6140);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4a6138 _public_4a6138

PROC_DECLARE(0x4a6120, internal_4a6120, public_4a6120);
extern "C" NAKED register_t __cdecl internal_4a6120()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4a6140
        test byte ptr ss : [esp+8], 1
        je public_4a6138
        push esi
        call public_5b7e1d
        add esp, 4
        public_4a6138 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4a6120)
    }
}

#undef public_4a6138
