#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67162d9);
CLANG_FORWARD_PROC_SYMBOL(public_671681a);

#define public_6716836 _public_6716836

PROC_DECLARE(0x671681a, internal_671681a, public_671681a);
extern "C" NAKED register_t __cdecl internal_671681a()
{
    __asm
    {
/*FIXUP push offset public_671731c @0x671681a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671731c
/*FIXUP push offset public_6717240 @0x671681f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call dword ptr ds : [public_6717080]
        push eax
        call public_67162d9
        test eax, eax
        je public_6716836
        jmp eax
        public_6716836 : nop
        push 0x7F
        call dword ptr ds : [public_671709c]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x671681a)
    }
}

#undef public_6716836
