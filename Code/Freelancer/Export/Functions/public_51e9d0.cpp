#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bc10);

#define public_51e9e6 _public_51e9e6

PROC_DECLARE(0x51e9d0, internal_51e9d0, public_51e9d0);
extern "C" NAKED register_t __cdecl internal_51e9d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [eax], 0xF
        jne public_51e9e6
/*FIXUP push offset public_5cc404 @0x51e9d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc404
        call public_54bc10
        add esp, 4
        public_51e9e6 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x51e9d0)
    }
}

#undef public_51e9e6
