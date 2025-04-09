#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_431d90);
CLANG_FORWARD_PROC_SYMBOL(public_4322b0);
CLANG_FORWARD_PROC_SYMBOL(public_432450);
CLANG_FORWARD_PROC_SYMBOL(public_432b20);
CLANG_FORWARD_PROC_SYMBOL(public_432c60);
CLANG_FORWARD_PROC_SYMBOL(public_433650);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9002);

PROC_DECLARE(0x431d90, internal_431d90, public_431d90);
extern "C" NAKED register_t __cdecl internal_431d90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9002 @0x431d92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9002
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], offset public_5cad10
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+8], ecx
        mov dl, byte ptr ss : [ebp+0xC]
        lea ebx, ss:[ebp+0xC]
        lea esi, ds:[edi+0xC]
        mov byte ptr ds : [esi], dl
        mov al, byte ptr ds : [ebx+1]
        mov byte ptr ds : [esi+1], al
        mov cl, byte ptr ds : [ebx+0xC]
        push 1
        mov byte ptr ds : [esi+0xC], cl
        push 0
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edi
        call public_433650
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x25], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ds : [esi+8]
        push 0
        push eax
        mov ecx, esi
        call public_433650
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call public_4322b0
        mov cl, byte ptr ss : [ebp+0x20]
        xor ebx, ebx
        lea esi, ds:[edi+0x20]
        push 0x18
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [esi], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_432450
        mov dl, byte ptr ss : [ebp+0x2C]
        lea eax, ss:[ebp+0x2C]
        lea ecx, ds:[edi+0x2C]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], ebx
        mov edx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [edx]
        push edx
        push ebx
        push eax
        mov byte ptr ss : [esp+0x28], 1
        call dword ptr ds : [public_5c6f9c]
        mov byte ptr ss : [esp+0x1C], 2
        mov al, byte ptr ss : [ebp+0x3C]
        add ebp, 0x3C
        lea esi, ds:[edi+0x3C]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ss : [ebp+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ss : [ebp+0xC]
        mov ecx, esi
        mov byte ptr ds : [esi+0xC], dl
        call public_432c60
        push ebp
        mov ecx, esi
        call public_432b20
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], offset public_5cacec
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x431d90)
    }
}
