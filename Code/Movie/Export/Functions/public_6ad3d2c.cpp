#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3d2c);

PROC_DECLARE(0x6ad3d2c, internal_6ad3d2c, public_6ad3d2c);
extern "C" NAKED register_t __cdecl internal_6ad3d2c()
{
    __asm
    {
/*FIXUP push offset public_6addc20 @0x6ad3d2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6addc20
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call public_6ad3bc0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ad3d2c)
    }
}
