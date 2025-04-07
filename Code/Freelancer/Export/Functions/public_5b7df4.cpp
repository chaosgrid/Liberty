#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7793);
CLANG_FORWARD_PROC_SYMBOL(public_5b7df4);

#define public_5b7e10 _public_5b7e10

PROC_DECLARE(0x5b7df4, internal_5b7df4, public_5b7df4);
extern "C" NAKED register_t __cdecl internal_5b7df4()
{
    __asm
    {
/*FIXUP push offset public_5e7270 @0x5b7df4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7270
/*FIXUP push offset public_5e7248 @0x5b7df9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7248
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b7793
        test eax, eax
        je public_5b7e10
        jmp eax
        public_5b7e10 : nop
        push 0x7F
        call dword ptr ds : [public_5c6f6c]
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x5b7df4)
    }
}

#undef public_5b7e10
