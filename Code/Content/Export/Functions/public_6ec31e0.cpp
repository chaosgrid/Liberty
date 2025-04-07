#include "Content-PCH.h"

PROC_DECLARE(0x6ec31e0, internal_6ec31e0, public_6ec31e0);
extern "C" NAKED register_t __cdecl internal_6ec31e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x44]
        mov ecx, dword ptr ss : [esp+4]
        push eax
/*FIXUP push offset public_6fb59bc @0x6ec31e8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb59bc
        push ecx
        call dword ptr ds : [public_6fb3380]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6ec31e0)
    }
}
