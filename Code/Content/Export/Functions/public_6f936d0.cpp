#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7820);
CLANG_FORWARD_PROC_SYMBOL(public_6f936d0);

#define public_6f936e0 _public_6f936e0
#define public_6f936f1 _public_6f936f1

PROC_DECLARE(0x6f936d0, internal_6f936d0, public_6f936d0);
extern "C" NAKED register_t __cdecl internal_6f936d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6f936f1
        mov edi, edi
        public_6f936e0 : nop
        mov ecx, esi
        call public_6ec7820
        add esi, 0x108
        cmp esi, edi
        jne public_6f936e0
        public_6f936f1 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f936d0)
    }
}

#undef public_6f936e0
#undef public_6f936f1
