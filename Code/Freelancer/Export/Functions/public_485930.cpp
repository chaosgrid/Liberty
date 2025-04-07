#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_485950);
CLANG_FORWARD_PROC_SYMBOL(public_488ca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x485930, internal_485930, public_485930);
extern "C" NAKED register_t __cdecl internal_485930()
{
    __asm
    {
/*FIXUP push offset public_5d1d38 @0x485930*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d1d38
        mov ecx, offset public_671f14
        call public_488ca0
/*FIXUP push offset _public_485950 @0x48593f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_485950
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x485930)
    }
}
