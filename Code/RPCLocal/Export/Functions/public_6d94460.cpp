#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85500);
CLANG_FORWARD_PROC_SYMBOL(public_6d85710);
CLANG_FORWARD_PROC_SYMBOL(public_6d913e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d913f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d94460);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db2797);

#define public_6d94495 _public_6d94495
#define public_6d944a0 _public_6d944a0
#define public_6d9457b _public_6d9457b
#define public_6d9457d _public_6d9457d
#define public_6d946bf _public_6d946bf
#define public_6d946c1 _public_6d946c1
#define public_6d94750 _public_6d94750
#define public_6d94770 _public_6d94770
#define public_6d9479d _public_6d9479d
#define public_6d9479f _public_6d9479f
#define public_6d94830 _public_6d94830
#define public_6d94850 _public_6d94850
#define public_6d9487a _public_6d9487a
#define public_6d94880 _public_6d94880
#define public_6d948b0 _public_6d948b0
#define public_6d948ce _public_6d948ce
#define public_6d948d4 _public_6d948d4
#define public_6d948d8 _public_6d948d8
#define public_6d9491e _public_6d9491e
#define public_6d94928 _public_6d94928
#define public_6d9496a _public_6d9496a
#define public_6d94986 _public_6d94986
#define public_6d9499a _public_6d9499a
#define public_6d949a9 _public_6d949a9
#define public_6d949bc _public_6d949bc

PROC_DECLARE(0x6d94460, internal_6d94460, public_6d94460);
extern "C" NAKED register_t __cdecl internal_6d94460()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db2797 @0x6d94462*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db2797
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
        je public_6d949bc
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        jmp public_6d944a0
        public_6d94495 : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6d944a0 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        je public_6d949a9
        push 0x27C
        call public_6db1f8a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_6d9457b
        mov al, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x204]
        mov byte ptr ds : [esi], bl
        mov byte ptr ds : [esi+0x200], bl
        mov byte ptr ds : [esi+0x201], bl
        push ebx
        mov byte ptr ds : [ecx], al
        call dword ptr ds : [public_6db31a0]
        mov dl, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x214]
        push ebx
        mov byte ptr ss : [esp+0x38], 1
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6db31a0]
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
        call dword ptr ds : [public_6db30d0]
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ds : [esi+0x274], ebx
        mov dword ptr ds : [esi+0x278], ebx
        mov dword ptr ds : [esi+0x228], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        jmp public_6d9457d
        public_6d9457b : nop
        xor esi, esi
        public_6d9457d : nop
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_6db30b0]
        mov cl, byte ptr ds : [edi+0x200]
        mov byte ptr ds : [esi+0x200], cl
        mov dl, byte ptr ds : [edi+0x201]
        mov byte ptr ds : [esi+0x201], dl
        mov eax, dword ptr ds : [public_6db31a8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x204]
        push edx
        lea ecx, ds:[esi+0x204]
        call dword ptr ds : [public_6db31ac]
        mov eax, dword ptr ds : [public_6db31a8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ds:[edi+0x214]
        push edx
        lea ecx, ds:[esi+0x214]
        call dword ptr ds : [public_6db31ac]
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
        je public_6d94770
        push 0x18
        call public_6db1f8a
        add esp, 4
        cmp eax, ebx
        je public_6d946bf
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6d946c1
        public_6d946bf : nop
        xor eax, eax
        public_6d946c1 : nop
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
        jbe public_6d94770
        lea ecx, ds:[eax*4]
        push ecx
        call public_6db1f8a
        mov edx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ds : [esi+0x274]
        mov edx, dword ptr ds : [ecx+0x10]
        add esp, 4
        xor eax, eax
        cmp edx, ebx
        jbe public_6d94770
        mov edi, edi
        public_6d94750 : nop
        mov edx, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x274]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6d94750
        public_6d94770 : nop
        cmp dword ptr ds : [edi+0x278], ebx
        je public_6d94850
        push 0x18
        call public_6db1f8a
        add esp, 4
        cmp eax, ebx
        je public_6d9479d
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6d9479f
        public_6d9479d : nop
        xor eax, eax
        public_6d9479f : nop
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
        jbe public_6d94850
        lea ecx, ds:[eax*4]
        push ecx
        call public_6db1f8a
        mov edx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [edx+0x14], eax
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx+0x10]
        add esp, 4
        xor eax, eax
        cmp edx, ebx
        jbe public_6d94850
        lea esp, ss:[esp]
        public_6d94830 : nop
        mov edx, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6d94830
        public_6d94850 : nop
        lea eax, ds:[edi+0x264]
        lea ebp, ds:[esi+0x264]
        push eax
        mov ecx, ebp
        call public_6d913f0
        mov ecx, ebp
        call public_6d913e0
        cmp eax, ebx
        je public_6d9487a
        mov cl, byte ptr ds : [eax+8]
        mov byte ptr ds : [esi+0x260], cl
        jmp public_6d94880
        public_6d9487a : nop
        mov byte ptr ds : [esi+0x260], bl
        public_6d94880 : nop
        lea ecx, ds:[edi+0x268]
        lea ebp, ds:[esi+0x268]
        cmp ebp, ecx
        je public_6d9496a
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d9491e
        lea ebx, ds:[ebx]
        public_6d948b0 : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        je public_6d948ce
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6d948b0
        public_6d948ce : nop
        cmp eax, edi
        je public_6d9491e
        jmp public_6d948d8
        public_6d948d4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6d948d8 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], eax
        push ebx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x24], edx
        call public_6d85710
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6db1dc2
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        dec ecx
        cmp eax, edi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6d948d4
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d9491e : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d9496a
        public_6d94928 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6db30d0]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        add edx, 8
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6d85500
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc edx
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6d94928
        public_6d9496a : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6db1f8a
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], edi
        jne public_6d94986
        mov ebp, eax
        public_6d94986 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        cmp eax, ebx
        je public_6d9499a
        mov dword ptr ds : [eax], esi
        public_6d9499a : nop
        mov eax, dword ptr ss : [esp+0x3C]
        inc dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x24]
        public_6d949a9 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0x28]
        mov dword ptr ss : [esp+0x18], eax
        jne public_6d94495
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6d949bc : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6d94460)
    }
}

#undef public_6d94495
#undef public_6d944a0
#undef public_6d9457b
#undef public_6d9457d
#undef public_6d946bf
#undef public_6d946c1
#undef public_6d94750
#undef public_6d94770
#undef public_6d9479d
#undef public_6d9479f
#undef public_6d94830
#undef public_6d94850
#undef public_6d9487a
#undef public_6d94880
#undef public_6d948b0
#undef public_6d948ce
#undef public_6d948d4
#undef public_6d948d8
#undef public_6d9491e
#undef public_6d94928
#undef public_6d9496a
#undef public_6d94986
#undef public_6d9499a
#undef public_6d949a9
#undef public_6d949bc
