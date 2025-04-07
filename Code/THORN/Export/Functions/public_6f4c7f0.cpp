#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c830);

#define public_6f4c801 _public_6f4c801
#define public_6f4c816 _public_6f4c816

PROC_DECLARE(0x6f4c7f0, internal_6f4c7f0, public_6f4c7f0);
extern "C" NAKED register_t __cdecl internal_6f4c7f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f4c801
        push eax
        call public_6f4c830
        add esp, 4
        public_6f4c801 : nop
        mov eax, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [eax+0x18]
        test eax, eax
        je public_6f4c816
        push 1
        push eax
        call dword ptr ds : [public_6f5a09c]
/*FIXUP public_6f4c816 : nop
        push offset public_6f60568 @0x6f4c816*/
  FIXUP public_6f4c816 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60568
        call public_6f4c830
        add esp, 4
        push 1
        call dword ptr ds : [public_6f5a098]
        UNREACHABLE_TRAP(0x6f4c7f0)
    }
}

#undef public_6f4c801
#undef public_6f4c816
