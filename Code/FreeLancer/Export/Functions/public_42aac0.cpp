#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42aae0);
CLANG_FORWARD_PROC_SYMBOL(public_42abc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x42aac0, internal_42aac0, public_42aac0);
extern "C" NAKED register_t __cdecl internal_42aac0()
{
    __asm
    {
        mov ecx, offset public_667cc0
        call public_42abc0
/*FIXUP push offset _public_42aae0 @0x42aaca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_42aae0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x42aac0)
    }
}
