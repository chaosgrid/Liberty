#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

PROC_DECLARE(0x44d5e0, internal_44d5e0, public_44d5e0);
extern "C" NAKED register_t __cdecl internal_44d5e0()
{
    __asm
    {
        push 0
        push 0
/*FIXUP push offset public_5cb6a0 @0x44d5e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6a0
/*FIXUP push offset public_5cb6a0 @0x44d5e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6a0
        call public_59db20
        push 1
        call public_41dda0
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x44d5e0)
    }
}
