#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61bf0, internal_6b61bf0, public_6b61bf0);
extern "C" NAKED register_t __cdecl internal_6b61bf0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [public_6b6b134]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x20]
/*FIXUP push offset public_6b6bf74 @0x6b61c02*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push eax
/*FIXUP push offset public_6b6e8a0 @0x6b61c08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e8a0
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b12c]
        push eax
        call esi
        mov ecx, dword ptr ds : [edi+0x24]
        add esp, 8
/*FIXUP push offset public_6b6bf74 @0x6b61c24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push ecx
/*FIXUP push offset public_6b6e88c @0x6b61c2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e88c
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b12c]
        push eax
        call esi
        mov edx, dword ptr ds : [edi+0x28]
        add esp, 8
/*FIXUP push offset public_6b6bf74 @0x6b61c46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push edx
/*FIXUP push offset public_6b6e878 @0x6b61c4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e878
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b174]
        push eax
        call esi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b61bf0)
    }
}
