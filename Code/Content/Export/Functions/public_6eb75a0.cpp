#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6eb75a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7830);
CLANG_FORWARD_PROC_SYMBOL(public_6eb79a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0440);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0f20);
CLANG_FORWARD_PROC_SYMBOL(public_6f0e3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1b6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ca50);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4dae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa25f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8bb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa3b8);

PROC_DECLARE(0x6eb75a0, internal_6eb75a0, public_6eb75a0);
extern "C" NAKED register_t __cdecl internal_6eb75a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa3b8 @0x6eb75a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa3b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        push edi
        push ebp
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x18], esi
        call public_6f0e3e0
        mov dl, byte ptr ss : [esp+0x2C]
        mov al, byte ptr ss : [esp+0x2C]
        lea ecx, ds:[esi+0x1B0]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_6fa25f0
        mov cl, byte ptr ss : [esp+0x2C]
        lea edi, ds:[esi+0x1C4]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 1
        call public_6f93790
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0x2C]
        mov al, byte ptr ss : [esp+0x2C]
        lea ecx, ds:[esi+0x1D0]
        mov byte ptr ss : [esp+0x20], 2
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_6f4dae0
        mov dl, byte ptr ss : [esp+0x2C]
        mov al, byte ptr ss : [esp+0x2C]
        lea ecx, ds:[esi+0x1E4]
        mov byte ptr ss : [esp+0x20], 3
        mov byte ptr ds : [ecx], dl
        mov byte ptr ds : [ecx+1], al
        mov byte ptr ds : [ecx+0xC], bl
        call public_6f4dae0
        mov cl, byte ptr ss : [esp+0x2C]
        lea edi, ds:[esi+0x1F8]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 4
        call public_6fa8bb0
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea edx, ss:[esp+0x2C]
        push edx
        push ebx
        lea eax, ss:[esp+0x30]
        lea edi, ds:[esi+0x204]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 5
        call public_6f1f4f0
        mov byte ptr ds : [edi+0x14], bl
        lea edi, ds:[esi+0x21C]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 6
        mov dword ptr ss : [esp+0x14], edi
        call public_6eb7830
        mov byte ptr ss : [esp+0x20], 7
        push ebx
        push ebx
        push ebx
        lea ecx, ds:[edi+0x14]
        call public_6eb7810
        mov dword ptr ds : [edi+0x20], ebx
        mov dword ptr ds : [edi+0x24], ebx
        lea ecx, ds:[edi+0x5C]
        mov dword ptr ds : [edi+0x28], ebx
        mov byte ptr ds : [edi+0x2C], bl
        call public_6eb79a0
        mov eax, 1
        mov dword ptr ds : [edi+0x68], eax
        mov dword ptr ds : [edi+0x6C], eax
        mov dword ptr ds : [edi+0x70], ebx
        mov byte ptr ds : [edi+0x74], bl
        mov dword ptr ds : [edi+0x78], ebx
        mov dword ptr ds : [edi+0x7C], ebx
        mov dword ptr ds : [edi+0x80], ebx
        mov byte ptr ds : [edi+0x84], bl
        lea ecx, ds:[esi+0x2D4]
        mov byte ptr ss : [esp+0x20], 8
        mov byte ptr ds : [esi+0x2CC], bl
        mov byte ptr ds : [esi+0x2CD], bl
        mov dword ptr ds : [esi+0x2D0], ebx
        call public_6eac620
        lea ecx, ds:[esi+0x2E4]
        mov byte ptr ss : [esp+0x20], 9
        call dword ptr ds : [public_6fb3030]
        mov cl, byte ptr ss : [esp+0x2C]
        lea edi, ds:[esi+0x2F0]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        call public_6ed0f20
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dl, byte ptr ss : [esp+0x2C]
        lea edi, ds:[esi+0x2FC]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0xA
        mov byte ptr ds : [edi], dl
        call public_6ed0440
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov al, byte ptr ss : [esp+0x2C]
        lea edi, ds:[esi+0x310]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 0xB
        mov byte ptr ds : [edi], al
        call public_6ed0f20
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea ecx, ds:[esi+0x31C]
        mov byte ptr ss : [esp+0x20], 0xC
        call public_6eac620
        mov dword ptr ds : [esi], offset public_6fb4710
        mov byte ptr ds : [esi+0x2B0], bl
        mov dword ptr ds : [public_6fcf018], ebx
        mov eax, 2
        mov dword ptr ds : [esi+0x2BC], ebx
        mov dword ptr ds : [esi+0x2A8], eax
        mov dword ptr ds : [esi+0x2AC], eax
        mov byte ptr ds : [esi+0x2C8], bl
        mov byte ptr ds : [esi+0x2EC], bl
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 0xD
        call public_6f1ca50
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+0x2A4], edx
        call public_6f1b6d0
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+0x30C], ebx
        mov dword ptr ds : [esi+0x2E8], 1
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6eb75a0)
    }
}
