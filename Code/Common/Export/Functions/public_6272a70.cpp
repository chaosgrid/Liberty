#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272a70);
CLANG_FORWARD_PROC_SYMBOL(public_6272db0);

#define public_6272a80 _public_6272a80
#define public_6272a8e _public_6272a8e

PROC_DECLARE(0x6272a70, internal_6272a70, public_6272a70);
extern "C" NAKED register_t __cdecl internal_6272a70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6272a8e
        mov edi, edi
        public_6272a80 : nop
        mov ecx, esi
        call public_6272db0
        add esi, 0x14
        cmp esi, edi
        jne public_6272a80
        public_6272a8e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6272a70)
    }
}

#undef public_6272a80
#undef public_6272a8e
