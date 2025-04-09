#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56d510);
CLANG_FORWARD_PROC_SYMBOL(public_572690);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x56d4f0, internal_56d4f0, public_56d4f0);
extern "C" NAKED register_t __cdecl internal_56d4f0()
{
    __asm
    {
        mov ecx, offset public_67ab20
        call public_56d510
/*FIXUP push offset _public_572690 @0x56d4fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_572690
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x56d4f0)
    }
}
