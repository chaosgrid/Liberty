#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45b1c0);
CLANG_FORWARD_PROC_SYMBOL(public_45b340);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_45b368 _public_45b368
#define public_45b372 _public_45b372

PROC_DECLARE(0x45b340, internal_45b340, public_45b340);
extern "C" NAKED register_t __cdecl internal_45b340()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66d398]
        test ecx, ecx
        jne public_45b368
        push ecx
        push ecx
/*FIXUP push offset public_5ce83c @0x45b34c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce83c
/*FIXUP push offset public_5ce83c @0x45b351*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce83c
        call public_59db20
        mov ecx, dword ptr ds : [public_66d398]
        add esp, 0x10
        test ecx, ecx
        je public_45b372
        public_45b368 : nop
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_45b1c0
        public_45b372 : nop
        ret 
        UNREACHABLE_TRAP(0x45b340)
    }
}

#undef public_45b368
#undef public_45b372
