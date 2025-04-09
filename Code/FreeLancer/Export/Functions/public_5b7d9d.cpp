#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7793);
CLANG_FORWARD_PROC_SYMBOL(public_5b7d9d);

#define public_5b7dbd _public_5b7dbd

PROC_DECLARE(0x5b7d9d, internal_5b7d9d, public_5b7d9d);
extern "C" NAKED register_t __cdecl internal_5b7d9d()
{
    __asm
    {
        push ebp
        mov ebp, esp
/*FIXUP push offset public_5e7254 @0x5b7da0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7254
/*FIXUP push offset public_5e7248 @0x5b7da5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7248
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b7793
        test eax, eax
        je public_5b7dbd
        pop ebp
        jmp eax
        public_5b7dbd : nop
        push 0x7F
        call dword ptr ds : [public_5c6f6c]
        xor eax, eax
        pop ebp
        ret 0x20
        UNREACHABLE_TRAP(0x5b7d9d)
    }
}

#undef public_5b7dbd
