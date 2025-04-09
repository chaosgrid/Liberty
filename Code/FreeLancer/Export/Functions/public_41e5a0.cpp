#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41e5a0);

#define public_41e5ad _public_41e5ad
#define public_41e5b9 _public_41e5b9

PROC_DECLARE(0x41e5a0, internal_41e5a0, public_41e5a0);
extern "C" NAKED register_t __cdecl internal_41e5a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jge public_41e5ad
        xor eax, eax
        ret 4
        public_41e5ad : nop
        cmp eax, 0xFF
        jle public_41e5b9
        mov eax, 0xFF
        public_41e5b9 : nop
        ret 4
        UNREACHABLE_TRAP(0x41e5a0)
    }
}

#undef public_41e5ad
#undef public_41e5b9
