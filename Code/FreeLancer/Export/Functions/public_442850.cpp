#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_441a40);
CLANG_FORWARD_PROC_SYMBOL(public_442850);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_442875 _public_442875

PROC_DECLARE(0x442850, internal_442850, public_442850);
extern "C" NAKED register_t __cdecl internal_442850()
{
    __asm
    {
/*FIXUP push offset public_5cb548 @0x442850*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        call public_59da10
        add esp, 4
        test eax, eax
        je public_442875
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        test eax, eax
        je public_442875
        push 0
        mov ecx, eax
        call public_441a40
        public_442875 : nop
        ret 
        UNREACHABLE_TRAP(0x442850)
    }
}

#undef public_442875
