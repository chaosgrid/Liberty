#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d390);

PROC_DECLARE(0x6f4d390, internal_6f4d390, public_6f4d390);
extern "C" NAKED register_t __cdecl internal_6f4d390()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3380]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        push eax
/*FIXUP push offset public_6fbb410 @0x6f4d3a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb410
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+0x1C]
        push ecx
/*FIXUP push offset public_6fbb3fc @0x6f4d3af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb3fc
        push edi
        call ebx
        mov edx, dword ptr ds : [esi+0x20]
        push edx
/*FIXUP push offset public_6fbb3ec @0x6f4d3bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb3ec
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+0x3C]
        push eax
/*FIXUP push offset public_6fbb3dc @0x6f4d3c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb3dc
        push edi
        call ebx
        fld dword ptr ds : [esi+0x40]
        add esp, 0x28
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fbb3c8 @0x6f4d3d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb3c8
        push edi
        call ebx
        fld dword ptr ds : [esi+0x44]
        add esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fbb3b8 @0x6f4d3e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb3b8
        push edi
        call ebx
        fld dword ptr ds : [esi+0x4C]
        add esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fbb3a4 @0x6f4d3fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb3a4
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+0x50]
        push ecx
/*FIXUP push offset public_6fbb394 @0x6f4d406*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb394
        push edi
        call ebx
        add esp, 0x1C
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f4d390)
    }
}
