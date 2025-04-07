#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d58910);
CLANG_FORWARD_PROC_SYMBOL(public_6d58ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ab90);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63ce6);

#define public_6d5aeb2 _public_6d5aeb2

PROC_DECLARE(0x6d5ab90, internal_6d5ab90, public_6d5ab90);
extern "C" NAKED register_t __cdecl internal_6d5ab90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63ce6 @0x6d5ab92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63ce6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+4], ebp
        test ebp, ebp
        mov dword ptr ss : [esp+0x1C], 0
        je public_6d5aeb2
        push ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        push esi
        push edi
        mov esi, ebx
        mov edi, ebp
        add ebp, 0x200
        mov ecx, 0x80
        rep movsd
        add ebx, 0x200
        mov ecx, 0x80
        mov esi, ebx
        mov edi, ebp
        rep movsd
        mov al, byte ptr ds : [ebx+0x200]
        lea edi, ds:[ebx+0x200]
        lea esi, ss:[ebp+0x200]
        push 0
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], ebp
        mov byte ptr ds : [esi], al
        call dword ptr ds : [public_6d64b58]
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b6c]
        mov al, byte ptr ds : [ebx+0x210]
        lea edi, ds:[ebx+0x210]
        lea esi, ss:[ebp+0x210]
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 1
        mov byte ptr ds : [esi], al
        call dword ptr ds : [public_6d64b58]
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b6c]
        mov eax, dword ptr ds : [ebx+0x220]
        mov dword ptr ss : [ebp+0x220], eax
        mov ecx, dword ptr ds : [ebx+0x224]
        mov dword ptr ss : [ebp+0x224], ecx
        mov edx, dword ptr ds : [ebx+0x228]
        mov dword ptr ss : [ebp+0x228], edx
        mov eax, dword ptr ds : [ebx+0x22C]
        mov dword ptr ss : [ebp+0x22C], eax
        mov ecx, dword ptr ds : [ebx+0x230]
        mov dword ptr ss : [ebp+0x230], ecx
        mov edx, dword ptr ds : [ebx+0x234]
        mov dword ptr ss : [ebp+0x234], edx
        mov eax, dword ptr ds : [ebx+0x238]
        mov dword ptr ss : [ebp+0x238], eax
        mov ecx, dword ptr ds : [ebx+0x23C]
        mov dword ptr ss : [ebp+0x23C], ecx
        mov edx, dword ptr ds : [ebx+0x240]
        lea eax, ds:[ebx+0x244]
        lea ecx, ss:[ebp+0x244]
        push eax
        mov byte ptr ss : [esp+0x2C], 2
        mov dword ptr ss : [ebp+0x240], edx
        call dword ptr ds : [public_6d64408]
        mov cl, byte ptr ds : [ebx+0x250]
        lea edi, ds:[ebx+0x250]
        lea esi, ss:[ebp+0x250]
        push 0
        mov byte ptr ds : [esi], cl
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 3
        call dword ptr ds : [public_6d643cc]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], edx
        call dword ptr ds : [public_6d646b8]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [public_6d646b4]
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [edi]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d643a4]
        mov eax, dword ptr ds : [ebx+0x25C]
        lea ecx, ds:[ebx+0x260]
        push ecx
        lea ecx, ss:[ebp+0x260]
        mov byte ptr ss : [esp+0x2C], 4
        mov dword ptr ss : [ebp+0x25C], eax
        call dword ptr ds : [public_6d64994]
        lea edx, ds:[ebx+0x26C]
        push edx
        lea ecx, ss:[ebp+0x26C]
        mov byte ptr ss : [esp+0x2C], 5
        call dword ptr ds : [public_6d64988]
        mov eax, dword ptr ds : [ebx+0x278]
        mov dword ptr ss : [ebp+0x278], eax
        mov ecx, dword ptr ds : [ebx+0x27C]
        mov dword ptr ss : [ebp+0x27C], ecx
        mov edx, dword ptr ds : [ebx+0x280]
        mov dword ptr ss : [ebp+0x280], edx
        mov eax, dword ptr ds : [ebx+0x284]
        mov dword ptr ss : [ebp+0x284], eax
        lea ecx, ds:[ebx+0x288]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0x288]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea esi, ds:[ebx+0x294]
        lea edi, ss:[ebp+0x294]
        mov ecx, 9
        rep movsd
        mov edx, dword ptr ds : [ebx+0x2B8]
        lea ecx, ds:[ebx+0x2C0]
        mov dword ptr ss : [ebp+0x2B8], edx
        mov eax, dword ptr ds : [ebx+0x2BC]
        push ecx
        lea ecx, ss:[ebp+0x2C0]
        mov byte ptr ss : [esp+0x2C], 6
        mov dword ptr ss : [ebp+0x2BC], eax
        call public_6d58ad0
        mov edx, dword ptr ds : [ebx+0x2D0]
        mov dword ptr ss : [ebp+0x2D0], edx
        lea esi, ds:[ebx+0x2D4]
        lea edi, ss:[ebp+0x2D4]
        mov ecx, 0xD
        rep movsd
        lea esi, ds:[ebx+0x308]
        lea edi, ss:[ebp+0x308]
        mov ecx, 9
        rep movsd
        lea esi, ds:[ebx+0x32C]
        lea edi, ss:[ebp+0x32C]
        mov ecx, 0xD
        rep movsd
        mov ax, word ptr ds : [ebx+0x360]
        mov byte ptr ss : [esp+0x28], 7
        mov word ptr ss : [ebp+0x360], ax
        lea ecx, ds:[ebx+0x364]
        push ecx
        lea ecx, ss:[ebp+0x364]
        call dword ptr ds : [public_6d64ad0]
        lea edx, ds:[ebx+0x374]
        push edx
        lea ecx, ss:[ebp+0x374]
        mov byte ptr ss : [esp+0x2C], 8
        call public_6d58d90
        mov eax, dword ptr ds : [ebx+0x380]
        add ebx, 0x384
        push ebx
        lea ecx, ss:[ebp+0x384]
        mov byte ptr ss : [esp+0x2C], 9
        mov dword ptr ss : [ebp+0x380], eax
        call public_6d58910
        pop edi
        pop esi
        pop ebx
        public_6d5aeb2 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d5ab90)
    }
}

#undef public_6d5aeb2
