#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5700);
CLANG_FORWARD_PROC_SYMBOL(public_6bd59e0);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc830);
CLANG_FORWARD_PROC_SYMBOL(public_6bdc850);
CLANG_FORWARD_PROC_SYMBOL(public_6bdfb70);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a5c7);

#define public_6bdfba5 _public_6bdfba5
#define public_6bdfbb0 _public_6bdfbb0
#define public_6bdfc8b _public_6bdfc8b
#define public_6bdfc8d _public_6bdfc8d
#define public_6bdfdcf _public_6bdfdcf
#define public_6bdfdd1 _public_6bdfdd1
#define public_6bdfe60 _public_6bdfe60
#define public_6bdfe80 _public_6bdfe80
#define public_6bdfead _public_6bdfead
#define public_6bdfeaf _public_6bdfeaf
#define public_6bdff40 _public_6bdff40
#define public_6bdff60 _public_6bdff60
#define public_6bdff8a _public_6bdff8a
#define public_6bdff90 _public_6bdff90
#define public_6bdffc0 _public_6bdffc0
#define public_6bdffde _public_6bdffde
#define public_6bdffe4 _public_6bdffe4
#define public_6bdffe8 _public_6bdffe8
#define public_6be002e _public_6be002e
#define public_6be0038 _public_6be0038
#define public_6be007a _public_6be007a
#define public_6be0096 _public_6be0096
#define public_6be00aa _public_6be00aa
#define public_6be00b9 _public_6be00b9
#define public_6be00cc _public_6be00cc

PROC_DECLARE(0x6bdfb70, internal_6bdfb70, public_6bdfb70);
extern "C" NAKED register_t __cdecl internal_6bdfb70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6c0a5c7 @0x6bdfb72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a5c7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov edx, dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+8], eax
        je public_6be00cc
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        jmp public_6bdfbb0
        public_6bdfba5 : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6bdfbb0 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        je public_6be00b9
        push 0x27C
        call public_6c09d26
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_6bdfc8b
        mov al, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x204]
        mov byte ptr ds : [esi], bl
        mov byte ptr ds : [esi+0x200], bl
        mov byte ptr ds : [esi+0x201], bl
        push ebx
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_6c0b1ac]
        mov dl, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x214]
        push ebx
        mov byte ptr ss : [esp+0x38], 1
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6c0b1ac]
        mov dword ptr ds : [esi+0x224], ebx
        mov dword ptr ds : [esi+0x244], ebx
        mov dword ptr ds : [esi+0x248], ebx
        mov dword ptr ds : [esi+0x24C], ebx
        mov dword ptr ds : [esi+0x250], ebx
        mov dword ptr ds : [esi+0x254], ebx
        mov dword ptr ds : [esi+0x258], ebx
        mov dword ptr ds : [esi+0x25C], ebx
        mov byte ptr ds : [esi+0x260], bl
        mov dword ptr ds : [esi+0x264], ebx
        mov al, byte ptr ss : [esp+0x3C]
        lea ebp, ds:[esi+0x268]
        push ebx
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3C], 3
        mov byte ptr ss : [ebp], al
        call dword ptr ds : [public_6c0b0f8]
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ds : [esi+0x274], ebx
        mov dword ptr ds : [esi+0x278], ebx
        mov dword ptr ds : [esi+0x228], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        jmp public_6bdfc8d
        public_6bdfc8b : nop
        xor esi, esi
        public_6bdfc8d : nop
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_6c0b0d8]
        mov cl, byte ptr ds : [edi+0x200]
        mov byte ptr ds : [esi+0x200], cl
        mov dl, byte ptr ds : [edi+0x201]
        mov byte ptr ds : [esi+0x201], dl
        mov eax, dword ptr ds : [public_6c0b1b8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x204]
        push edx
        lea ecx, ds:[esi+0x204]
        call dword ptr ds : [public_6c0b1bc]
        mov eax, dword ptr ds : [public_6c0b1b8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x214]
        push edx
        lea ecx, ds:[esi+0x214]
        call dword ptr ds : [public_6c0b1bc]
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
        mov dword ptr ds : [esi+0x244], edx
        mov eax, dword ptr ds : [edi+0x248]
        mov dword ptr ds : [esi+0x248], eax
        mov ecx, dword ptr ds : [edi+0x24C]
        mov dword ptr ds : [esi+0x24C], ecx
        mov edx, dword ptr ds : [edi+0x250]
        mov dword ptr ds : [esi+0x250], edx
        mov eax, dword ptr ds : [edi+0x254]
        mov dword ptr ds : [esi+0x254], eax
        mov ecx, dword ptr ds : [edi+0x258]
        mov dword ptr ds : [esi+0x258], ecx
        mov edx, dword ptr ds : [edi+0x25C]
        mov dword ptr ds : [esi+0x25C], edx
        cmp dword ptr ds : [edi+0x274], ebx
        je public_6bdfe80
        push 0x18
        call public_6c09d26
        add esp, 4
        cmp eax, ebx
        je public_6bdfdcf
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6bdfdd1
        public_6bdfdcf : nop
        xor eax, eax
        public_6bdfdd1 : nop
        mov dword ptr ds : [esi+0x274], eax
        mov ecx, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [ecx+0x10], edx
        mov eax, dword ptr ds : [esi+0x274]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        jbe public_6bdfe80
        lea ecx, ds:[eax*4]
        push ecx
        call public_6c09d26
        mov edx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ds : [esi+0x274]
        mov edx, dword ptr ds : [ecx+0x10]
        add esp, 4
        xor eax, eax
        cmp edx, ebx
        jbe public_6bdfe80
        mov edi, edi
        public_6bdfe60 : nop
        mov edx, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x274]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6bdfe60
        public_6bdfe80 : nop
        cmp dword ptr ds : [edi+0x278], ebx
        je public_6bdff60
        push 0x18
        call public_6c09d26
        add esp, 4
        cmp eax, ebx
        je public_6bdfead
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6bdfeaf
        public_6bdfead : nop
        xor eax, eax
        public_6bdfeaf : nop
        mov dword ptr ds : [esi+0x278], eax
        mov ecx, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [ecx+0xC], edx
        mov eax, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [ecx+0x10], edx
        mov eax, dword ptr ds : [esi+0x278]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        jbe public_6bdff60
        lea ecx, ds:[eax*4]
        push ecx
        call public_6c09d26
        mov edx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx+0x10]
        add esp, 4
        xor eax, eax
        cmp edx, ebx
        jbe public_6bdff60
        lea esp, ss:[esp]
        public_6bdff40 : nop
        mov edx, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6bdff40
        public_6bdff60 : nop
        lea eax, ds:[edi+0x264]
        lea ebp, ds:[esi+0x264]
        push eax
        mov ecx, ebp
        call public_6bdc850
        mov ecx, ebp
        call public_6bdc830
        cmp eax, ebx
        je public_6bdff8a
        mov cl, byte ptr ds : [eax+8]
        mov byte ptr ds : [esi+0x260], cl
        jmp public_6bdff90
        public_6bdff8a : nop
        mov byte ptr ds : [esi+0x260], bl
        public_6bdff90 : nop
        lea ecx, ds:[edi+0x268]
        lea ebp, ds:[esi+0x268]
        cmp ebp, ecx
        je public_6be007a
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6be002e
        lea ebx, ds:[ebx]
        public_6bdffc0 : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        je public_6bdffde
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6bdffc0
        public_6bdffde : nop
        cmp eax, edi
        je public_6be002e
        jmp public_6bdffe8
        public_6bdffe4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6bdffe8 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], eax
        push ebx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x24], edx
        call public_6bd5700
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        dec ecx
        cmp eax, edi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6bdffe4
        mov ecx, dword ptr ss : [esp+0x10]
        public_6be002e : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6be007a
        public_6be0038 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6c0b0f8]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        add edx, 8
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6bd59e0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc edx
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6be0038
        public_6be007a : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6c09d26
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], edi
        jne public_6be0096
        mov ebp, eax
        public_6be0096 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        cmp eax, ebx
        je public_6be00aa
        mov dword ptr ds : [eax], esi
        public_6be00aa : nop
        mov eax, dword ptr ss : [esp+0x3C]
        inc dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x24]
        public_6be00b9 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0x28]
        mov dword ptr ss : [esp+0x18], eax
        jne public_6bdfba5
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6be00cc : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6bdfb70)
    }
}

#undef public_6bdfba5
#undef public_6bdfbb0
#undef public_6bdfc8b
#undef public_6bdfc8d
#undef public_6bdfdcf
#undef public_6bdfdd1
#undef public_6bdfe60
#undef public_6bdfe80
#undef public_6bdfead
#undef public_6bdfeaf
#undef public_6bdff40
#undef public_6bdff60
#undef public_6bdff8a
#undef public_6bdff90
#undef public_6bdffc0
#undef public_6bdffde
#undef public_6bdffe4
#undef public_6bdffe8
#undef public_6be002e
#undef public_6be0038
#undef public_6be007a
#undef public_6be0096
#undef public_6be00aa
#undef public_6be00b9
#undef public_6be00cc
