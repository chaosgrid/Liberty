#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5c2d0, internal_6b5c2d0, public_6b5c2d0);
extern "C" NAKED register_t __cdecl internal_6b5c2d0()
{
    __asm
    {
        xor eax, eax
        mov al, byte ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6b6b134]
/*FIXUP push offset public_6b6bf74 @0x6b5c2e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push eax
/*FIXUP push offset public_6b6e684 @0x6b5c2e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e684
        push ecx
        call esi
        add esp, 8
        push eax
        call dword ptr ds : [public_6b6b168]
        add esp, 8
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b5c2d0)
    }
}
