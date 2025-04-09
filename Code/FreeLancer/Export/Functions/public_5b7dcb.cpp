#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7793);
CLANG_FORWARD_PROC_SYMBOL(public_5b7dcb);

#define public_5b7de7 _public_5b7de7

PROC_DECLARE(0x5b7dcb, internal_5b7dcb, public_5b7dcb);
extern "C" NAKED register_t __cdecl internal_5b7dcb()
{
    __asm
    {
/*FIXUP push offset public_5e7260 @0x5b7dcb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7260
/*FIXUP push offset public_5e7248 @0x5b7dd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7248
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b7793
        test eax, eax
        je public_5b7de7
        jmp eax
        public_5b7de7 : nop
        push 0x7F
        call dword ptr ds : [public_5c6f6c]
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x5b7dcb)
    }
}

#undef public_5b7de7
