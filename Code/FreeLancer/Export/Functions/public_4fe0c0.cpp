#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fe0e0);
CLANG_FORWARD_PROC_SYMBOL(public_59ec40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4fe0c0, internal_4fe0c0, public_4fe0c0);
extern "C" NAKED register_t __cdecl internal_4fe0c0()
{
    __asm
    {
        mov ecx, offset public_674f98
        call public_59ec40
/*FIXUP push offset _public_4fe0e0 @0x4fe0ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4fe0e0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4fe0c0)
    }
}
