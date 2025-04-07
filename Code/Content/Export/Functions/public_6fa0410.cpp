#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0410);

#define public_6fa0420 _public_6fa0420
#define public_6fa042e _public_6fa042e

PROC_DECLARE(0x6fa0410, internal_6fa0410, public_6fa0410);
extern "C" NAKED register_t __cdecl internal_6fa0410()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6fa042e
        mov edi, edi
        public_6fa0420 : nop
        mov ecx, esi
        call public_6eb7d10
        add esi, 0x18
        cmp esi, edi
        jne public_6fa0420
        public_6fa042e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6fa0410)
    }
}

#undef public_6fa0420
#undef public_6fa042e
