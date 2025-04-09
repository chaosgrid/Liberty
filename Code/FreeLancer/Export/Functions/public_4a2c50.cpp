#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2c50);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

PROC_DECLARE(0x4a2c50, internal_4a2c50, public_4a2c50);
extern "C" NAKED register_t __cdecl internal_4a2c50()
{
    __asm
    {
/*FIXUP push offset public_5cb130 @0x4a2c50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb130
        call public_59da10
        add esp, 4
        test eax, eax
        setne al
        ret 
        UNREACHABLE_TRAP(0x4a2c50)
    }
}
