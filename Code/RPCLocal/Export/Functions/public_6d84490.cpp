#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84490);
CLANG_FORWARD_PROC_SYMBOL(public_6d84bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d84c10);
CLANG_FORWARD_PROC_SYMBOL(public_6d852c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d852e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d854b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d855a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d855c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d85710);
CLANG_FORWARD_PROC_SYMBOL(public_6d85720);
CLANG_FORWARD_PROC_SYMBOL(public_6d85780);
CLANG_FORWARD_PROC_SYMBOL(public_6d901f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6d913e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d94460);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_JUMP_SYMBOL(public_6db23aa);

#define public_6d84510 _public_6d84510
#define public_6d84514 _public_6d84514
#define public_6d84618 _public_6d84618
#define public_6d8461a _public_6d8461a
#define public_6d847a0 _public_6d847a0
#define public_6d847b9 _public_6d847b9
#define public_6d84820 _public_6d84820
#define public_6d84839 _public_6d84839
#define public_6d84860 _public_6d84860
#define public_6d84934 _public_6d84934
#define public_6d84956 _public_6d84956
#define public_6d8496e _public_6d8496e
#define public_6d84976 _public_6d84976
#define public_6d849a0 _public_6d849a0
#define public_6d849ab _public_6d849ab
#define public_6d849ad _public_6d849ad
#define public_6d849c5 _public_6d849c5
#define public_6d849cf _public_6d849cf
#define public_6d849e7 _public_6d849e7
#define public_6d849eb _public_6d849eb
#define public_6d84a14 _public_6d84a14
#define public_6d84a25 _public_6d84a25
#define public_6d84a7b _public_6d84a7b
#define public_6d84a8c _public_6d84a8c
#define public_6d84ab5 _public_6d84ab5
#define public_6d84abf _public_6d84abf
#define public_6d84ac1 _public_6d84ac1
#define public_6d84adc _public_6d84adc
#define public_6d84ae1 _public_6d84ae1
#define public_6d84b02 _public_6d84b02
#define public_6d84b38 _public_6d84b38
#define public_6d84b80 _public_6d84b80
#define public_6d84b95 _public_6d84b95
#define public_6d84bb6 _public_6d84bb6

PROC_DECLARE(0x6d84490, internal_6d84490, public_6d84490);
extern "C" NAKED register_t __cdecl internal_6d84490()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db23aa @0x6d84492*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db23aa
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x64
        push ebp
        push esi
        push edi
        xor ebp, ebp
        push ebp
        lea ecx, ss:[esp+0x3C]
        call public_6d852c0
        mov dword ptr ss : [esp+0x38], offset public_6db3754
        mov al, byte ptr ss : [esp+0x80]
        push 0xC
        mov dword ptr ss : [esp+0x7C], ebp
        mov byte ptr ss : [esp+0x30], al
        call public_6db1f8a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ebp
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x84]
        mov byte ptr ss : [esp+0x7C], 1
        call public_6d94460
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d84a8c
        push ebx
        jmp public_6d84514
        public_6d84510 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_6d84514 : nop
        mov edi, dword ptr ds : [eax+8]
        push 0x2DC
        mov dword ptr ss : [esp+0x28], edi
        call public_6db1f8a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x20], esi
        cmp esi, ebp
        mov byte ptr ss : [esp+0x7C], 2
        je public_6d84618
        mov dl, byte ptr ss : [esp+0x84]
        lea ecx, ds:[esi+0x204]
        mov byte ptr ds : [esi], 0
        mov byte ptr ds : [esi+0x200], 0
        mov byte ptr ds : [esi+0x201], 0
        push ebp
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6db31a0]
        lea eax, ss:[esp+0x12]
        push eax
        lea ecx, ds:[esi+0x214]
        mov byte ptr ss : [esp+0x80], 3
        call dword ptr ds : [public_6db31a4]
        lea ecx, ds:[esi+0x248]
        mov byte ptr ss : [esp+0x7C], 4
        mov dword ptr ds : [esi+0x224], ebp
        mov dword ptr ds : [esi+0x230], ebp
        mov dword ptr ds : [esi+0x234], ebp
        mov dword ptr ds : [esi+0x238], ebp
        mov dword ptr ds : [esi+0x23C], ebp
        mov dword ptr ds : [esi+0x240], ebp
        mov dword ptr ds : [esi+0x244], ebp
        call dword ptr ds : [public_6db30b8]
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ds:[esi+0x254]
        mov byte ptr ss : [esp+0x80], 5
        call dword ptr ds : [public_6db30b4]
        lea ecx, ds:[esi+0x274]
        mov byte ptr ss : [esp+0x7C], 6
        mov dword ptr ds : [esi+0x260], ebp
        mov dword ptr ds : [esi+0x264], ebp
        mov dword ptr ds : [esi+0x268], ebp
        mov dword ptr ds : [esi+0x26C], ebp
        mov dword ptr ds : [esi+0x270], ebp
        call public_6d84bf0
        lea ecx, ds:[esi+0x2A8]
        call public_6d84bf0
        mov dword ptr ds : [esi+0x228], ebp
        mov dword ptr ds : [esi+0x22C], ebp
        mov ebx, esi
        jmp public_6d8461a
        public_6d84618 : nop
        xor ebx, ebx
        public_6d8461a : nop
        cmp ebx, ebp
        mov byte ptr ss : [esp+0x7C], 1
        je public_6d849ad
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6db30b0]
        mov cl, byte ptr ds : [edi+0x200]
        test cl, cl
        setne dl
        mov byte ptr ds : [ebx+0x200], dl
        mov al, byte ptr ds : [edi+0x201]
        test al, al
        setne al
        mov byte ptr ds : [ebx+0x201], al
        mov ecx, dword ptr ds : [public_6db31a8]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        lea eax, ds:[edi+0x204]
        push eax
        lea ecx, ds:[ebx+0x204]
        call dword ptr ds : [public_6db31ac]
        mov ecx, dword ptr ds : [public_6db31a8]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        lea eax, ds:[edi+0x214]
        push eax
        lea ecx, ds:[ebx+0x214]
        call dword ptr ds : [public_6db31ac]
        mov ecx, dword ptr ds : [edi+0x224]
        mov dword ptr ds : [ebx+0x224], ecx
        mov edx, dword ptr ds : [edi+0x228]
        mov dword ptr ds : [ebx+0x228], edx
        mov eax, dword ptr ds : [edi+0x22C]
        mov dword ptr ds : [ebx+0x22C], eax
        mov ecx, dword ptr ds : [edi+0x230]
        mov dword ptr ds : [ebx+0x230], ecx
        mov edx, dword ptr ds : [edi+0x234]
        mov dword ptr ds : [ebx+0x234], edx
        mov eax, dword ptr ds : [edi+0x244]
        mov dword ptr ds : [ebx+0x26C], eax
        mov ecx, dword ptr ds : [edi+0x248]
        mov dword ptr ds : [ebx+0x270], ecx
        mov edx, dword ptr ds : [edi+0x23C]
        mov dword ptr ds : [ebx+0x264], edx
        mov eax, dword ptr ds : [edi+0x240]
        mov dword ptr ds : [ebx+0x268], eax
        mov ecx, dword ptr ds : [edi+0x238]
        mov dword ptr ds : [ebx+0x260], ecx
        mov edx, dword ptr ds : [edi+0x250]
        mov dword ptr ds : [ebx+0x244], edx
        mov eax, dword ptr ds : [edi+0x254]
        mov dword ptr ds : [ebx+0x238], eax
        mov ecx, dword ptr ds : [edi+0x258]
        mov dword ptr ds : [ebx+0x240], ecx
        mov edx, dword ptr ds : [edi+0x25C]
        mov dword ptr ds : [ebx+0x23C], edx
        mov eax, dword ptr ds : [edi+0x274]
        cmp eax, ebp
        je public_6d847b9
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x278], eax
        mov ecx, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [ebx+0x274], edx
        mov eax, dword ptr ds : [edi+0x274]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ebx+0x280], ecx
        mov edx, dword ptr ds : [edi+0x274]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+0x27C], eax
        mov ecx, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ebx+0x2A4], edx
        mov eax, dword ptr ds : [edi+0x274]
        mov edx, dword ptr ds : [eax+0x10]
        cmp edx, ebp
        jbe public_6d847b9
        xor ecx, ecx
        cmp edx, ebp
        jbe public_6d847b9
        lea edx, ds:[ebx+0x284]
        nop 
        lea esp, ss:[esp]
        public_6d847a0 : nop
        mov eax, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+ecx*4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [edi+0x274]
        mov esi, dword ptr ds : [eax+0x10]
        inc ecx
        add edx, 4
        cmp ecx, esi
        jb public_6d847a0
        public_6d847b9 : nop
        mov eax, dword ptr ds : [edi+0x278]
        cmp eax, ebp
        je public_6d84839
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x2AC], ecx
        mov edx, dword ptr ds : [edi+0x278]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ebx+0x2A8], eax
        mov ecx, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [ebx+0x2B4], edx
        mov eax, dword ptr ds : [edi+0x278]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+0x2B0], ecx
        mov edx, dword ptr ds : [edi+0x278]
        mov eax, dword ptr ds : [edx+0x10]
        mov dword ptr ds : [ebx+0x2D8], eax
        mov eax, dword ptr ds : [edi+0x278]
        mov edx, dword ptr ds : [eax+0x10]
        cmp edx, ebp
        jbe public_6d84839
        xor ecx, ecx
        cmp edx, ebp
        jbe public_6d84839
        lea edx, ds:[ebx+0x2B8]
        public_6d84820 : nop
        mov eax, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+ecx*4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [edi+0x278]
        mov esi, dword ptr ds : [eax+0x10]
        inc ecx
        add edx, 4
        cmp ecx, esi
        jb public_6d84820
        public_6d84839 : nop
        lea ecx, ds:[edi+0x264]
        call public_6d913e0
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20], eax
        je public_6d84934
        mov eax, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6d84934
        lea ecx, ds:[ecx]
        public_6d84860 : nop
        mov esi, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x54]
        call dword ptr ds : [public_6db3004]
        mov edi, dword ptr ds : [ebx+0x24C]
        mov edx, dword ptr ds : [edi+4]
        lea ecx, ds:[ebx+0x248]
        push edx
        push edi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_6db30ac]
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        add eax, 8
        push eax
        call public_6d854b0
        mov ecx, dword ptr ds : [ebx+0x250]
        add esp, 8
        inc ecx
        mov dword ptr ds : [ebx+0x250], ecx
        mov eax, dword ptr ds : [ebx+0x24C]
        mov edi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        add edi, 8
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6db308c]
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6db3084]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0xC]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6db3088]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0xE]
        mov ecx, edi
        push edx
        call dword ptr ds : [public_6db307c]
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6db3080]
        mov al, byte ptr ds : [esi+0xF]
        mov byte ptr ds : [edi+0x18], al
        mov esi, dword ptr ds : [esi+0x14]
        push 0
        push esi
        call dword ptr ds : [public_6db3078]
        add esp, 8
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_6db3074]
        mov edx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [edx+4]
        jne public_6d84860
        mov edi, dword ptr ss : [esp+0x24]
        public_6d84934 : nop
        add edi, 0x268
        lea ebp, ds:[ebx+0x254]
        cmp ebp, edi
        je public_6d849ab
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x24], ecx
        je public_6d8496e
        public_6d84956 : nop
        cmp edi, ecx
        je public_6d8496e
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov edi, dword ptr ds : [edi]
        jne public_6d84956
        public_6d8496e : nop
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], eax
        je public_6d849a0
        public_6d84976 : nop
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6d85710
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_6db309c]
        cmp dword ptr ss : [esp+0x18], esi
        jne public_6d84976
        mov ecx, dword ptr ss : [esp+0x24]
        public_6d849a0 : nop
        push ecx
        push edi
        push esi
        mov ecx, ebp
        call dword ptr ds : [public_6db30a8]
        public_6d849ab : nop
        xor ebp, ebp
        public_6d849ad : nop
        mov al, byte ptr ss : [esp+0x48]
        test al, al
        je public_6d849c5
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, ebp
        je public_6d849c5
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x4C], ecx
        jmp public_6d849cf
        public_6d849c5 : nop
        push 0xC
        call public_6db1f8a
        add esp, 4
        public_6d849cf : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+8], ebx
        mov ecx, dword ptr ss : [esp+0x44]
        cmp ecx, ebp
        je public_6d849e7
        mov dword ptr ds : [ecx], eax
        jmp public_6d849eb
        public_6d849e7 : nop
        mov dword ptr ss : [esp+0x40], eax
        public_6d849eb : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x44], eax
        mov esi, dword ptr ds : [edi+8]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x24], esi
        je public_6d84a7b
        mov ecx, dword ptr ds : [esi+0x274]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x7C], 0xA
        je public_6d84a14
        push 1
        call public_6d84c10
        public_6d84a14 : nop
        mov ecx, dword ptr ds : [esi+0x278]
        cmp ecx, ebp
        je public_6d84a25
        push 1
        call public_6d84c10
        public_6d84a25 : nop
        lea ecx, ds:[esi+0x268]
        mov byte ptr ss : [esp+0x7C], 9
        call dword ptr ds : [public_6db3018]
        lea ecx, ds:[esi+0x264]
        mov byte ptr ss : [esp+0x7C], 8
        call public_6d91340
        push 1
        lea ecx, ds:[esi+0x214]
        mov byte ptr ss : [esp+0x80], 7
        call dword ptr ds : [public_6db31a0]
        push 1
        lea ecx, ds:[esi+0x204]
        mov byte ptr ss : [esp+0x80], 1
        call dword ptr ds : [public_6db31a0]
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d84a7b : nop
        mov eax, dword ptr ds : [edi]
        cmp eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x14], eax
        jne public_6d84510
        pop ebx
        public_6d84a8c : nop
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [eax+0x20]
        lea eax, ss:[esp+0x38]
        push eax
        mov eax, dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x34]
        xor esi, esi
        public_6d84ab5 : nop
        cmp esi, ebp
        jne public_6d84abf
        mov esi, dword ptr ss : [esp+0x3C]
        jmp public_6d84ac1
        public_6d84abf : nop
        mov esi, dword ptr ds : [esi]
        public_6d84ac1 : nop
        cmp esi, ebp
        je public_6d84ae1
        mov edi, dword ptr ds : [esi+8]
        cmp edi, ebp
        je public_6d84adc
        mov ecx, edi
        call public_6d855c0
        push edi
        call public_6db1dc2
        add esp, 4
        public_6d84adc : nop
        mov dword ptr ds : [esi+8], ebp
        jmp public_6d84ab5
        public_6d84ae1 : nop
        lea ecx, ss:[esp+0x38]
        call public_6d85780
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x78], 0
        mov esi, eax
        mov dword ptr ss : [esp+0x80], ecx
        je public_6d84b38
        public_6d84b02 : nop
        push ebp
        lea ecx, ss:[esp+0x88]
        push ecx
        lea ecx, ss:[esp+0x88]
        call public_6d85710
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6d901f0
        cmp dword ptr ss : [esp+0x80], esi
        jne public_6d84b02
        mov eax, dword ptr ss : [esp+0x30]
        public_6d84b38 : nop
        push eax
        call public_6db1dc2
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x38], offset public_6db3754
        push 1
        lea ecx, ss:[esp+0x84]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x80], 0xB
        mov dword ptr ss : [esp+0x88], ebp
        call public_6d85720
        test al, al
        je public_6d84bb6
        lea ebx, ds:[ebx]
        public_6d84b80 : nop
        mov edx, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ds : [edx+8]
        cmp ecx, ebp
        je public_6d84b95
        push 1
        call public_6d855a0
        public_6d84b95 : nop
        mov eax, dword ptr ss : [esp+0x80]
        push 1
        lea ecx, ss:[esp+0x84]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ds : [eax+8], ebp
        call public_6d85720
        test al, al
        jne public_6d84b80
        public_6d84bb6 : nop
        lea ecx, ss:[esp+0x38]
        call public_6d85780
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x78], 0xFFFFFFFF
        call public_6d852e0
        mov ecx, dword ptr ss : [esp+0x70]
        pop edi
        pop esi
        mov al, 1
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x70
        ret 0xC
        UNREACHABLE_TRAP(0x6d84490)
    }
}

#undef public_6d84510
#undef public_6d84514
#undef public_6d84618
#undef public_6d8461a
#undef public_6d847a0
#undef public_6d847b9
#undef public_6d84820
#undef public_6d84839
#undef public_6d84860
#undef public_6d84934
#undef public_6d84956
#undef public_6d8496e
#undef public_6d84976
#undef public_6d849a0
#undef public_6d849ab
#undef public_6d849ad
#undef public_6d849c5
#undef public_6d849cf
#undef public_6d849e7
#undef public_6d849eb
#undef public_6d84a14
#undef public_6d84a25
#undef public_6d84a7b
#undef public_6d84a8c
#undef public_6d84ab5
#undef public_6d84abf
#undef public_6d84ac1
#undef public_6d84adc
#undef public_6d84ae1
#undef public_6d84b02
#undef public_6d84b38
#undef public_6d84b80
#undef public_6d84b95
#undef public_6d84bb6
