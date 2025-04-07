#include "Freelancer-PCH.h"

PROC_DECLARE(0x414f50, internal_414f50, public_414f50);
extern "C" NAKED register_t __cdecl internal_414f50()
{
    __asm
    {
        movsx edx, byte ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
/*FIXUP push offset public_5c8d28 @0x414f5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8d28
        push ecx
        call dword ptr ds : [eax+0x30]
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x414f50)
    }
}
