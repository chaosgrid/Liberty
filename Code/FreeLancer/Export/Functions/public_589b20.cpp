#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_589b40);
CLANG_FORWARD_PROC_SYMBOL(public_58c1c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x589b20, internal_589b20, public_589b20);
extern "C" NAKED register_t __cdecl internal_589b20()
{
    __asm
    {
/*FIXUP push offset public_5e4f08 @0x589b20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4f08
        mov ecx, offset public_67d860
        call public_58c1c0
/*FIXUP push offset _public_589b40 @0x589b2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_589b40
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x589b20)
    }
}
