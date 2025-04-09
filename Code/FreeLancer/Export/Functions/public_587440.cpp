#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_587440);

#define public_587450 _public_587450
#define public_58745e _public_58745e

PROC_DECLARE(0x587440, internal_587440, public_587440);
extern "C" NAKED register_t __cdecl internal_587440()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_58745e
        mov edi, edi
        public_587450 : nop
        mov ecx, esi
        call public_455e90
        add esi, 0x20
        cmp esi, edi
        jne public_587450
        public_58745e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x587440)
    }
}

#undef public_587450
#undef public_58745e
