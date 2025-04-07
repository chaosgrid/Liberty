#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b56cb0, internal_6b56cb0, public_6b56cb0);
extern "C" NAKED register_t __cdecl internal_6b56cb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6b6b134]
/*FIXUP push offset public_6b6bf74 @0x6b56cbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        add ecx, 0x20
        push ecx
/*FIXUP push offset public_6b6e528 @0x6b56cc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e528
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b164]
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b56cb0)
    }
}
