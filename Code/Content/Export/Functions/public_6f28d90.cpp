#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57740);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f67090);

#define public_6f28db2 _public_6f28db2

PROC_DECLARE(0x6f28d90, internal_6f28d90, public_6f28d90);
extern "C" NAKED register_t __cdecl internal_6f28d90()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+0x154], 0xFFFFFFFF
        jne public_6f28db2
        mov ecx, esi
        call public_6f57740
        mov ecx, esi
        call public_6f57b00
        mov al, 1
        pop esi
        ret 4
        public_6f28db2 : nop
        push esi
        call public_6f67090
        add esp, 4
        mov ecx, esi
        call public_6f57b00
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f28d90)
    }
}

#undef public_6f28db2
