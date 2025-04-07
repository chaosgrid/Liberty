#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345100);
CLANG_FORWARD_PROC_SYMBOL(public_6345b20);
CLANG_FORWARD_PROC_SYMBOL(public_634cea0);
CLANG_FORWARD_PROC_SYMBOL(public_6362280);
CLANG_FORWARD_JUMP_SYMBOL(public_63984b8);

PROC_DECLARE(0x6362280, internal_6362280, public_6362280);
extern "C" NAKED register_t __cdecl internal_6362280()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63984b8 @0x6362282*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63984b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        push edi
        push edx
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], esi
        call public_6345100
        mov dword ptr ds : [esi], offset public_63a5824
        mov dword ptr ds : [esi+4], 2
        mov eax, dword ptr ds : [edi+0x4C]
        mov dword ptr ds : [esi+0x94], eax
        mov ecx, dword ptr ds : [ebx+0x18]
        push edi
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0
        call public_6345b20
        mov eax, dword ptr ds : [esi+0x98]
        mov dword ptr ss : [esp+0x14], esi
        mov edx, dword ptr ds : [eax+0xC]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], edx
        push ecx
        mov ecx, dword ptr ds : [eax+0xC]
        call public_634cea0
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0x14
        UNREACHABLE_TRAP(0x6362280)
    }
}
