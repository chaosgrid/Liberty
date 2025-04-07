#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204630);
CLANG_FORWARD_PROC_SYMBOL(public_623e890);
CLANG_FORWARD_PROC_SYMBOL(public_6246176);

PROC_DECLARE(0x6204610, internal_6204610, public_6204610);
extern "C" NAKED register_t __cdecl internal_6204610()
{
    __asm
    {
        mov ecx, offset public_6257954
        call public_623e890
/*FIXUP push offset _public_6204630 @0x620461a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6204630
        call public_6246176
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6204610)
    }
}
