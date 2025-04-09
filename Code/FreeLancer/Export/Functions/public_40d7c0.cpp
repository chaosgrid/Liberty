#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407000);
CLANG_FORWARD_PROC_SYMBOL(public_40d7c0);

#define public_40d7d0 _public_40d7d0
#define public_40d7de _public_40d7de

PROC_DECLARE(0x40d7c0, internal_40d7c0, public_40d7c0);
extern "C" NAKED register_t __cdecl internal_40d7c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_40d7de
        mov edi, edi
        public_40d7d0 : nop
        mov ecx, esi
        call public_407000
        add esi, 0x24
        cmp esi, edi
        jne public_40d7d0
        public_40d7de : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x40d7c0)
    }
}

#undef public_40d7d0
#undef public_40d7de
