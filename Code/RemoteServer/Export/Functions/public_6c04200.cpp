#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c04200, internal_6c04200, public_6c04200);
extern "C" NAKED register_t __cdecl internal_6c04200()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6c0b154]
/*FIXUP push offset public_6c0bbf4 @0x6c0420b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        add ecx, 0x20
        push ecx
/*FIXUP push offset public_6c0e54c @0x6c04214*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e54c
        push eax
        call esi
        add esp, 8
        push eax
        call esi
        add esp, 8
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c04200)
    }
}
