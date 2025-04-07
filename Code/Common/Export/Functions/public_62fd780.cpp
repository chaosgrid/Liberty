#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fd798 _public_62fd798

PROC_DECLARE(0x62fd780, internal_62fd780, public_62fd780);
extern "C" NAKED register_t __cdecl internal_62fd780()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62fd7a0
        test byte ptr ss : [esp+8], 1
        je public_62fd798
        push esi
        call public_6391d5a
        add esp, 4
        public_62fd798 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62fd780)
    }
}

#undef public_62fd798
