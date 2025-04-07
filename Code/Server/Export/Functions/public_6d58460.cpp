#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d10aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57480);
CLANG_FORWARD_PROC_SYMBOL(public_6d58460);
CLANG_FORWARD_PROC_SYMBOL(public_6d58910);
CLANG_FORWARD_PROC_SYMBOL(public_6d59db0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63c25);

#define public_6d587a7 _public_6d587a7
#define public_6d587b2 _public_6d587b2
#define public_6d587ba _public_6d587ba

PROC_DECLARE(0x6d58460, internal_6d58460, public_6d58460);
extern "C" NAKED register_t __cdecl internal_6d58460()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63c25 @0x6d58462*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63c25
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov ecx, 0x80
        mov esi, ebx
        mov edi, ebp
        rep movsd
        mov al, byte ptr ds : [ebx+0x200]
        lea edi, ds:[ebx+0x200]
        lea esi, ss:[ebp+0x200]
        push 0
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], ebp
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
        mov dword ptr ss : [esp+0x30], 0
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
        mov dword ptr ss : [ebp+0x240], edx
        mov al, byte ptr ds : [ebx+0x244]
        lea edi, ds:[ebx+0x244]
        lea esi, ss:[ebp+0x244]
        push 0
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], 1
        mov byte ptr ds : [esi], al
        call dword ptr ds : [public_6d64880]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6d64990]
        mov edi, eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d64888]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d6498c]
        mov cl, byte ptr ds : [ebx+0x250]
        lea edi, ds:[ebx+0x250]
        lea esi, ss:[ebp+0x250]
        push 0x10
        mov byte ptr ss : [esp+0x30], 2
        mov byte ptr ds : [esi], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov edx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], edx
        call dword ptr ds : [public_6d646b8]
        lea ecx, ss:[esp+0x20]
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
        mov dword ptr ss : [ebp+0x25C], eax
        mov cl, byte ptr ds : [ebx+0x260]
        lea edi, ds:[ebx+0x260]
        lea esi, ss:[ebp+0x260]
        push 0
        mov byte ptr ds : [esi], cl
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], 3
        call dword ptr ds : [public_6d64880]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x38], edx
        call dword ptr ds : [public_6d64990]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [public_6d64888]
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [edi]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6d6498c]
        mov al, byte ptr ds : [ebx+0x26C]
        lea edi, ds:[ebx+0x26C]
        lea esi, ss:[ebp+0x26C]
        mov byte ptr ss : [esp+0x2C], 4
        mov byte ptr ds : [esi], al
        push 0x10
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6d646b8]
        mov edi, eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d646b4]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d643a4]
        mov ecx, dword ptr ds : [ebx+0x278]
        mov dword ptr ss : [ebp+0x278], ecx
        mov edx, dword ptr ds : [ebx+0x27C]
        mov dword ptr ss : [ebp+0x27C], edx
        mov eax, dword ptr ds : [ebx+0x280]
        mov dword ptr ss : [ebp+0x280], eax
        mov ecx, dword ptr ds : [ebx+0x284]
        mov dword ptr ss : [ebp+0x284], ecx
        lea edx, ds:[ebx+0x288]
        mov ecx, dword ptr ds : [edx]
        lea eax, ss:[ebp+0x288]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea esi, ds:[ebx+0x294]
        lea edi, ss:[ebp+0x294]
        mov ecx, 9
        rep movsd
        mov eax, dword ptr ds : [ebx+0x2B8]
        mov dword ptr ss : [ebp+0x2B8], eax
        mov ecx, dword ptr ds : [ebx+0x2BC]
        mov dword ptr ss : [ebp+0x2BC], ecx
        mov dl, byte ptr ds : [ebx+0x2C0]
        lea esi, ss:[ebp+0x2C0]
        mov byte ptr ds : [esi], dl
        mov eax, dword ptr ds : [ebx+0x2C4]
        test eax, eax
        mov byte ptr ss : [esp+0x2C], 5
        jne public_6d587a7
        xor ecx, ecx
        jmp public_6d587b2
        public_6d587a7 : nop
        mov ecx, dword ptr ds : [ebx+0x2C8]
        sub ecx, eax
        sar ecx, 3
        public_6d587b2 : nop
        test ecx, ecx
        mov eax, ecx
        jge public_6d587ba
        xor eax, eax
        public_6d587ba : nop
        shl eax, 3
        push eax
        call public_6d60012
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ebx+0x2C8]
        mov edx, dword ptr ds : [ebx+0x2C4]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6d59db0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x2D0]
        mov dword ptr ss : [ebp+0x2D0], ecx
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
        mov dx, word ptr ds : [ebx+0x360]
        mov word ptr ss : [ebp+0x360], dx
        mov al, byte ptr ds : [ebx+0x364]
        lea edi, ds:[ebx+0x364]
        lea esi, ss:[ebp+0x364]
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 6
        mov byte ptr ds : [esi], al
        call dword ptr ds : [public_6d64b74]
        mov ecx, dword ptr ds : [public_6d64b80]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b70]
        mov al, byte ptr ds : [ebx+0x374]
        lea edi, ds:[ebx+0x374]
        lea esi, ss:[ebp+0x374]
        push 0
        push 0
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], 7
        mov byte ptr ds : [esi], al
        call public_6d10aa0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        mov ecx, edi
        call public_6d5c540
        mov edi, eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6d5c540
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6d57480
        mov ecx, dword ptr ds : [ebx+0x380]
        mov byte ptr ss : [esp+0x2C], 8
        mov dword ptr ss : [ebp+0x380], ecx
        add ebx, 0x384
        push ebx
        lea ecx, ss:[ebp+0x384]
        call public_6d58910
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6d58460)
    }
}

#undef public_6d587a7
#undef public_6d587b2
#undef public_6d587ba
