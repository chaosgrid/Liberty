#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6318130);
CLANG_FORWARD_PROC_SYMBOL(public_6318450);
CLANG_FORWARD_PROC_SYMBOL(public_6318590);
CLANG_FORWARD_PROC_SYMBOL(public_6319070);
CLANG_FORWARD_JUMP_SYMBOL(public_6396902);

PROC_DECLARE(0x6318130, internal_6318130, public_6318130);
extern "C" NAKED register_t __cdecl internal_6318130()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396902 @0x6318132*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396902
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov dl, byte ptr ss : [ebp+4]
        lea eax, ss:[ebp+4]
        lea ecx, ds:[edi+4]
        xor esi, esi
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [ecx+0xC], esi
        mov edx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [edx]
        push edx
        push esi
        push eax
        mov dword ptr ss : [esp+0x1C], edi
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ss : [ebp+0x14]
        lea ebx, ss:[ebp+0x14]
        mov dword ptr ss : [esp+0x1C], esi
        lea esi, ds:[edi+0x14]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [ebx+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [ebx+0xC]
        push 1
        push 0
        mov ecx, esi
        mov byte ptr ds : [esi+0xC], dl
        call public_6319070
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ds : [esi+8]
        push 0
        push ecx
        mov ecx, esi
        call public_6319070
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call public_6318450
        mov dl, byte ptr ss : [ebp+0x28]
        lea ebx, ss:[ebp+0x28]
        lea esi, ds:[edi+0x28]
        mov byte ptr ds : [esi], dl
        mov al, byte ptr ds : [ebx+1]
        mov byte ptr ds : [esi+1], al
        mov cl, byte ptr ds : [ebx+0xC]
        push 1
        mov byte ptr ds : [esi+0xC], cl
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 1
        call public_6319070
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x11], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ds : [esi+8]
        push 0
        push eax
        mov ecx, esi
        call public_6319070
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call public_6318450
        mov cl, byte ptr ss : [ebp+0x3C]
        add ebp, 0x3C
        lea esi, ds:[edi+0x3C]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ss : [ebp+1]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ss : [ebp+0xC]
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 2
        mov byte ptr ds : [esi+0xC], al
        call public_6318590
        push ebp
        mov ecx, esi
        call public_6318450
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6318130)
    }
}
