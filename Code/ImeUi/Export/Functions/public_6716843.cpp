#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67162d9);
CLANG_FORWARD_PROC_SYMBOL(public_6716843);

#define public_671685f _public_671685f

PROC_DECLARE(0x6716843, internal_6716843, public_6716843);
extern "C" NAKED register_t __cdecl internal_6716843()
{
    __asm
    {
/*FIXUP push offset public_6717310 @0x6716843*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717310
/*FIXUP push offset public_6717240 @0x6716848*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call dword ptr ds : [public_6717080]
        push eax
        call public_67162d9
        test eax, eax
        je public_671685f
        jmp eax
        public_671685f : nop
        push 0x7F
        call dword ptr ds : [public_671709c]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6716843)
    }
}

#undef public_671685f
