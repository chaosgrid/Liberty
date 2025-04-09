#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7793);
CLANG_FORWARD_PROC_SYMBOL(public_5b7d67);

#define public_5b7d83 _public_5b7d83

PROC_DECLARE(0x5b7d67, internal_5b7d67, public_5b7d67);
extern "C" NAKED register_t __cdecl internal_5b7d67()
{
    __asm
    {
/*FIXUP push offset public_5e72a0 @0x5b7d67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e72a0
/*FIXUP push offset public_5e7284 @0x5b7d6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7284
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b7793
        test eax, eax
        je public_5b7d83
        jmp eax
        public_5b7d83 : nop
        push 0x7F
        call dword ptr ds : [public_5c6f6c]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x5b7d67)
    }
}

#undef public_5b7d83
