#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444960);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_444958 _public_444958

PROC_DECLARE(0x444940, internal_444940, public_444940);
extern "C" NAKED register_t __cdecl internal_444940()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_444960
        test byte ptr ss : [esp+8], 1
        je public_444958
        push esi
        call public_5b7e1d
        add esp, 4
        public_444958 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x444940)
    }
}

#undef public_444958
