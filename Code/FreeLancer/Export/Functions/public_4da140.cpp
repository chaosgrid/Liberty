#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4da160);
CLANG_FORWARD_PROC_SYMBOL(public_4de7d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4da140, internal_4da140, public_4da140);
extern "C" NAKED register_t __cdecl internal_4da140()
{
    __asm
    {
/*FIXUP push offset public_5d84b0 @0x4da140*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d84b0
        mov ecx, offset public_674a5c
        call public_4de7d0
/*FIXUP push offset _public_4da160 @0x4da14f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4da160
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4da140)
    }
}
