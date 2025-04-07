#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3d42);

PROC_DECLARE(0x6ad3d42, internal_6ad3d42, public_6ad3d42);
extern "C" NAKED register_t __cdecl internal_6ad3d42()
{
    __asm
    {
/*FIXUP push offset public_6addc38 @0x6ad3d42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6addc38
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call public_6ad3bc0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ad3d42)
    }
}
