#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62adec0);
CLANG_FORWARD_PROC_SYMBOL(public_62adf70);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62adea0, internal_62adea0, public_62adea0);
extern "C" NAKED register_t __cdecl internal_62adea0()
{
    __asm
    {
        call public_62adec0
/*FIXUP push offset _public_62adf70 @0x62adea5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62adf70
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62adea0)
    }
}
