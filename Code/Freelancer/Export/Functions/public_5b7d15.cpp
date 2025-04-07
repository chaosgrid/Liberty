#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7793);
CLANG_FORWARD_PROC_SYMBOL(public_5b7d15);

#define public_5b7d31 _public_5b7d31

PROC_DECLARE(0x5b7d15, internal_5b7d15, public_5b7d15);
extern "C" NAKED register_t __cdecl internal_5b7d15()
{
    __asm
    {
/*FIXUP push offset public_5e7290 @0x5b7d15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7290
/*FIXUP push offset public_5e7284 @0x5b7d1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7284
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b7793
        test eax, eax
        je public_5b7d31
        jmp eax
        public_5b7d31 : nop
        push 0x7F
        call dword ptr ds : [public_5c6f6c]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x5b7d15)
    }
}

#undef public_5b7d31
