#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67162d9);
CLANG_FORWARD_PROC_SYMBOL(public_67168a2);

#define public_67168c2 _public_67168c2

PROC_DECLARE(0x67168a2, internal_67168a2, public_67168a2);
extern "C" NAKED register_t __cdecl internal_67168a2()
{
    __asm
    {
        push ebp
        mov ebp, esp
/*FIXUP push offset public_67172fc @0x67168a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67172fc
/*FIXUP push offset public_6717240 @0x67168aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6717240
        call dword ptr ds : [public_6717080]
        push eax
        call public_67162d9
        test eax, eax
        je public_67168c2
        pop ebp
        jmp eax
        public_67168c2 : nop
        push 0x7F
        call dword ptr ds : [public_671709c]
        xor eax, eax
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x67168a2)
    }
}

#undef public_67168c2
