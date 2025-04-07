#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67162d9);
CLANG_FORWARD_PROC_SYMBOL(public_67168fe);

#define public_671691a _public_671691a

PROC_DECLARE(0x67168fe, internal_67168fe, public_67168fe);
extern "C" NAKED register_t __cdecl internal_67168fe()
{
    __asm
    {
/*FIXUP push offset public_6717230 @0x67168fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717230
/*FIXUP push offset public_6717224 @0x6716903*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717224
        call dword ptr ds : [public_6717080]
        push eax
        call public_67162d9
        test eax, eax
        je public_671691a
        jmp eax
        public_671691a : nop
        push 0x7F
        call dword ptr ds : [public_671709c]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x67168fe)
    }
}

#undef public_671691a
