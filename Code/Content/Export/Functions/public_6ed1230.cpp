#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1230);
CLANG_FORWARD_PROC_SYMBOL(public_6ed36d0);

#define public_6ed1240 _public_6ed1240
#define public_6ed124e _public_6ed124e

PROC_DECLARE(0x6ed1230, internal_6ed1230, public_6ed1230);
extern "C" NAKED register_t __cdecl internal_6ed1230()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6ed124e
        mov edi, edi
        public_6ed1240 : nop
        mov ecx, esi
        call public_6ed36d0
        add esi, 0x3C
        cmp esi, edi
        jne public_6ed1240
        public_6ed124e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ed1230)
    }
}

#undef public_6ed1240
#undef public_6ed124e
