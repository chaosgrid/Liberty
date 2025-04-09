#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5641f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_564278 _public_564278

PROC_DECLARE(0x564260, internal_564260, public_564260);
extern "C" NAKED register_t __cdecl internal_564260()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5641f0
        test byte ptr ss : [esp+8], 1
        je public_564278
        push esi
        call public_5b7e1d
        add esp, 4
        public_564278 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x564260)
    }
}

#undef public_564278
