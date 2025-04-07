#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_4135a0);
CLANG_FORWARD_PROC_SYMBOL(public_418954);

PROC_DECLARE(0x4135a0, internal_4135a0, public_4135a0);
extern "C" NAKED register_t __cdecl internal_4135a0()
{
    __asm
    {
        call public_40cdc0
        mov ecx, dword ptr ds : [public_41baf8]
/*FIXUP push offset public_4277ec @0x4135ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4277ec
        call public_418954
        jmp public_40ce70
        UNREACHABLE_TRAP(0x4135a0)
    }
}
