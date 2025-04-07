#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60100, internal_6b60100, public_6b60100);
extern "C" NAKED register_t __cdecl internal_6b60100()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ds : [ecx+0x28]
        push esi
        mov esi, dword ptr ds : [public_6b6b134]
/*FIXUP push offset public_6b6bf74 @0x6b6010d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push eax
        mov eax, dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
/*FIXUP push offset public_6b6e7c0 @0x6b6011b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e7c0
        push eax
/*FIXUP push offset public_6b6e7ac @0x6b60121*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e7ac
        push ecx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b12c]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b170]
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b60100)
    }
}
