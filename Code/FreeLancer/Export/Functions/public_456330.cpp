#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_456350);
CLANG_FORWARD_PROC_SYMBOL(public_456360);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x456330, internal_456330, public_456330);
extern "C" NAKED register_t __cdecl internal_456330()
{
    __asm
    {
        mov ecx, offset public_66d2d0
        call public_456360
/*FIXUP push offset _public_456350 @0x45633a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_456350
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x456330)
    }
}
