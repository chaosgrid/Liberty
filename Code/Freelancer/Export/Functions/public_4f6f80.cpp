#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f6fa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4f6f80, internal_4f6f80, public_4f6f80);
extern "C" NAKED register_t __cdecl internal_4f6f80()
{
    __asm
    {
/*FIXUP push offset _public_4f6fa0 @0x4f6f80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4f6fa0
        mov dword ptr ds : [public_674cdc], 0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4f6f80)
    }
}
