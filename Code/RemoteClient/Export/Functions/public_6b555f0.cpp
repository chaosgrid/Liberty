#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b555f0, internal_6b555f0, public_6b555f0);
extern "C" NAKED register_t __cdecl internal_6b555f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6b6b134]
/*FIXUP push offset public_6b6bf74 @0x6b555fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push eax
/*FIXUP push offset public_6b6e490 @0x6b55604*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e490
        push ecx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b12c]
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b555f0)
    }
}
