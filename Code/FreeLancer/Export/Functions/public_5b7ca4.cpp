#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7793);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ca4);

#define public_5b7cc4 _public_5b7cc4

PROC_DECLARE(0x5b7ca4, internal_5b7ca4, public_5b7ca4);
extern "C" NAKED register_t __cdecl internal_5b7ca4()
{
    __asm
    {
        push ebp
        mov ebp, esp
/*FIXUP push offset public_5e72ec @0x5b7ca7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e72ec
/*FIXUP push offset public_5e72bc @0x5b7cac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e72bc
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b7793
        test eax, eax
        je public_5b7cc4
        pop ebp
        jmp eax
        public_5b7cc4 : nop
        push 0x7F
        call dword ptr ds : [public_5c6f6c]
        xor eax, eax
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x5b7ca4)
    }
}

#undef public_5b7cc4
