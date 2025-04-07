#include "DALib-PCH.h"

PROC_DECLARE(0x65c69e0, internal_65c69e0, public_65c69e0);
extern "C" NAKED register_t __cdecl internal_65c69e0()
{
    __asm
    {
        lea eax, ds:[ecx+0x10]
        push eax
        lea edx, ds:[ecx+0xC]
        push edx
        lea eax, ds:[ecx+8]
        push eax
        add ecx, 4
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_65c7594 @0x65c69f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7594
        push ecx
        call dword ptr ds : [public_65c70cc]
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x65c69e0)
    }
}
