#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5eb10, internal_6b5eb10, public_6b5eb10);
extern "C" NAKED register_t __cdecl internal_6b5eb10()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [public_6b6b134]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x2C]
/*FIXUP push offset public_6b6bf74 @0x6b5eb22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push eax
/*FIXUP push offset public_6b6e754 @0x6b5eb28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e754
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b16c]
        push eax
        call esi
        mov ecx, dword ptr ds : [edi+0x30]
        add esp, 8
/*FIXUP push offset public_6b6bf74 @0x6b5eb44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push ecx
/*FIXUP push offset public_6b6e74c @0x6b5eb4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e74c
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b16c]
        push eax
        call esi
        mov edx, dword ptr ds : [edi+0x34]
        add esp, 8
/*FIXUP push offset public_6b6bf74 @0x6b5eb66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push edx
/*FIXUP push offset public_6b6e744 @0x6b5eb6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6e744
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b16c]
        push eax
        call esi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b5eb10)
    }
}
