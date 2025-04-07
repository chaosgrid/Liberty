#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67162d9);
CLANG_FORWARD_PROC_SYMBOL(public_67168d0);

#define public_67168f0 _public_67168f0

PROC_DECLARE(0x67168d0, internal_67168d0, public_67168d0);
extern "C" NAKED register_t __cdecl internal_67168d0()
{
    __asm
    {
        push ebp
        mov ebp, esp
/*FIXUP push offset public_671726c @0x67168d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671726c
/*FIXUP push offset public_6717240 @0x67168d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call dword ptr ds : [public_6717080]
        push eax
        call public_67162d9
        test eax, eax
        je public_67168f0
        pop ebp
        jmp eax
        public_67168f0 : nop
        push 0x7F
        call dword ptr ds : [public_671709c]
        xor eax, eax
        pop ebp
        ret 0x20
        UNREACHABLE_TRAP(0x67168d0)
    }
}

#undef public_67168f0
