#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bef540, internal_6bef540, public_6bef540);
extern "C" NAKED register_t __cdecl internal_6bef540()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [public_6c0b154]
/*FIXUP push offset public_6c0bbf4 @0x6bef54e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push eax
/*FIXUP push offset public_6c0defc @0x6bef554*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0defc
        push ecx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b170]
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bef540)
    }
}
