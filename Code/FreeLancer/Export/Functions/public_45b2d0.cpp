#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45ae90);
CLANG_FORWARD_PROC_SYMBOL(public_45b2d0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_45b2f8 _public_45b2f8
#define public_45b302 _public_45b302

PROC_DECLARE(0x45b2d0, internal_45b2d0, public_45b2d0);
extern "C" NAKED register_t __cdecl internal_45b2d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66d398]
        test ecx, ecx
        jne public_45b2f8
        push ecx
        push ecx
/*FIXUP push offset public_5ce83c @0x45b2dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce83c
/*FIXUP push offset public_5ce83c @0x45b2e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce83c
        call public_59db20
        mov ecx, dword ptr ds : [public_66d398]
        add esp, 0x10
        test ecx, ecx
        je public_45b302
        public_45b2f8 : nop
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_45ae90
        public_45b302 : nop
        ret 
        UNREACHABLE_TRAP(0x45b2d0)
    }
}

#undef public_45b2f8
#undef public_45b302
