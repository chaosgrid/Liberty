#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d390);

PROC_DECLARE(0x6ef0810, internal_6ef0810, public_6ef0810);
extern "C" NAKED register_t __cdecl internal_6ef0810()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov esi, ecx
        call public_6f4d390
        mov eax, dword ptr ds : [esi+0x18]
        mov ebx, dword ptr ds : [public_6fb3380]
        push eax
/*FIXUP push offset public_6fb77b4 @0x6ef0829*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb77b4
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
/*FIXUP push offset public_6fb77a4 @0x6ef0835*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb77a4
        push edi
        call ebx
        fld dword ptr ds : [esi+0x5C]
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x58]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x54]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb7788 @0x6ef0851*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7788
        push edi
        call ebx
        mov edx, dword ptr ds : [esi+0x60]
        push edx
/*FIXUP push offset public_6fb7770 @0x6ef085d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7770
        push edi
        call ebx
        mov eax, dword ptr ds : [esi+0x64]
        push eax
/*FIXUP push offset public_6fb775c @0x6ef0869*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb775c
        push edi
        call ebx
/*FIXUP push offset public_6fb7758 @0x6ef0871*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push edi
        call ebx
        add esp, 0x40
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ef0810)
    }
}
