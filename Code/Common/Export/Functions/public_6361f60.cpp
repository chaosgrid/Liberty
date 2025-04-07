#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6361ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6361f78 _public_6361f78

PROC_DECLARE(0x6361f60, internal_6361f60, public_6361f60);
extern "C" NAKED register_t __cdecl internal_6361f60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6361ff0
        test byte ptr ss : [esp+8], 1
        je public_6361f78
        push esi
        call public_6391d5a
        add esp, 4
        public_6361f78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6361f60)
    }
}

#undef public_6361f78
