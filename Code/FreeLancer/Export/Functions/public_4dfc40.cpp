#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dfc40);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4dfc6b _public_4dfc6b
#define public_4dfc99 _public_4dfc99

PROC_DECLARE(0x4dfc40, internal_4dfc40, public_4dfc40);
extern "C" NAKED register_t __cdecl internal_4dfc40()
{
    __asm
    {
        mov ax, word ptr ss : [esp+8]
        push esi
        mov esi, ecx
        cmp ax, word ptr ds : [esi]
        je public_4dfc6b
        mov ecx, dword ptr ds : [esi+8]
        mov word ptr ds : [esi], ax
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [public_5c6368]
        cmp ax, word ptr ds : [edx]
        je public_4dfc6b
        push 0x18
        call public_5645c0
        add esp, 4
        public_4dfc6b : nop
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4dfc99
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+8]
        fst dword ptr ds : [esi+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4dfc99
        mov dword ptr ds : [esi+4], 0
        public_4dfc99 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4dfc40)
    }
}

#undef public_4dfc6b
#undef public_4dfc99
