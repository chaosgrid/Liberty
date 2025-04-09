#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ec30);
CLANG_FORWARD_PROC_SYMBOL(public_59ec40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59ec10, internal_59ec10, public_59ec10);
extern "C" NAKED register_t __cdecl internal_59ec10()
{
    __asm
    {
        mov ecx, offset public_67dcf4
        call public_59ec40
/*FIXUP push offset _public_59ec30 @0x59ec1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59ec30
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59ec10)
    }
}
