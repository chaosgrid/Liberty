#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6cf1990);
CLANG_FORWARD_PROC_SYMBOL(public_6d00010);
CLANG_FORWARD_PROC_SYMBOL(public_6d0a060);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d18880);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d49960);
CLANG_FORWARD_PROC_SYMBOL(public_6d499c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c430);
CLANG_FORWARD_PROC_SYMBOL(public_6d59620);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a930);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d631f6);

#define public_6d49a07 _public_6d49a07
#define public_6d49a62 _public_6d49a62
#define public_6d49a79 _public_6d49a79
#define public_6d49a7b _public_6d49a7b
#define public_6d49ab2 _public_6d49ab2
#define public_6d49bbf _public_6d49bbf
#define public_6d49bc1 _public_6d49bc1
#define public_6d49cc0 _public_6d49cc0
#define public_6d49ccc _public_6d49ccc
#define public_6d49d60 _public_6d49d60
#define public_6d49d81 _public_6d49d81
#define public_6d49dab _public_6d49dab
#define public_6d49e28 _public_6d49e28
#define public_6d49e3a _public_6d49e3a
#define public_6d49e71 _public_6d49e71
#define public_6d49e81 _public_6d49e81
#define public_6d49e85 _public_6d49e85
#define public_6d49e95 _public_6d49e95
#define public_6d49e97 _public_6d49e97
#define public_6d49eb2 _public_6d49eb2
#define public_6d49ed5 _public_6d49ed5
#define public_6d49f02 _public_6d49f02
#define public_6d49f09 _public_6d49f09
#define public_6d49f21 _public_6d49f21

PROC_DECLARE(0x6d499c0, internal_6d499c0, public_6d499c0);
extern "C" NAKED register_t __cdecl internal_6d499c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d631f6 @0x6d499c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d631f6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x230
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_6d647e8]
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x24], ebx
        call esi
        test al, al
        je public_6d49a79
        call esi
        test al, al
        je public_6d49a07
        mov dl, byte ptr ds : [ebx+0x64]
        test dl, dl
        setne al
        test al, al
        je public_6d49a79
        public_6d49a07 : nop
        mov ecx, ebx
        call public_6d4c430
        mov esi, dword ptr ds : [ebx+0x348]
        mov ecx, dword ptr ds : [public_6d90260]
        mov eax, esi
        imul eax, 0x418
        push esi
        lea edi, ds:[eax+ecx-0x418]
        call public_6d00010
        push esi
        call public_6d18880
        mov eax, dword ptr ds : [edi+0x3E0]
        add esp, 8
        xor ebp, ebp
        test eax, 0x3FFFFFFF
        je public_6d49a62
        lea edx, ss:[esp+0x28]
        push edx
        push 0x3A
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ebp
        mov dword ptr ss : [esp+0x38], esi
        call public_6d43650
        add esp, 8
        public_6d49a62 : nop
        cmp dword ptr ds : [edi+0x3CC], ebp
        je public_6d49a7b
        push 4
        push esi
        mov ecx, offset public_6d8facc
        call public_6cf1990
        jmp public_6d49a7b
        public_6d49a79 : nop
        xor ebp, ebp
        public_6d49a7b : nop
        mov esi, dword ptr ds : [public_6d64c74]
/*FIXUP push offset public_6d6ae30 @0x6d49a81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae30
        lea eax, ss:[esp+0x3C]
/*FIXUP push offset public_6d6b438 @0x6d49a8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b438
        push eax
        call esi
/*FIXUP push offset public_6d6ae38 @0x6d49a92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae38
        lea ecx, ss:[esp+0x14C]
/*FIXUP push offset public_6d6b438 @0x6d49a9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b438
        push ecx
        call esi
        mov eax, dword ptr ds : [ebx+0x54]
        mov edx, dword ptr ds : [eax]
        add esp, 0x18
        mov dword ptr ss : [esp+0x1C], edx
        public_6d49ab2 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [ebx+0x54]
        je public_6d49f21
        push 0x2DC
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebp
        mov dword ptr ss : [esp+0x248], ebp
        je public_6d49bbf
        mov dl, byte ptr ss : [esp+0x13]
        lea ecx, ds:[esi+0x204]
        mov byte ptr ds : [esi], 0
        mov byte ptr ds : [esi+0x200], 0
        mov byte ptr ds : [esi+0x201], 0
        push ebp
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_6d64b58]
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ds:[esi+0x214]
        mov byte ptr ss : [esp+0x24C], 1
        call dword ptr ds : [public_6d64b10]
        lea ecx, ds:[esi+0x248]
        mov byte ptr ss : [esp+0x248], 2
        mov dword ptr ds : [esi+0x224], ebp
        mov dword ptr ds : [esi+0x230], ebp
        mov dword ptr ds : [esi+0x234], ebp
        mov dword ptr ds : [esi+0x238], ebp
        mov dword ptr ds : [esi+0x23C], ebp
        mov dword ptr ds : [esi+0x240], ebp
        mov dword ptr ds : [esi+0x244], ebp
        call dword ptr ds : [public_6d648f0]
        lea ecx, ss:[esp+0x23]
        push ecx
        lea ecx, ds:[esi+0x254]
        mov byte ptr ss : [esp+0x24C], 3
        call dword ptr ds : [public_6d646ac]
        lea ecx, ds:[esi+0x274]
        mov byte ptr ss : [esp+0x248], 4
        mov dword ptr ds : [esi+0x260], ebp
        mov dword ptr ds : [esi+0x264], ebp
        mov dword ptr ds : [esi+0x268], ebp
        mov dword ptr ds : [esi+0x26C], ebp
        mov dword ptr ds : [esi+0x270], ebp
        call public_6d0a060
        lea ecx, ds:[esi+0x2A8]
        call public_6d0a060
        mov dword ptr ds : [esi+0x228], ebp
        mov dword ptr ds : [esi+0x22C], ebp
        jmp public_6d49bc1
        public_6d49bbf : nop
        xor esi, esi
        public_6d49bc1 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea edi, ds:[eax+0x20C]
        add eax, 0xC
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24C], 0xFFFFFFFF
        call dword ptr ds : [public_6d648ec]
        mov ebx, dword ptr ds : [public_6d64a48]
        lea edx, ss:[esp+0x38]
        push edi
        push edx
        call ebx
        neg eax
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x200], al
        lea eax, ss:[esp+0x144]
        push edi
        push eax
        call ebx
        add esp, 0x10
        neg eax
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x201], al
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        lea eax, ds:[edi+0x200]
        push eax
        lea ecx, ds:[esi+0x204]
        call dword ptr ds : [public_6d64b6c]
        mov ecx, dword ptr ds : [public_6d64b64]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        lea eax, ds:[edi+0x210]
        lea ebx, ds:[esi+0x214]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6d64b6c]
        mov ecx, dword ptr ds : [edi+0x220]
        mov dword ptr ds : [esi+0x224], ecx
        mov edx, dword ptr ds : [edi+0x224]
        mov dword ptr ds : [esi+0x228], edx
        mov eax, dword ptr ds : [edi+0x228]
        mov dword ptr ds : [esi+0x22C], eax
        mov al, byte ptr ds : [esi+0x201]
        test al, al
        je public_6d49ccc
/*FIXUP push offset public_6d6b2f8 @0x6d49c80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2f8
        call dword ptr ds : [public_6d64c80]
        add esp, 4
        push 1
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d49cc0
        mov ebp, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+4]
        push ebp
/*FIXUP push offset public_6d6b2f8 @0x6d49ca9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2f8
        push ecx
        call public_6ce1960
        add esp, 0xC
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6d64b60]
        public_6d49cc0 : nop
        mov dword ptr ds : [esi+0x224], 0x65C
        xor ebp, ebp
        public_6d49ccc : nop
        mov edx, dword ptr ds : [edi+0x22C]
        mov dword ptr ds : [esi+0x230], edx
        mov eax, dword ptr ds : [edi+0x230]
        mov dword ptr ds : [esi+0x234], eax
        mov ecx, dword ptr ds : [edi+0x234]
        mov dword ptr ds : [esi+0x238], ecx
        mov edx, dword ptr ds : [edi+0x238]
        mov dword ptr ds : [esi+0x23C], edx
        mov eax, dword ptr ds : [edi+0x23C]
        mov dword ptr ds : [esi+0x240], eax
        mov ecx, dword ptr ds : [edi+0x240]
        lea edx, ds:[edi+0x244]
        mov dword ptr ds : [esi+0x244], ecx
        push edx
        lea ecx, ds:[esi+0x248]
        call dword ptr ds : [public_6d648e8]
        lea ecx, ds:[edi+0x250]
        lea eax, ds:[esi+0x254]
        cmp eax, ecx
        je public_6d49dab
        mov ebx, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6d646b8]
        cmp ebp, ebx
        mov ecx, dword ptr ds : [edi+0x254]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d49d81
        mov eax, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6d49d60 : nop
        cmp eax, ecx
        je public_6d49d81
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        mov edx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, ebx
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x18], eax
        jne public_6d49d60
        public_6d49d81 : nop
        push ebx
        push ebp
        lea eax, ss:[esp+0x3C]
        lea ebp, ds:[esi+0x254]
        push eax
        mov ecx, ebp
        call dword ptr ds : [public_6d643a8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6d643a4]
        xor ebp, ebp
        public_6d49dab : nop
        mov eax, dword ptr ds : [edi+0x284]
        mov dword ptr ds : [esi+0x260], eax
        mov ecx, dword ptr ds : [edi+0x278]
        mov dword ptr ds : [esi+0x264], ecx
        mov edx, dword ptr ds : [edi+0x280]
        lea eax, ds:[edi+0x30C]
        push eax
        mov dword ptr ds : [esi+0x268], edx
        call dword ptr ds : [public_6d643b4]
        mov dword ptr ds : [esi+0x26C], eax
        mov ecx, dword ptr ds : [edi+0x2BC]
        mov dword ptr ds : [esi+0x270], ecx
        mov edx, dword ptr ds : [edi+0x32C]
        lea ecx, ds:[edi+0x32C]
        lea eax, ds:[esi+0x2A8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x30]
        add esp, 4
        xor ebx, ebx
        cmp edx, ebp
        mov dword ptr ds : [eax+0x30], edx
        jle public_6d49e3a
        lea edx, ds:[eax+0x10]
        sub ecx, eax
        public_6d49e28 : nop
        mov ebp, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [eax+0x30]
        inc ebx
        add edx, 4
        cmp ebx, ebp
        jl public_6d49e28
        xor ebp, ebp
        public_6d49e3a : nop
        mov edx, dword ptr ds : [edi+0x2D4]
        lea ecx, ds:[edi+0x2D4]
        lea eax, ds:[esi+0x274]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x30]
        xor edi, edi
        cmp edx, ebp
        mov dword ptr ds : [eax+0x30], edx
        jle public_6d49e81
        lea edx, ds:[eax+0x10]
        sub ecx, eax
        public_6d49e71 : nop
        mov ebx, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [eax+0x30]
        inc edi
        add edx, 4
        cmp edi, ebx
        jl public_6d49e71
        public_6d49e81 : nop
        xor edi, edi
        xor ebx, ebx
        public_6d49e85 : nop
        cmp edi, ebp
        jne public_6d49e95
        mov eax, dword ptr ss : [esp+0x250]
        mov edi, dword ptr ds : [eax+4]
        jmp public_6d49e97
        public_6d49e95 : nop
        mov edi, dword ptr ds : [edi]
        public_6d49e97 : nop
        cmp edi, ebp
        je public_6d49f02
        mov eax, dword ptr ds : [edi+8]
        push eax
        push esi
        call public_6d49960
        add esp, 8
        xor ebp, ebp
        test al, al
        jne public_6d49eb2
        mov ebx, edi
        jmp public_6d49e85
        public_6d49eb2 : nop
        cmp ebx, ebp
        mov ecx, dword ptr ss : [esp+0x250]
        jne public_6d49ed5
        push esi
        call public_6d5b0b0
        lea ecx, ss:[esp+0x1C]
        call public_6d59620
        mov ebx, dword ptr ss : [esp+0x24]
        jmp public_6d49ab2
        public_6d49ed5 : nop
        cmp dword ptr ds : [ecx+8], ebx
        je public_6d49f09
        call public_6d11850
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+4], ebx
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ds : [edx+4], eax
        call public_6d59620
        mov ebx, dword ptr ss : [esp+0x24]
        jmp public_6d49ab2
        public_6d49f02 : nop
        mov ecx, dword ptr ss : [esp+0x250]
        public_6d49f09 : nop
        push esi
        call public_6d5a930
        lea ecx, ss:[esp+0x1C]
        call public_6d59620
        mov ebx, dword ptr ss : [esp+0x24]
        jmp public_6d49ab2
        public_6d49f21 : nop
        mov eax, dword ptr ds : [ebx+0x344]
        mov ecx, dword ptr ss : [esp+0x250]
        pop edi
        mov dword ptr ds : [ecx+0x14], eax
        mov ecx, dword ptr ss : [esp+0x23C]
        mov dword ptr ds : [ebx+0x344], ebp
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x23C
        ret 4
        UNREACHABLE_TRAP(0x6d499c0)
    }
}

#undef public_6d49a07
#undef public_6d49a62
#undef public_6d49a79
#undef public_6d49a7b
#undef public_6d49ab2
#undef public_6d49bbf
#undef public_6d49bc1
#undef public_6d49cc0
#undef public_6d49ccc
#undef public_6d49d60
#undef public_6d49d81
#undef public_6d49dab
#undef public_6d49e28
#undef public_6d49e3a
#undef public_6d49e71
#undef public_6d49e81
#undef public_6d49e85
#undef public_6d49e95
#undef public_6d49e97
#undef public_6d49eb2
#undef public_6d49ed5
#undef public_6d49f02
#undef public_6d49f09
#undef public_6d49f21
