#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13550);
CLANG_FORWARD_PROC_SYMBOL(public_6d15640);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d15620, internal_6d15620, public_6d15620);
extern "C" NAKED register_t __cdecl internal_6d15620()
{
    __asm
    {
        mov ecx, offset public_6d8da70
        call public_6d13550
/*FIXUP push offset _public_6d15640 @0x6d1562a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d15640
        call public_6d6013e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d15620)
    }
}
