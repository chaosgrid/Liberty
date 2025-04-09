#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_44fbe0);
CLANG_FORWARD_PROC_SYMBOL(public_451f50);
CLANG_FORWARD_PROC_SYMBOL(public_451f70);
CLANG_FORWARD_PROC_SYMBOL(public_451fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9e5e);

PROC_DECLARE(0x451fd0, internal_451fd0, public_451fd0);
extern "C" NAKED register_t __cdecl internal_451fd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9e5e @0x451fd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9e5e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], esi
        call public_44fbe0
/*FIXUP push offset _public_401e90 @0x452004*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_401e90
/*FIXUP push offset _public_451f50 @0x452009*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_451f50
        push 0x20
        push 0x10
        lea eax, ds:[esi+0x78]
        xor edi, edi
        push eax
        mov dword ptr ss : [esp+0x28], edi
        call public_5b7fba
/*FIXUP push offset _public_401e90 @0x452021*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_401e90
/*FIXUP push offset _public_451f70 @0x452026*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_451f70
        push 0x20
        push 0x3C
        lea ecx, ds:[esi+0x278]
        push ecx
        mov byte ptr ss : [esp+0x28], 1
        call public_5b7fba
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x6C], edi
        mov dword ptr ds : [esi+0x70], edi
        mov dword ptr ds : [esi+0x74], edi
        mov dword ptr ds : [esi], offset public_5cd1ec
        mov dword ptr ds : [esi+4], offset public_5cd1b8
        mov dword ptr ds : [esi+8], offset public_5cd19c
        mov dword ptr ds : [esi+0xC], offset public_5cd17c
        mov dword ptr ds : [esi+0x10], offset public_5cd144
        mov dword ptr ds : [esi+0x14], offset public_5cd11c
        mov dword ptr ds : [esi+0x18], offset public_5cd0f8
        mov dword ptr ds : [esi+0x1C], offset public_5cd0c0
        mov dword ptr ds : [esi+0x20], offset public_5cd0a8
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x451fd0)
    }
}
