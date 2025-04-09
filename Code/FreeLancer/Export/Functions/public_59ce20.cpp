#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59cf70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59ce38 _public_59ce38

PROC_DECLARE(0x59ce20, internal_59ce20, public_59ce20);
extern "C" NAKED register_t __cdecl internal_59ce20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59cf70
        test byte ptr ss : [esp+8], 1
        je public_59ce38
        push esi
        call public_5b7e1d
        add esp, 4
        public_59ce38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59ce20)
    }
}

#undef public_59ce38
