#include "Content-PCH.h"

PROC_DECLARE(0x6f1acc0, internal_6f1acc0, public_6f1acc0);
extern "C" NAKED register_t __cdecl internal_6f1acc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+4]
        push eax
/*FIXUP push offset public_6fb8dc0 @0x6f1acc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dc0
        push ecx
        call dword ptr ds : [public_6fb3380]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f1acc0)
    }
}
