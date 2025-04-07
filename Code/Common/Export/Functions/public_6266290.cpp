#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6265560);
CLANG_FORWARD_PROC_SYMBOL(public_6266290);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62662ab _public_62662ab

PROC_DECLARE(0x6266290, internal_6266290, public_6266290);
extern "C" NAKED register_t __cdecl internal_6266290()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_63fbb70]
        test esi, esi
        je public_62662ab
        mov ecx, esi
        call public_6265560
        push esi
        call public_6391d5a
        add esp, 4
        public_62662ab : nop
        mov dword ptr ds : [public_63fbb70], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6266290)
    }
}

#undef public_62662ab
