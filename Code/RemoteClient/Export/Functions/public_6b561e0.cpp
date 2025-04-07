#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b561e0, internal_6b561e0, public_6b561e0);
extern "C" NAKED register_t __cdecl internal_6b561e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x5C]
        mov edx, dword ptr ds : [ecx+0x58]
        push esi
/*FIXUP push offset public_6b6bf74 @0x6b561e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push eax
        mov eax, dword ptr ds : [ecx+0x54]
        mov esi, dword ptr ds : [public_6b6b134]
/*FIXUP push offset public_6b6e4e8 @0x6b561f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e4e8
        push edx
        mov edx, dword ptr ds : [ecx+0x50]
/*FIXUP push offset public_6b6e4dc @0x6b561ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e4dc
        push eax
        mov eax, dword ptr ss : [esp+0x20]
/*FIXUP push offset public_6b6e4d0 @0x6b56209*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e4d0
        push edx
/*FIXUP push offset public_6b6e4c4 @0x6b5620f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e4c4
        add ecx, 0x20
        push ecx
/*FIXUP push offset public_6b6e4b8 @0x6b56218*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e4b8
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b164]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b12c]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b12c]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b12c]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b12c]
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b561e0)
    }
}
