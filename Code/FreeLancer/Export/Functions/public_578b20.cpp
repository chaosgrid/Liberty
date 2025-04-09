#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_578b20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_578b38 _public_578b38

PROC_DECLARE(0x578b20, internal_578b20, public_578b20);
extern "C" NAKED register_t __cdecl internal_578b20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52d3f0
        test byte ptr ss : [esp+8], 1
        je public_578b38
        push esi
        call public_5b7e1d
        add esp, 4
        public_578b38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x578b20)
    }
}

#undef public_578b38
