#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45aff0);
CLANG_FORWARD_PROC_SYMBOL(public_45b490);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_45b4b8 _public_45b4b8
#define public_45b4bf _public_45b4bf

PROC_DECLARE(0x45b490, internal_45b490, public_45b490);
extern "C" NAKED register_t __cdecl internal_45b490()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66d398]
        test ecx, ecx
        jne public_45b4b8
        push ecx
        push ecx
/*FIXUP push offset public_5ce83c @0x45b49c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce83c
/*FIXUP push offset public_5ce83c @0x45b4a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce83c
        call public_59db20
        mov ecx, dword ptr ds : [public_66d398]
        add esp, 0x10
        test ecx, ecx
        je public_45b4bf
        public_45b4b8 : nop
        push 1
        call public_45aff0
        public_45b4bf : nop
        ret 
        UNREACHABLE_TRAP(0x45b490)
    }
}

#undef public_45b4b8
#undef public_45b4bf
