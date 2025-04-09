#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45aff0);
CLANG_FORWARD_PROC_SYMBOL(public_45b310);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_45b338 _public_45b338
#define public_45b33f _public_45b33f

PROC_DECLARE(0x45b310, internal_45b310, public_45b310);
extern "C" NAKED register_t __cdecl internal_45b310()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66d398]
        test ecx, ecx
        jne public_45b338
        push ecx
        push ecx
/*FIXUP push offset public_5ce83c @0x45b31c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce83c
/*FIXUP push offset public_5ce83c @0x45b321*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce83c
        call public_59db20
        mov ecx, dword ptr ds : [public_66d398]
        add esp, 0x10
        test ecx, ecx
        je public_45b33f
        public_45b338 : nop
        push 0
        call public_45aff0
        public_45b33f : nop
        ret 
        UNREACHABLE_TRAP(0x45b310)
    }
}

#undef public_45b338
#undef public_45b33f
