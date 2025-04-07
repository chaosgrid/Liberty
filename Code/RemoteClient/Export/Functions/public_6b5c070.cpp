#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5c070, internal_6b5c070, public_6b5c070);
extern "C" NAKED register_t __cdecl internal_6b5c070()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6b6b134]
/*FIXUP push offset public_6b6bf74 @0x6b5c07e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push eax
/*FIXUP push offset public_6b6e664 @0x6b5c084*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e664
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
        UNREACHABLE_TRAP(0x6b5c070)
    }
}
