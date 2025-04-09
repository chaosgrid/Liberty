#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4127a0);
CLANG_FORWARD_PROC_SYMBOL(public_4127c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x412780, internal_412780, public_412780);
extern "C" NAKED register_t __cdecl internal_412780()
{
    __asm
    {
        mov ecx, offset public_616640
        call public_4127a0
/*FIXUP push offset _public_4127c0 @0x41278a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4127c0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x412780)
    }
}
