#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cb3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62cb3a8 _public_62cb3a8

PROC_DECLARE(0x62cb390, internal_62cb390, public_62cb390);
extern "C" NAKED register_t __cdecl internal_62cb390()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62cb3b0
        test byte ptr ss : [esp+8], 1
        je public_62cb3a8
        push esi
        call public_6391d5a
        add esp, 4
        public_62cb3a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cb390)
    }
}

#undef public_62cb3a8
