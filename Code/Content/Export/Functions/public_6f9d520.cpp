#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9d540);
CLANG_FORWARD_PROC_SYMBOL(public_6f9d550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f9d520, internal_6f9d520, public_6f9d520);
extern "C" NAKED register_t __cdecl internal_6f9d520()
{
    __asm
    {
        mov ecx, offset public_6fd3c78
        call public_6f9d550
/*FIXUP push offset _public_6f9d540 @0x6f9d52a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f9d540
        call public_6fa9162
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f9d520)
    }
}
