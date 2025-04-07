#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67162d9);
CLANG_FORWARD_PROC_SYMBOL(public_6716879);

#define public_6716895 _public_6716895

PROC_DECLARE(0x6716879, internal_6716879, public_6716879);
extern "C" NAKED register_t __cdecl internal_6716879()
{
    __asm
    {
/*FIXUP push offset public_67172cc @0x6716879*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67172cc
/*FIXUP push offset public_6717240 @0x671687e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call dword ptr ds : [public_6717080]
        push eax
        call public_67162d9
        test eax, eax
        je public_6716895
        jmp eax
        public_6716895 : nop
        push 0x7F
        call dword ptr ds : [public_671709c]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6716879)
    }
}

#undef public_6716895
