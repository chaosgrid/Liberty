#include "Content-PCH.h"

PROC_DECLARE(0x6f1ae70, internal_6f1ae70, public_6f1ae70);
extern "C" NAKED register_t __cdecl internal_6f1ae70()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3380]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x6C]
        push eax
/*FIXUP push offset public_6fb872c @0x6f1ae83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb872c
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
/*FIXUP push offset public_6fb8dd0 @0x6f1ae8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dd0
        push edi
        call ebx
        mov edx, dword ptr ds : [esi+0x70]
        push edx
/*FIXUP push offset public_6fb8dd0 @0x6f1ae9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dd0
        push edi
        call ebx
        fld dword ptr ds : [esi+0x7C]
        add esp, 0xC
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x78]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x74]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb8ddc @0x6f1aeba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8ddc
        push edi
        call ebx
        add esi, 0x3C
        push esi
/*FIXUP push offset public_6fb8dd8 @0x6f1aec6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dd8
        push edi
        call ebx
        add esp, 0x2C
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f1ae70)
    }
}
