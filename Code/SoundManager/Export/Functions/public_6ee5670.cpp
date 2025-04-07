#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee5670, internal_6ee5670, public_6ee5670);
extern "C" NAKED register_t __cdecl internal_6ee5670()
{
    __asm
    {
/*FIXUP push offset public_6eea6a0 @0x6ee5670*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea6a0
        push 0xAF5
/*FIXUP push offset public_6eea070 @0x6ee567a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100001
/*FIXUP push offset public_6eea124 @0x6ee5684*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea124
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        add esp, 0x14
        ret 0x10
        UNREACHABLE_TRAP(0x6ee5670)
    }
}
