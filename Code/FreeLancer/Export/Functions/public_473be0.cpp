#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_473be0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);

PROC_DECLARE(0x473be0, internal_473be0, public_473be0);
extern "C" NAKED register_t __cdecl internal_473be0()
{
    __asm
    {
/*FIXUP push offset public_5d0518 @0x473be0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0518
        call public_59d9c0
        add esp, 4
        test eax, eax
        setne al
        ret 
        UNREACHABLE_TRAP(0x473be0)
    }
}
