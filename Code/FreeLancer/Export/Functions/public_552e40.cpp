#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd20);
CLANG_FORWARD_PROC_SYMBOL(public_552e60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x552e40, internal_552e40, public_552e40);
extern "C" NAKED register_t __cdecl internal_552e40()
{
    __asm
    {
        mov ecx, offset public_6798ac
        call public_41dd20
/*FIXUP push offset _public_552e60 @0x552e4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_552e60
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x552e40)
    }
}
