#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f630);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);

#define public_6f507eb _public_6f507eb
#define public_6f50807 _public_6f50807

PROC_DECLARE(0x6f507d0, internal_6f507d0, public_6f507d0);
extern "C" NAKED register_t __cdecl internal_6f507d0()
{
    __asm
    {
        push 1
        call public_6f4b090
        add esp, 4
        test eax, eax
        je public_6f507eb
        push eax
        call public_6f4b410
        add esp, 4
        test eax, eax
        je public_6f50807
        public_6f507eb : nop
        push 0
/*FIXUP push offset public_6f61e0c @0x6f507ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61e0c
        push 2
        call public_6f4f630
        push eax
/*FIXUP push offset public_6f60dfc @0x6f507fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60dfc
        call public_6f4f7a0
        add esp, 0x14
        public_6f50807 : nop
        ret 
        UNREACHABLE_TRAP(0x6f507d0)
    }
}

#undef public_6f507eb
#undef public_6f50807
