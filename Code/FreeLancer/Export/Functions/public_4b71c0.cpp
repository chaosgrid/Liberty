#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_47ad20);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4b71d2 _public_4b71d2
#define public_4b71df _public_4b71df

PROC_DECLARE(0x4b71c0, internal_4b71c0, public_4b71c0);
extern "C" NAKED register_t __cdecl internal_4b71c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_45a740
        test al, al
        je public_4b71d2
        xor al, al
        pop esi
        ret 4
        public_4b71d2 : nop
        cmp dword ptr ss : [esp+8], 0xF
        je public_4b71df
        xor al, al
        pop esi
        ret 4
        public_4b71df : nop
        push 0xE
        call public_5645c0
        add esp, 4
        lea ecx, ds:[esi-0x974]
        call public_47ad20
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4b71c0)
    }
}

#undef public_4b71d2
#undef public_4b71df
