#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf3360, internal_6bf3360, public_6bf3360);
extern "C" NAKED register_t __cdecl internal_6bf3360()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [public_6c0b154]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x2C]
/*FIXUP push offset public_6c0bbf4 @0x6bf3372*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push eax
/*FIXUP push offset public_6c0e020 @0x6bf3378*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e020
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b194]
        push eax
        call esi
        mov ecx, dword ptr ds : [edi+0x30]
        add esp, 8
/*FIXUP push offset public_6c0bbf4 @0x6bf3394*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push ecx
/*FIXUP push offset public_6c0e018 @0x6bf339a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e018
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b194]
        push eax
        call esi
        mov edx, dword ptr ds : [edi+0x34]
        add esp, 8
/*FIXUP push offset public_6c0bbf4 @0x6bf33b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push edx
/*FIXUP push offset public_6c0e010 @0x6bf33bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e010
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b194]
        push eax
        call esi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bf3360)
    }
}
