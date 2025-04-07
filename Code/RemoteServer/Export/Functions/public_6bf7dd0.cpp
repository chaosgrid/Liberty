#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf7dd0, internal_6bf7dd0, public_6bf7dd0);
extern "C" NAKED register_t __cdecl internal_6bf7dd0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [public_6c0b154]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x20]
/*FIXUP push offset public_6c0bbf4 @0x6bf7de2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push eax
/*FIXUP push offset public_6c0e1cc @0x6bf7de8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e1cc
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b170]
        push eax
        call esi
        mov ecx, dword ptr ds : [edi+0x24]
        add esp, 8
/*FIXUP push offset public_6c0bbf4 @0x6bf7e04*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push ecx
/*FIXUP push offset public_6c0e1b8 @0x6bf7e0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e1b8
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b170]
        push eax
        call esi
        mov edx, dword ptr ds : [edi+0x28]
        add esp, 8
/*FIXUP push offset public_6c0bbf4 @0x6bf7e26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push edx
/*FIXUP push offset public_6c0e1a4 @0x6bf7e2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e1a4
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b19c]
        push eax
        call esi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bf7dd0)
    }
}
