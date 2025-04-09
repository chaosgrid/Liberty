#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cdc10);
CLANG_FORWARD_PROC_SYMBOL(public_53c250);
CLANG_FORWARD_PROC_SYMBOL(public_5aa9c0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae700);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5627);

#define public_5aa9f0 _public_5aa9f0
#define public_5aa9fd _public_5aa9fd
#define public_5aaa00 _public_5aaa00
#define public_5aab08 _public_5aab08
#define public_5aab0a _public_5aab0a
#define public_5aac75 _public_5aac75

PROC_DECLARE(0x5aa9c0, internal_5aa9c0, public_5aa9c0);
extern "C" NAKED register_t __cdecl internal_5aa9c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5627 @0x5aa9c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5627
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov byte ptr ds : [ecx+0x1D4], 1
        xor ebp, ebp
        nop 
        lea esp, ss:[esp]
        public_5aa9f0 : nop
        cmp ebp, ebx
        jne public_5aa9fd
        mov eax, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ds : [eax+4]
        jmp public_5aaa00
        public_5aa9fd : nop
        mov ebp, dword ptr ss : [ebp]
        public_5aaa00 : nop
        cmp ebp, ebx
        je public_5aac75
        push 0x2DC
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_5aab08
        mov dl, byte ptr ss : [esp+0x2C]
        lea ecx, ds:[esi+0x204]
        mov byte ptr ds : [esi], bl
        mov byte ptr ds : [esi+0x200], bl
        mov byte ptr ds : [esi+0x201], bl
        push ebx
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_5c6fb8]
        mov al, byte ptr ss : [esp+0x2C]
        lea ecx, ds:[esi+0x214]
        push ebx
        mov byte ptr ss : [esp+0x28], 1
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_5c6fb8]
        lea edx, ss:[esp+0x13]
        lea ecx, ds:[esi+0x248]
        push edx
        mov byte ptr ss : [esp+0x28], 2
        mov dword ptr ds : [esi+0x224], ebx
        mov dword ptr ds : [esi+0x230], ebx
        mov dword ptr ds : [esi+0x234], ebx
        mov dword ptr ds : [esi+0x238], ebx
        mov dword ptr ds : [esi+0x23C], ebx
        mov dword ptr ds : [esi+0x240], ebx
        mov dword ptr ds : [esi+0x244], ebx
        call dword ptr ds : [public_5c6ca8]
        mov al, byte ptr ss : [esp+0x2C]
        lea edi, ds:[esi+0x254]
        push ebx
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 3
        mov byte ptr ds : [edi], al
        call dword ptr ds : [public_5c640c]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        lea ecx, ds:[esi+0x274]
        mov byte ptr ss : [esp+0x24], 4
        mov dword ptr ds : [esi+0x260], ebx
        mov dword ptr ds : [esi+0x264], ebx
        mov dword ptr ds : [esi+0x268], ebx
        mov dword ptr ds : [esi+0x26C], ebx
        mov dword ptr ds : [esi+0x270], ebx
        call public_4cdc10
        lea ecx, ds:[esi+0x2A8]
        call public_4cdc10
        mov dword ptr ds : [esi+0x228], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        jmp public_5aab0a
        public_5aab08 : nop
        xor esi, esi
        public_5aab0a : nop
        mov edi, dword ptr ss : [ebp+8]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call dword ptr ds : [public_5c63cc]
        mov cl, byte ptr ds : [edi+0x200]
        mov byte ptr ds : [esi+0x200], cl
        mov dl, byte ptr ds : [edi+0x201]
        mov byte ptr ds : [esi+0x201], dl
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x204]
        push edx
        lea ecx, ds:[esi+0x204]
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x214]
        push edx
        lea ecx, ds:[esi+0x214]
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ds : [edi+0x224]
        mov dword ptr ds : [esi+0x224], eax
        mov ecx, dword ptr ds : [edi+0x228]
        mov dword ptr ds : [esi+0x228], ecx
        mov edx, dword ptr ds : [edi+0x22C]
        mov dword ptr ds : [esi+0x22C], edx
        mov eax, dword ptr ds : [edi+0x230]
        mov dword ptr ds : [esi+0x230], eax
        mov ecx, dword ptr ds : [edi+0x234]
        mov dword ptr ds : [esi+0x234], ecx
        mov edx, dword ptr ds : [edi+0x238]
        mov dword ptr ds : [esi+0x238], edx
        mov eax, dword ptr ds : [edi+0x23C]
        mov dword ptr ds : [esi+0x23C], eax
        mov ecx, dword ptr ds : [edi+0x240]
        mov dword ptr ds : [esi+0x240], ecx
        mov edx, dword ptr ds : [edi+0x244]
        lea eax, ds:[edi+0x248]
        push eax
        lea ecx, ds:[esi+0x248]
        mov dword ptr ds : [esi+0x244], edx
        call dword ptr ds : [public_5c6208]
        lea ecx, ds:[edi+0x254]
        push ecx
        lea ecx, ds:[esi+0x254]
        call dword ptr ds : [public_5c6ca4]
        mov edx, dword ptr ds : [edi+0x260]
        mov dword ptr ds : [esi+0x260], edx
        mov eax, dword ptr ds : [edi+0x264]
        mov dword ptr ds : [esi+0x264], eax
        mov ecx, dword ptr ds : [edi+0x268]
        mov dword ptr ds : [esi+0x268], ecx
        mov edx, dword ptr ds : [edi+0x26C]
        lea ecx, ds:[edi+0x274]
        mov dword ptr ds : [esi+0x26C], edx
        mov eax, dword ptr ds : [edi+0x270]
        push ecx
        lea ecx, ds:[esi+0x274]
        mov dword ptr ds : [esi+0x270], eax
        call public_53c250
        add edi, 0x2A8
        push edi
        lea ecx, ds:[esi+0x2A8]
        call public_53c250
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        lea ecx, ds:[edx+0x1B4]
        call public_5ae700
        jmp public_5aa9f0
        public_5aac75 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [edx+0x1CC], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x5aa9c0)
    }
}

#undef public_5aa9f0
#undef public_5aa9fd
#undef public_5aaa00
#undef public_5aab08
#undef public_5aab0a
#undef public_5aac75
