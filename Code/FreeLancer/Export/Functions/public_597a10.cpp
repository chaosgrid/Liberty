#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_597a30);
CLANG_FORWARD_PROC_SYMBOL(public_597b50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x597a10, internal_597a10, public_597a10);
extern "C" NAKED register_t __cdecl internal_597a10()
{
    __asm
    {
/*FIXUP push offset public_5e53f4 @0x597a10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e53f4
        mov ecx, offset public_67d970
        call public_597b50
/*FIXUP push offset _public_597a30 @0x597a1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_597a30
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x597a10)
    }
}
