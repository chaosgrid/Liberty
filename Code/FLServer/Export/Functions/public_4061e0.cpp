#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406200);
CLANG_FORWARD_PROC_SYMBOL(public_406260);
CLANG_FORWARD_PROC_SYMBOL(public_419410);

PROC_DECLARE(0x4061e0, internal_4061e0, public_4061e0);
extern "C" NAKED register_t __cdecl internal_4061e0()
{
    __asm
    {
        push 0
        mov ecx, offset public_4260b0
        call public_406260
/*FIXUP push offset _public_406200 @0x4061ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_406200
        call public_419410
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4061e0)
    }
}
