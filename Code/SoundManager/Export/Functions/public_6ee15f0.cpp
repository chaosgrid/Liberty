#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee15f0, internal_6ee15f0, public_6ee15f0);
extern "C" NAKED register_t __cdecl internal_6ee15f0()
{
    __asm
    {
/*FIXUP push offset public_6eea178 @0x6ee15f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea178
        push 0x23A
/*FIXUP push offset public_6eea070 @0x6ee15fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100001
/*FIXUP push offset public_6eea124 @0x6ee1604*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea124
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6ee15f0)
    }
}
