#include "Server-PCH.h"

PROC_DECLARE(0x6d4c280, internal_6d4c280, public_6d4c280);
extern "C" NAKED register_t __cdecl internal_6d4c280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        mov eax, dword ptr ds : [ecx+4]
        push edx
/*FIXUP push offset public_6d6b578 @0x6d4c28d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b578
        push eax
        call dword ptr ds : [public_6d64c08]
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d4c280)
    }
}
