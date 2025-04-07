#include "Content-PCH.h"

PROC_DECLARE(0x6f1abf0, internal_6f1abf0, public_6f1abf0);
extern "C" NAKED register_t __cdecl internal_6f1abf0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3380]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x38]
        push eax
/*FIXUP push offset public_6fb872c @0x6f1ac03*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb872c
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
/*FIXUP push offset public_6fb8dd0 @0x6f1ac0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dd0
        push edi
        call ebx
        mov edx, dword ptr ds : [esi+0x3C]
        push edx
/*FIXUP push offset public_6fb8dd0 @0x6f1ac1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dd0
        push edi
        call ebx
        fld dword ptr ds : [esi+0x48]
        add esp, 0xC
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x44]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x40]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb8dc4 @0x6f1ac3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dc4
        push edi
        call ebx
        add esp, 0x20
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f1abf0)
    }
}
