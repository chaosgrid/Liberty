#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f760);

PROC_DECLARE(0x6f57dd0, internal_6f57dd0, public_6f57dd0);
extern "C" NAKED register_t __cdecl internal_6f57dd0()
{
    __asm
    {
        push 0xB
/*FIXUP push offset public_6f61b98 @0x6f57dd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61b98
        call public_6f4f760
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f57dd0)
    }
}
