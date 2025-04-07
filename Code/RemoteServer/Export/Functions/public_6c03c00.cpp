#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03c00, internal_6c03c00, public_6c03c00);
extern "C" NAKED register_t __cdecl internal_6c03c00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xAC]
        mov edx, dword ptr ds : [ecx+0xA8]
        push esi
/*FIXUP push offset public_6c0bbf4 @0x6c03c0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push eax
        mov eax, dword ptr ds : [ecx+0xA4]
        mov esi, dword ptr ds : [public_6c0b154]
/*FIXUP push offset public_6c0e534 @0x6c03c1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e534
        push edx
        mov edx, dword ptr ds : [ecx+0xA0]
/*FIXUP push offset public_6c0e528 @0x6c03c2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e528
        push eax
        mov eax, dword ptr ss : [esp+0x20]
/*FIXUP push offset public_6c0e51c @0x6c03c35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e51c
        push edx
/*FIXUP push offset public_6c0e510 @0x6c03c3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e510
        add ecx, 0x20
        push ecx
/*FIXUP push offset public_6c0e504 @0x6c03c44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e504
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b1a4]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b170]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b170]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b170]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b170]
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c03c00)
    }
}
