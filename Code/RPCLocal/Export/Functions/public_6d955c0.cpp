#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85500);
CLANG_FORWARD_PROC_SYMBOL(public_6d85710);
CLANG_FORWARD_PROC_SYMBOL(public_6d913e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d913f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d955c0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db2797);

#define public_6d955f9 _public_6d955f9
#define public_6d95600 _public_6d95600
#define public_6d956db _public_6d956db
#define public_6d956dd _public_6d956dd
#define public_6d95821 _public_6d95821
#define public_6d95823 _public_6d95823
#define public_6d958b0 _public_6d958b0
#define public_6d958d0 _public_6d958d0
#define public_6d958fd _public_6d958fd
#define public_6d958ff _public_6d958ff
#define public_6d95990 _public_6d95990
#define public_6d959b0 _public_6d959b0
#define public_6d959da _public_6d959da
#define public_6d959e0 _public_6d959e0
#define public_6d95a10 _public_6d95a10
#define public_6d95a2e _public_6d95a2e
#define public_6d95a34 _public_6d95a34
#define public_6d95a38 _public_6d95a38
#define public_6d95a7e _public_6d95a7e
#define public_6d95a88 _public_6d95a88
#define public_6d95aca _public_6d95aca
#define public_6d95ae6 _public_6d95ae6
#define public_6d95afa _public_6d95afa
#define public_6d95b05 _public_6d95b05
#define public_6d95b1c _public_6d95b1c

PROC_DECLARE(0x6d955c0, internal_6d955c0, public_6d955c0);
extern "C" NAKED register_t __cdecl internal_6d955c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db2797 @0x6d955c2*/
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
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6d95b1c
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        jmp public_6d95600
        public_6d955f9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[ecx]
        public_6d95600 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        je public_6d95b05
        push 0x27C
        call public_6db1f8a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_6d956db
        mov dl, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x204]
        mov byte ptr ds : [esi], bl
        mov byte ptr ds : [esi+0x200], bl
        mov byte ptr ds : [esi+0x201], bl
        push ebx
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6db31a0]
        mov al, byte ptr ss : [esp+0x3C]
        lea ecx, ds:[esi+0x214]
        push ebx
        mov byte ptr ss : [esp+0x38], 1
        mov byte ptr ds : [ecx], al
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
        mov cl, byte ptr ss : [esp+0x3C]
        lea ebp, ds:[esi+0x268]
        push ebx
        mov byte ptr ss : [ebp], cl
        push ebx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x3C], 3
        call dword ptr ds : [public_6db30d0]
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ds : [esi+0x274], ebx
        mov dword ptr ds : [esi+0x278], ebx
        mov dword ptr ds : [esi+0x228], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        jmp public_6d956dd
        public_6d956db : nop
        xor esi, esi
        public_6d956dd : nop
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_6db30b0]
        mov dl, byte ptr ds : [edi+0x200]
        mov byte ptr ds : [esi+0x200], dl
        mov al, byte ptr ds : [edi+0x201]
        mov byte ptr ds : [esi+0x201], al
        mov ecx, dword ptr ds : [public_6db31a8]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea eax, ds:[edi+0x204]
        push eax
        lea ecx, ds:[esi+0x204]
        call dword ptr ds : [public_6db31ac]
        mov ecx, dword ptr ds : [public_6db31a8]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea eax, ds:[edi+0x214]
        push eax
        lea ecx, ds:[esi+0x214]
        call dword ptr ds : [public_6db31ac]
        mov ecx, dword ptr ds : [edi+0x224]
        mov dword ptr ds : [esi+0x224], ecx
        mov edx, dword ptr ds : [edi+0x228]
        mov dword ptr ds : [esi+0x228], edx
        mov eax, dword ptr ds : [edi+0x22C]
        mov dword ptr ds : [esi+0x22C], eax
        mov ecx, dword ptr ds : [edi+0x230]
        mov dword ptr ds : [esi+0x230], ecx
        mov edx, dword ptr ds : [edi+0x234]
        mov dword ptr ds : [esi+0x234], edx
        mov eax, dword ptr ds : [edi+0x238]
        mov dword ptr ds : [esi+0x238], eax
        mov ecx, dword ptr ds : [edi+0x23C]
        mov dword ptr ds : [esi+0x23C], ecx
        mov edx, dword ptr ds : [edi+0x240]
        mov dword ptr ds : [esi+0x240], edx
        mov eax, dword ptr ds : [edi+0x244]
        mov dword ptr ds : [esi+0x244], eax
        mov ecx, dword ptr ds : [edi+0x248]
        mov dword ptr ds : [esi+0x248], ecx
        mov edx, dword ptr ds : [edi+0x24C]
        mov dword ptr ds : [esi+0x24C], edx
        mov eax, dword ptr ds : [edi+0x250]
        mov dword ptr ds : [esi+0x250], eax
        mov ecx, dword ptr ds : [edi+0x254]
        mov dword ptr ds : [esi+0x254], ecx
        mov edx, dword ptr ds : [edi+0x258]
        mov dword ptr ds : [esi+0x258], edx
        mov eax, dword ptr ds : [edi+0x25C]
        mov dword ptr ds : [esi+0x25C], eax
        cmp dword ptr ds : [edi+0x274], ebx
        je public_6d958d0
        push 0x18
        call public_6db1f8a
        add esp, 4
        cmp eax, ebx
        je public_6d95821
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6d95823
        public_6d95821 : nop
        xor eax, eax
        public_6d95823 : nop
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
        jbe public_6d958d0
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
        jbe public_6d958d0
        public_6d958b0 : nop
        mov edx, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x274]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6d958b0
        public_6d958d0 : nop
        cmp dword ptr ds : [edi+0x278], ebx
        je public_6d959b0
        push 0x18
        call public_6db1f8a
        add esp, 4
        cmp eax, ebx
        je public_6d958fd
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6d958ff
        public_6d958fd : nop
        xor eax, eax
        public_6d958ff : nop
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
        jbe public_6d959b0
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
        jbe public_6d959b0
        lea esp, ss:[esp]
        public_6d95990 : nop
        mov edx, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edx+eax*4]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x278]
        mov edx, dword ptr ds : [ecx+0x10]
        inc eax
        cmp eax, edx
        jb public_6d95990
        public_6d959b0 : nop
        lea eax, ds:[edi+0x264]
        lea ebp, ds:[esi+0x264]
        push eax
        mov ecx, ebp
        call public_6d913f0
        mov ecx, ebp
        call public_6d913e0
        cmp eax, ebx
        je public_6d959da
        mov cl, byte ptr ds : [eax+8]
        mov byte ptr ds : [esi+0x260], cl
        jmp public_6d959e0
        public_6d959da : nop
        mov byte ptr ds : [esi+0x260], bl
        public_6d959e0 : nop
        lea ecx, ds:[edi+0x268]
        lea ebp, ds:[esi+0x268]
        cmp ebp, ecx
        je public_6d95aca
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d95a7e
        lea ebx, ds:[ebx]
        public_6d95a10 : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        je public_6d95a2e
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6d95a10
        public_6d95a2e : nop
        cmp eax, edi
        je public_6d95a7e
        jmp public_6d95a38
        public_6d95a34 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        public_6d95a38 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], eax
        push ebx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x2C]
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
        jne public_6d95a34
        mov ecx, dword ptr ss : [esp+0x10]
        public_6d95a7e : nop
        cmp ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d95aca
        public_6d95a88 : nop
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
        jne public_6d95a88
        public_6d95aca : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [ecx+0x28]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6db1f8a
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], edi
        jne public_6d95ae6
        mov ebp, eax
        public_6d95ae6 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        cmp eax, ebx
        je public_6d95afa
        mov dword ptr ds : [eax], esi
        public_6d95afa : nop
        mov eax, dword ptr ss : [esp+0x20]
        inc dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ss : [esp+0x18]
        public_6d95b05 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        jne public_6d955f9
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6d95b1c : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x6d955c0)
    }
}

#undef public_6d955f9
#undef public_6d95600
#undef public_6d956db
#undef public_6d956dd
#undef public_6d95821
#undef public_6d95823
#undef public_6d958b0
#undef public_6d958d0
#undef public_6d958fd
#undef public_6d958ff
#undef public_6d95990
#undef public_6d959b0
#undef public_6d959da
#undef public_6d959e0
#undef public_6d95a10
#undef public_6d95a2e
#undef public_6d95a34
#undef public_6d95a38
#undef public_6d95a7e
#undef public_6d95a88
#undef public_6d95aca
#undef public_6d95ae6
#undef public_6d95afa
#undef public_6d95b05
#undef public_6d95b1c
