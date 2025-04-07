#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63522e8 _public_63522e8

PROC_DECLARE(0x63522d0, internal_63522d0, public_63522d0);
extern "C" NAKED register_t __cdecl internal_63522d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_63522f0
        test byte ptr ss : [esp+8], 1
        je public_63522e8
        push esi
        call public_6391d5a
        add esp, 4
        public_63522e8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63522d0)
    }
}

#undef public_63522e8
