#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67162d9);
CLANG_FORWARD_PROC_SYMBOL(public_6716940);

#define public_671695c _public_671695c

PROC_DECLARE(0x6716940, internal_6716940, public_6716940);
extern "C" NAKED register_t __cdecl internal_6716940()
{
    __asm
    {
/*FIXUP push offset public_671728c @0x6716940*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671728c
/*FIXUP push offset public_6717280 @0x6716945*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717280
        call dword ptr ds : [public_6717080]
        push eax
        call public_67162d9
        test eax, eax
        je public_671695c
        jmp eax
        public_671695c : nop
        push 0x7F
        call dword ptr ds : [public_671709c]
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x6716940)
    }
}

#undef public_671695c
