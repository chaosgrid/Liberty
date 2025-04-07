#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85710);
CLANG_FORWARD_PROC_SYMBOL(public_6d8cb20);
CLANG_FORWARD_PROC_SYMBOL(public_6d8cb70);
CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6d91580);
CLANG_FORWARD_PROC_SYMBOL(public_6d955c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db25bb);

#define public_6d898f0 _public_6d898f0
#define public_6d89901 _public_6d89901
#define public_6d89907 _public_6d89907
#define public_6d899e1 _public_6d899e1
#define public_6d899e3 _public_6d899e3
#define public_6d89b57 _public_6d89b57
#define public_6d89b59 _public_6d89b59
#define public_6d89c08 _public_6d89c08
#define public_6d89c25 _public_6d89c25
#define public_6d89c46 _public_6d89c46
#define public_6d89c48 _public_6d89c48
#define public_6d89cf7 _public_6d89cf7
#define public_6d89d14 _public_6d89d14
#define public_6d89d28 _public_6d89d28
#define public_6d89d53 _public_6d89d53
#define public_6d89d97 _public_6d89d97
#define public_6d89dd2 _public_6d89dd2
#define public_6d89df8 _public_6d89df8
#define public_6d89e10 _public_6d89e10
#define public_6d89e18 _public_6d89e18
#define public_6d89e41 _public_6d89e41
#define public_6d89e4c _public_6d89e4c
#define public_6d89e8f _public_6d89e8f
#define public_6d89ed0 _public_6d89ed0
#define public_6d89efe _public_6d89efe
#define public_6d89f07 _public_6d89f07
#define public_6d89f21 _public_6d89f21
#define public_6d89f2a _public_6d89f2a
#define public_6d89f9e _public_6d89f9e
#define public_6d89faa _public_6d89faa
#define public_6d89fc9 _public_6d89fc9
#define public_6d89fd4 _public_6d89fd4
#define public_6d89fe0 _public_6d89fe0
#define public_6d8a00d _public_6d8a00d
#define public_6d8a019 _public_6d8a019

PROC_DECLARE(0x6d89890, internal_6d89890, public_6d89890);
extern "C" NAKED register_t __cdecl internal_6d89890()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db25bb @0x6d89892*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db25bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 3
        push 2
        mov dword ptr ss : [esp+0x28], esi
        call public_6d96300
        test eax, eax
        jne public_6d8a019
        mov cl, byte ptr ss : [esp+0x48]
        push ebx
        push ebp
        push edi
        xor ebx, ebx
        push ebx
        mov byte ptr ss : [esp+0x38], cl
        push ebx
        lea ecx, ss:[esp+0x3C]
        call public_6d8cb20
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x48], ebx
        xor eax, eax
        mov edi, edi
        public_6d898f0 : nop
        cmp eax, ebx
        jne public_6d89901
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6d89907
        public_6d89901 : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], eax
        public_6d89907 : nop
        cmp eax, ebx
        je public_6d89e8f
        mov esi, dword ptr ds : [eax+8]
        cmp esi, ebx
        je public_6d89e4c
        push 0x27C
        call public_6db1f8a
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x24], edi
        cmp edi, ebx
        mov byte ptr ss : [esp+0x48], 1
        je public_6d899e1
        mov dl, byte ptr ss : [esp+0x54]
        lea ecx, ds:[edi+0x204]
        mov byte ptr ds : [edi], 0
        mov byte ptr ds : [edi+0x200], 0
        mov byte ptr ds : [edi+0x201], 0
        push ebx
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6db31a0]
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ds:[edi+0x214]
        mov byte ptr ss : [esp+0x4C], 2
        call dword ptr ds : [public_6db31a4]
        mov dword ptr ds : [edi+0x224], ebx
        mov dword ptr ds : [edi+0x244], ebx
        mov dword ptr ds : [edi+0x248], ebx
        mov dword ptr ds : [edi+0x24C], ebx
        mov dword ptr ds : [edi+0x250], ebx
        mov dword ptr ds : [edi+0x254], ebx
        mov dword ptr ds : [edi+0x258], ebx
        mov dword ptr ds : [edi+0x25C], ebx
        mov byte ptr ds : [edi+0x260], 0
        mov dword ptr ds : [edi+0x264], ebx
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ds:[edi+0x268]
        mov byte ptr ss : [esp+0x4C], 4
        call dword ptr ds : [public_6db30b4]
        mov dword ptr ds : [edi+0x274], ebx
        mov dword ptr ds : [edi+0x278], ebx
        mov dword ptr ds : [edi+0x228], ebx
        mov dword ptr ds : [edi+0x22C], ebx
        jmp public_6d899e3
        public_6d899e1 : nop
        xor edi, edi
        public_6d899e3 : nop
        push esi
        mov ecx, edi
        mov byte ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x18], edi
        call dword ptr ds : [public_6db30b0]
        mov dl, byte ptr ds : [esi+0x200]
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax+0x200], dl
        mov cl, byte ptr ds : [esi+0x201]
        mov edx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [edx+0x201], cl
        mov eax, dword ptr ds : [public_6db31a8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push ebx
        lea edx, ds:[esi+0x204]
        push edx
        lea ecx, ds:[eax+0x204]
        call dword ptr ds : [public_6db31ac]
        mov ecx, dword ptr ds : [public_6db31a8]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        push ebx
        lea eax, ds:[esi+0x214]
        push eax
        add ecx, 0x214
        call dword ptr ds : [public_6db31ac]
        mov edx, dword ptr ds : [esi+0x224]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x224], edx
        mov ecx, dword ptr ds : [esi+0x228]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x228], ecx
        mov eax, dword ptr ds : [esi+0x22C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x22C], eax
        mov edx, dword ptr ds : [esi+0x230]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x230], edx
        mov ecx, dword ptr ds : [esi+0x234]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x234], ecx
        mov eax, dword ptr ds : [esi+0x260]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x238], eax
        mov edx, dword ptr ds : [esi+0x26C]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x244], edx
        mov ecx, dword ptr ds : [esi+0x270]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x248], ecx
        mov eax, dword ptr ds : [esi+0x264]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x23C], eax
        mov edx, dword ptr ds : [esi+0x268]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x240], edx
        mov ecx, dword ptr ds : [esi+0x244]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+0x250], ecx
        mov eax, dword ptr ds : [esi+0x238]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x254], eax
        mov edx, dword ptr ds : [esi+0x240]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x258], edx
        mov ecx, dword ptr ds : [esi+0x23C]
        mov edx, dword ptr ss : [esp+0x14]
        push 0x18
        mov dword ptr ds : [edx+0x25C], ecx
        call public_6db1f8a
        add esp, 4
        cmp eax, ebx
        je public_6d89b57
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6d89b59
        public_6d89b57 : nop
        xor eax, eax
        public_6d89b59 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x274], eax
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [esi+0x278]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [esi+0x274]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [esi+0x27C]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [esi+0x280]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [esi+0x2A4]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x274]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        jbe public_6d89c25
        lea ecx, ds:[eax*4]
        push ecx
        call public_6db1f8a
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+0x274]
        mov dword ptr ds : [ecx+0x14], eax
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+0x274]
        mov edx, dword ptr ds : [eax+0x10]
        add esp, 4
        xor ecx, ecx
        cmp edx, ebx
        jbe public_6d89c25
        lea edx, ds:[esi+0x284]
        public_6d89c08 : nop
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax+ecx*4], edi
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x274]
        mov edi, dword ptr ds : [eax+0x10]
        inc ecx
        add edx, 4
        cmp ecx, edi
        jb public_6d89c08
        public_6d89c25 : nop
        push 0x18
        call public_6db1f8a
        add esp, 4
        cmp eax, ebx
        je public_6d89c46
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], ebx
        jmp public_6d89c48
        public_6d89c46 : nop
        xor eax, eax
        public_6d89c48 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x278], eax
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ds : [esi+0x2AC]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ds : [esi+0x2A8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ds : [esi+0x2B0]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ds : [esi+0x2B4]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ds : [esi+0x2D8]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x278]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, ebx
        jbe public_6d89d14
        lea ecx, ds:[eax*4]
        push ecx
        call public_6db1f8a
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+0x278]
        mov dword ptr ds : [ecx+0x14], eax
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx+0x278]
        mov edx, dword ptr ds : [eax+0x10]
        add esp, 4
        xor ecx, ecx
        cmp edx, ebx
        jbe public_6d89d14
        lea edx, ds:[esi+0x2B8]
        public_6d89cf7 : nop
        mov eax, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax+ecx*4], edi
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x278]
        mov edi, dword ptr ds : [eax+0x10]
        inc ecx
        add edx, 4
        cmp ecx, edi
        jb public_6d89cf7
        public_6d89d14 : nop
        mov eax, dword ptr ds : [esi+0x24C]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6d89dd2
        public_6d89d28 : nop
        push 0x18
        call public_6db1f8a
        add esp, 4
        cmp eax, ebx
        je public_6d89d53
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov word ptr ds : [eax+0xC], bx
        mov word ptr ds : [eax+0x10], bx
        mov dword ptr ds : [eax+0x14], ebx
        mov byte ptr ds : [eax+0xE], 0
        mov byte ptr ds : [eax+0xF], 0
        mov ebx, eax
        public_6d89d53 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ebx+4], edx
        fld dword ptr ss : [ebp+0x18]
        fstp dword ptr ds : [ebx+8]
        mov ax, word ptr ss : [ebp+0xA]
        mov word ptr ds : [ebx+0xC], ax
        mov cl, byte ptr ss : [ebp+0x14]
        mov byte ptr ds : [ebx+0xE], cl
        mov dl, byte ptr ss : [ebp+0x20]
        mov byte ptr ds : [ebx+0xF], dl
        mov edi, dword ptr ss : [ebp+0x10]
        xor eax, eax
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        push ecx
        call public_6db1f8a
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, dword ptr ss : [ebp+0x10]
        add esp, 4
        mov edx, eax
        public_6d89d97 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6d89d97
        mov edi, dword ptr ss : [ebp+0x10]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        mov word ptr ds : [ebx+0x10], cx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        lea ecx, ds:[eax+0x264]
        call public_6d91580
        mov ebp, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x20]
        xor ebx, ebx
        cmp ebp, eax
        jne public_6d89d28
        public_6d89dd2 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        add esi, 0x254
        lea ebp, ds:[ecx+0x268]
        cmp ebp, esi
        je public_6d89e4c
        mov edi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x24], ecx
        je public_6d89e10
        public_6d89df8 : nop
        cmp esi, ecx
        je public_6d89e10
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov esi, dword ptr ds : [esi]
        jne public_6d89df8
        public_6d89e10 : nop
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], eax
        je public_6d89e41
        public_6d89e18 : nop
        push ebx
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_6d85710
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_6db309c]
        cmp dword ptr ss : [esp+0x20], edi
        jne public_6d89e18
        mov ecx, dword ptr ss : [esp+0x24]
        public_6d89e41 : nop
        push ecx
        push esi
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6db30a8]
        public_6d89e4c : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6d8cb20
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6d8cb70
        mov eax, dword ptr ss : [esp+0x44]
        mov esi, dword ptr ss : [esp+0x30]
        add esp, 8
        inc eax
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x18]
        jmp public_6d898f0
        public_6d89e8f : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x34]
        push edx
        call public_6d955c0
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6d89fd4
        lea ebx, ds:[ebx]
        public_6d89ed0 : nop
        mov edi, dword ptr ss : [ebp+8]
        cmp edi, ebx
        je public_6d89fc9
        mov dword ptr ss : [esp+0x54], edi
        mov esi, dword ptr ds : [edi+0x274]
        cmp esi, ebx
        mov byte ptr ss : [esp+0x48], 7
        je public_6d89f07
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6d89efe
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d89efe : nop
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d89f07 : nop
        mov esi, dword ptr ds : [edi+0x278]
        cmp esi, ebx
        je public_6d89f2a
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6d89f21
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d89f21 : nop
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d89f2a : nop
        mov eax, dword ptr ds : [edi+0x26C]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x268]
        push eax
        push ecx
        lea eax, ss:[esp+0x58]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6db3040]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6db1dc2
        add esp, 4
        lea ecx, ds:[edi+0x264]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ss : [esp+0x48], 6
        call public_6d91340
        push 1
        lea ecx, ds:[edi+0x214]
        mov byte ptr ss : [esp+0x4C], 5
        call dword ptr ds : [public_6db31a0]
        mov eax, dword ptr ds : [edi+0x208]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x48], 0
        je public_6d89faa
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d89f9e
        cmp cl, 0xFF
        je public_6d89f9e
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d89faa
        public_6d89f9e : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d89faa : nop
        push edi
        mov dword ptr ds : [edi+0x208], ebx
        mov dword ptr ds : [edi+0x20C], ebx
        mov dword ptr ds : [edi+0x210], ebx
        call public_6db1dc2
        mov eax, dword ptr ss : [esp+0x3C]
        add esp, 4
        public_6d89fc9 : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6d89ed0
        public_6d89fd4 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6d8a00d
        lea esp, ss:[esp]
        public_6d89fe0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6db1dc2
        mov ecx, dword ptr ss : [esp+0x40]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x3C], ecx
        jne public_6d89fe0
        mov eax, dword ptr ss : [esp+0x38]
        public_6d8a00d : nop
        push eax
        call public_6db1dc2
        add esp, 4
        pop edi
        pop ebp
        pop ebx
        public_6d8a019 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x6d89890)
    }
}

#undef public_6d898f0
#undef public_6d89901
#undef public_6d89907
#undef public_6d899e1
#undef public_6d899e3
#undef public_6d89b57
#undef public_6d89b59
#undef public_6d89c08
#undef public_6d89c25
#undef public_6d89c46
#undef public_6d89c48
#undef public_6d89cf7
#undef public_6d89d14
#undef public_6d89d28
#undef public_6d89d53
#undef public_6d89d97
#undef public_6d89dd2
#undef public_6d89df8
#undef public_6d89e10
#undef public_6d89e18
#undef public_6d89e41
#undef public_6d89e4c
#undef public_6d89e8f
#undef public_6d89ed0
#undef public_6d89efe
#undef public_6d89f07
#undef public_6d89f21
#undef public_6d89f2a
#undef public_6d89f9e
#undef public_6d89faa
#undef public_6d89fc9
#undef public_6d89fd4
#undef public_6d89fe0
#undef public_6d8a00d
#undef public_6d8a019
