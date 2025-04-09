#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559820);
CLANG_FORWARD_PROC_SYMBOL(public_55d4e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x559800, internal_559800, public_559800);
extern "C" NAKED register_t __cdecl internal_559800()
{
    __asm
    {
/*FIXUP push offset public_5e14f4 @0x559800*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e14f4
        mov ecx, offset public_679a54
        call public_55d4e0
/*FIXUP push offset _public_559820 @0x55980f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_559820
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x559800)
    }
}
