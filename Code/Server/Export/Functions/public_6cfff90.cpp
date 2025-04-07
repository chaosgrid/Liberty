#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d00d50);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6cfff90, internal_6cfff90, public_6cfff90);
extern "C" NAKED register_t __cdecl internal_6cfff90()
{
    __asm
    {
        push 0
        mov ecx, offset public_6d8d8ec
        call public_6d00d50
/*FIXUP push offset _public_6cfffb0 @0x6cfff9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6cfffb0
        call public_6d6013e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6cfff90)
    }
}
