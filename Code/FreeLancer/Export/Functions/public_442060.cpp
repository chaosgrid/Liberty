#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442060);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_442089 _public_442089
#define public_44209e _public_44209e

PROC_DECLARE(0x442060, internal_442060, public_442060);
extern "C" NAKED register_t __cdecl internal_442060()
{
    __asm
    {
/*FIXUP push offset public_5cb548 @0x442060*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_442089
        push eax
        push eax
/*FIXUP push offset public_5cb548 @0x442073*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
/*FIXUP push offset public_5cb548 @0x442078*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        call public_59db20
        add esp, 0x10
        test eax, eax
        je public_44209e
        public_442089 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_44209e
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        jmp dword ptr ds : [edx+0xB4]
        public_44209e : nop
        ret 
        UNREACHABLE_TRAP(0x442060)
    }
}

#undef public_442089
#undef public_44209e
