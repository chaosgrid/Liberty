#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab100);
CLANG_FORWARD_PROC_SYMBOL(public_6eade80);

#define public_6eade90 _public_6eade90
#define public_6eade9e _public_6eade9e

PROC_DECLARE(0x6eade80, internal_6eade80, public_6eade80);
extern "C" NAKED register_t __cdecl internal_6eade80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6eade9e
        mov edi, edi
        public_6eade90 : nop
        mov ecx, esi
        call public_6eab100
        add esi, 0x14
        cmp esi, edi
        jne public_6eade90
        public_6eade9e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6eade80)
    }
}

#undef public_6eade90
#undef public_6eade9e
