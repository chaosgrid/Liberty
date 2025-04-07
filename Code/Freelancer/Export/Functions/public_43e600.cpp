#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43e600);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_43e62c _public_43e62c
#define public_43e658 _public_43e658
#define public_43e684 _public_43e684
#define public_43e6b0 _public_43e6b0

PROC_DECLARE(0x43e600, internal_43e600, public_43e600);
extern "C" NAKED register_t __cdecl internal_43e600()
{
    __asm
    {
/*FIXUP push offset public_5cb6cc @0x43e600*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6cc
        call public_59da10
        add esp, 4
        test eax, eax
        je public_43e62c
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_43e62c
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push 0x4E
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
/*FIXUP public_43e62c : nop
        push offset public_5cb6bc @0x43e62c*/
  FIXUP public_43e62c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6bc
        call public_59da10
        add esp, 4
        test eax, eax
        je public_43e658
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_43e658
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push 0x4E
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
/*FIXUP public_43e658 : nop
        push offset public_5cb6b4 @0x43e658*/
  FIXUP public_43e658 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6b4
        call public_59da10
        add esp, 4
        test eax, eax
        je public_43e684
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_43e684
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push 0x4E
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
/*FIXUP public_43e684 : nop
        push offset public_5cb6a0 @0x43e684*/
  FIXUP public_43e684 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6a0
        call public_59da10
        add esp, 4
        test eax, eax
        je public_43e6b0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_43e6b0
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push 0x4E
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        public_43e6b0 : nop
        ret 
        UNREACHABLE_TRAP(0x43e600)
    }
}

#undef public_43e62c
#undef public_43e658
#undef public_43e684
#undef public_43e6b0
