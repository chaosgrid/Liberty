#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4778b0);
CLANG_FORWARD_PROC_SYMBOL(public_4857f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x477890, internal_477890, public_477890);
extern "C" NAKED register_t __cdecl internal_477890()
{
    __asm
    {
/*FIXUP push offset public_5cb7c4 @0x477890*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7c4
        mov ecx, offset public_671c7c
        call public_4857f0
/*FIXUP push offset _public_4778b0 @0x47789f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4778b0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x477890)
    }
}
