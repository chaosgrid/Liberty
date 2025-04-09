#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dc40);
CLANG_FORWARD_PROC_SYMBOL(public_41dd20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x41dc20, internal_41dc20, public_41dc20);
extern "C" NAKED register_t __cdecl internal_41dc20()
{
    __asm
    {
        mov ecx, offset public_616728
        call public_41dd20
/*FIXUP push offset _public_41dc40 @0x41dc2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41dc40
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x41dc20)
    }
}
