#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56b050);
CLANG_FORWARD_PROC_SYMBOL(public_56d4e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x56b030, internal_56b030, public_56b030);
extern "C" NAKED register_t __cdecl internal_56b030()
{
    __asm
    {
        mov ecx, offset public_67ae10
        call public_56b050
/*FIXUP push offset _public_56d4e0 @0x56b03a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_56d4e0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x56b030)
    }
}
