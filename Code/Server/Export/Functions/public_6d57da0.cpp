#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d57da0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58910);
CLANG_FORWARD_PROC_SYMBOL(public_6d58ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58d90);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63b95);

PROC_DECLARE(0x6d57da0, internal_6d57da0, public_6d57da0);
extern "C" NAKED register_t __cdecl internal_6d57da0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63b95 @0x6d57da2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63b95
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        push edi
        mov edi, ebx
        mov dword ptr ss : [esp+0x10], ebx
        add ebx, 0x200
        mov ecx, 0x80
        rep movsd
        mov ecx, 0x80
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov al, byte ptr ss : [ebp+0x200]
        lea edi, ss:[ebp+0x200]
        lea esi, ds:[ebx+0x200]
        push 0
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [esi], al
        call dword ptr ds : [public_6d64b58]
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b6c]
        mov al, byte ptr ss : [ebp+0x210]
        lea edi, ss:[ebp+0x210]
        lea esi, ds:[ebx+0x210]
        push 0
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0
        mov byte ptr ds : [esi], al
        call dword ptr ds : [public_6d64b58]
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b6c]
        mov eax, dword ptr ss : [ebp+0x220]
        mov dword ptr ds : [ebx+0x220], eax
        mov ecx, dword ptr ss : [ebp+0x224]
        mov dword ptr ds : [ebx+0x224], ecx
        mov edx, dword ptr ss : [ebp+0x228]
        mov dword ptr ds : [ebx+0x228], edx
        mov eax, dword ptr ss : [ebp+0x22C]
        mov dword ptr ds : [ebx+0x22C], eax
        mov ecx, dword ptr ss : [ebp+0x230]
        mov dword ptr ds : [ebx+0x230], ecx
        mov edx, dword ptr ss : [ebp+0x234]
        mov dword ptr ds : [ebx+0x234], edx
        mov eax, dword ptr ss : [ebp+0x238]
        mov dword ptr ds : [ebx+0x238], eax
        mov ecx, dword ptr ss : [ebp+0x23C]
        mov dword ptr ds : [ebx+0x23C], ecx
        mov edx, dword ptr ss : [ebp+0x240]
        lea eax, ss:[ebp+0x244]
        lea ecx, ds:[ebx+0x244]
        push eax
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ds : [ebx+0x240], edx
        call dword ptr ds : [public_6d64408]
        mov cl, byte ptr ss : [ebp+0x250]
        lea edi, ss:[ebp+0x250]
        lea esi, ds:[ebx+0x250]
        push 0
        mov byte ptr ds : [esi], cl
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 2
        call dword ptr ds : [public_6d643cc]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x30], edx
        call dword ptr ds : [public_6d646b8]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [public_6d646b4]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [edi]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d643a4]
        mov eax, dword ptr ss : [ebp+0x25C]
        lea edx, ss:[ebp+0x260]
        lea ecx, ds:[ebx+0x260]
        push edx
        mov byte ptr ss : [esp+0x28], 3
        mov dword ptr ds : [ebx+0x25C], eax
        call dword ptr ds : [public_6d64408]
        lea eax, ss:[ebp+0x26C]
        push eax
        lea ecx, ds:[ebx+0x26C]
        mov byte ptr ss : [esp+0x28], 4
        call dword ptr ds : [public_6d64988]
        mov ecx, dword ptr ss : [ebp+0x278]
        mov dword ptr ds : [ebx+0x278], ecx
        mov edx, dword ptr ss : [ebp+0x27C]
        mov dword ptr ds : [ebx+0x27C], edx
        mov eax, dword ptr ss : [ebp+0x280]
        mov dword ptr ds : [ebx+0x280], eax
        mov ecx, dword ptr ss : [ebp+0x284]
        mov dword ptr ds : [ebx+0x284], ecx
        lea edx, ss:[ebp+0x288]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0x288]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea esi, ss:[ebp+0x294]
        lea edi, ds:[ebx+0x294]
        mov ecx, 9
        rep movsd
        mov eax, dword ptr ss : [ebp+0x2B8]
        mov dword ptr ds : [ebx+0x2B8], eax
        mov ecx, dword ptr ss : [ebp+0x2BC]
        lea edx, ss:[ebp+0x2C0]
        mov dword ptr ds : [ebx+0x2BC], ecx
        push edx
        lea ecx, ds:[ebx+0x2C0]
        mov byte ptr ss : [esp+0x28], 5
        call public_6d58ad0
        mov eax, dword ptr ss : [ebp+0x2D0]
        mov dword ptr ds : [ebx+0x2D0], eax
        lea esi, ss:[ebp+0x2D4]
        lea edi, ds:[ebx+0x2D4]
        mov ecx, 0xD
        rep movsd
        lea esi, ss:[ebp+0x308]
        lea edi, ds:[ebx+0x308]
        mov ecx, 9
        rep movsd
        lea esi, ss:[ebp+0x32C]
        lea edi, ds:[ebx+0x32C]
        mov ecx, 0xD
        mov byte ptr ss : [esp+0x24], 6
        rep movsd
        mov cx, word ptr ss : [ebp+0x360]
        lea edx, ss:[ebp+0x364]
        mov word ptr ds : [ebx+0x360], cx
        push edx
        lea ecx, ds:[ebx+0x364]
        call dword ptr ds : [public_6d64ad0]
        lea eax, ss:[ebp+0x374]
        push eax
        lea ecx, ds:[ebx+0x374]
        mov byte ptr ss : [esp+0x28], 7
        call public_6d58d90
        mov ecx, dword ptr ss : [ebp+0x380]
        add ebp, 0x384
        mov dword ptr ds : [ebx+0x380], ecx
        push ebp
        lea ecx, ds:[ebx+0x384]
        mov byte ptr ss : [esp+0x28], 8
        call public_6d58910
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6d57da0)
    }
}
