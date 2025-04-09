#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7793);
CLANG_FORWARD_PROC_SYMBOL(public_5b7d3e);

#define public_5b7d5a _public_5b7d5a

PROC_DECLARE(0x5b7d3e, internal_5b7d3e, public_5b7d3e);
extern "C" NAKED register_t __cdecl internal_5b7d3e()
{
    __asm
    {
/*FIXUP push offset public_5e7320 @0x5b7d3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7320
/*FIXUP push offset public_5e7284 @0x5b7d43*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7284
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b7793
        test eax, eax
        je public_5b7d5a
        jmp eax
        public_5b7d5a : nop
        push 0x7F
        call dword ptr ds : [public_5c6f6c]
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x5b7d3e)
    }
}

#undef public_5b7d5a
