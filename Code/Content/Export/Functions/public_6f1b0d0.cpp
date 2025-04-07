#include "Content-PCH.h"

PROC_DECLARE(0x6f1b0d0, internal_6f1b0d0, public_6f1b0d0);
extern "C" NAKED register_t __cdecl internal_6f1b0d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3380]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push eax
/*FIXUP push offset public_6fb8dd0 @0x6f1b0e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dd0
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+0x3C]
        push ecx
/*FIXUP push offset public_6fb872c @0x6f1b0ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb872c
        push edi
        call ebx
        mov edx, dword ptr ds : [esi+0x38]
        push edx
/*FIXUP push offset public_6fb872c @0x6f1b0fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb872c
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+0x44]
        push eax
/*FIXUP push offset public_6fb8dd0 @0x6f1b107*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dd0
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+0x40]
        push ecx
/*FIXUP push offset public_6fb872c @0x6f1b113*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb872c
        push edi
        call ebx
        fld dword ptr ds : [esi+0x50]
        add esp, 0x24
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x4C]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x48]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb8dec @0x6f1b132*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dec
        push edi
        call ebx
/*FIXUP push offset public_6fb8964 @0x6f1b13a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8964
        push edi
        call ebx
        add esp, 0x28
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f1b0d0)
    }
}
