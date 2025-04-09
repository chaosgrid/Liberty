#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_464db0);
CLANG_FORWARD_PROC_SYMBOL(public_46c4e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x464d90, internal_464d90, public_464d90);
extern "C" NAKED register_t __cdecl internal_464d90()
{
    __asm
    {
/*FIXUP push offset public_5ceda0 @0x464d90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceda0
        mov ecx, offset public_66d450
        call public_46c4e0
/*FIXUP push offset _public_464db0 @0x464d9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_464db0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x464d90)
    }
}
