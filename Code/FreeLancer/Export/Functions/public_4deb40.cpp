#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dde70);
CLANG_FORWARD_PROC_SYMBOL(public_4deb40);

#define public_4deb50 _public_4deb50
#define public_4deb5e _public_4deb5e

PROC_DECLARE(0x4deb40, internal_4deb40, public_4deb40);
extern "C" NAKED register_t __cdecl internal_4deb40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_4deb5e
        mov edi, edi
        public_4deb50 : nop
        mov ecx, esi
        call public_4dde70
        add esi, 0x24
        cmp esi, edi
        jne public_4deb50
        public_4deb5e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4deb40)
    }
}

#undef public_4deb50
#undef public_4deb5e
