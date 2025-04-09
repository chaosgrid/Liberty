#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4650f0);
CLANG_FORWARD_PROC_SYMBOL(public_465110);
CLANG_FORWARD_PROC_SYMBOL(public_465a90);
CLANG_FORWARD_PROC_SYMBOL(public_4669c0);
CLANG_FORWARD_PROC_SYMBOL(public_468310);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_579860);
CLANG_FORWARD_PROC_SYMBOL(public_579870);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_5799f0);
CLANG_FORWARD_PROC_SYMBOL(public_579a50);
CLANG_FORWARD_PROC_SYMBOL(public_579c30);
CLANG_FORWARD_PROC_SYMBOL(public_579c40);
CLANG_FORWARD_PROC_SYMBOL(public_579cc0);
CLANG_FORWARD_PROC_SYMBOL(public_57a610);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57eb40);
CLANG_FORWARD_PROC_SYMBOL(public_58cb70);
CLANG_FORWARD_PROC_SYMBOL(public_58cb80);
CLANG_FORWARD_PROC_SYMBOL(public_58cbe0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0f0);
CLANG_FORWARD_PROC_SYMBOL(public_58d250);
CLANG_FORWARD_PROC_SYMBOL(public_58d560);
CLANG_FORWARD_PROC_SYMBOL(public_58d590);
CLANG_FORWARD_PROC_SYMBOL(public_58d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d5d0);
CLANG_FORWARD_PROC_SYMBOL(public_58d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_58f730);
CLANG_FORWARD_PROC_SYMBOL(public_58f740);
CLANG_FORWARD_PROC_SYMBOL(public_58f810);
CLANG_FORWARD_PROC_SYMBOL(public_599980);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c90);
CLANG_FORWARD_PROC_SYMBOL(public_5a10e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1340);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb4ae);

#define public_467100 _public_467100
#define public_4671a2 _public_4671a2
#define public_4671d7 _public_4671d7
#define public_467227 _public_467227
#define public_46728c _public_46728c
#define public_46729a _public_46729a
#define public_4672f6 _public_4672f6
#define public_467327 _public_467327
#define public_467377 _public_467377
#define public_4673dc _public_4673dc
#define public_4673ea _public_4673ea
#define public_467446 _public_467446
#define public_467474 _public_467474
#define public_4674c4 _public_4674c4
#define public_467529 _public_467529
#define public_467537 _public_467537
#define public_46755d _public_46755d
#define public_4675c7 _public_4675c7
#define public_467648 _public_467648
#define public_46765a _public_46765a
#define public_467670 _public_467670
#define public_467691 _public_467691
#define public_467779 _public_467779
#define public_4678e3 _public_4678e3
#define public_46792b _public_46792b
#define public_46792d _public_46792d
#define public_467940 _public_467940
#define public_46794a _public_46794a
#define public_467955 _public_467955
#define public_467969 _public_467969
#define public_46797b _public_46797b
#define public_467ab0 _public_467ab0
#define public_467af8 _public_467af8
#define public_467afa _public_467afa
#define public_467b0d _public_467b0d
#define public_467b17 _public_467b17
#define public_467b22 _public_467b22
#define public_467b36 _public_467b36
#define public_467b90 _public_467b90
#define public_467be1 _public_467be1
#define public_467be4 _public_467be4
#define public_467e15 _public_467e15
#define public_467e20 _public_467e20
#define public_467e42 _public_467e42
#define public_467e4d _public_467e4d
#define public_467e5b _public_467e5b
#define public_467e76 _public_467e76
#define public_467e81 _public_467e81
#define public_467eaa _public_467eaa

PROC_DECLARE(0x4670c0, internal_4670c0, public_4670c0);
extern "C" NAKED register_t __cdecl internal_4670c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bb4ae @0x4670c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb4ae
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push esi
        xor ebx, ebx
        push ebx
        push eax
        mov esi, ecx
        call public_4b5060
        test al, al
        jne public_467100
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        public_467100 : nop
        push ebp
        mov dword ptr ss : [esp+0x24], 0
        mov edx, dword ptr ss : [esp+0x24]
        lea ecx, ds:[esi+0xA8]
        mov dword ptr ds : [ecx], edx
        push edi
        mov dword ptr ss : [esp+0x2C], 0x3D656042
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x30], 0
        mov edx, dword ptr ss : [esp+0x30]
        push ebx
        mov dword ptr ds : [ecx+8], edx
/*FIXUP push offset public_5ce968 @0x467137*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce968
        mov ecx, esi
        call dword ptr ds : [eax+0x98]
        push 0xFAA9
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ds : [esi+0x2D2], 1
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [esi+0x344]
        lea edi, ds:[esi+0x340]
        lea ecx, ss:[esp+0x58]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x5C], 1
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], bl
        je public_4671a2
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], ebx
        public_4671a2 : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        push edi
        push 0x6002C
        call public_57da40
        add esp, 8
        test al, al
        je public_4671d7
        push edi
        call public_57eb40
        add esp, 4
        or ebp, 0xFFFFFFFF
        jmp public_46729a
        public_4671d7 : nop
        push 1
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x58]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x5C], 3
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 2
        je public_467227
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], ebx
        public_467227 : nop
        or ebp, 0xFFFFFFFF
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], ebp
        call dword ptr ds : [public_5c62bc]
        push ebp
/*FIXUP push offset public_5cfd58 @0x467239*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfd58
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x58]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x5C], 5
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 4
        je public_46728c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], ebx
        public_46728c : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], ebp
        call dword ptr ds : [public_5c62ac]
        public_46729a : nop
        push 0xFAA9
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], 6
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [esi+0x338]
        lea edi, ds:[esi+0x334]
        lea ecx, ss:[esp+0x58]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x5C], 7
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 6
        je public_4672f6
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], ebx
        public_4672f6 : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], ebp
        call dword ptr ds : [public_5c62b4]
        push edi
        push 0x60032
        call public_57da40
        add esp, 8
        test al, al
        je public_467327
        push edi
        call public_57eb40
        add esp, 4
        or ebp, 0xFFFFFFFF
        jmp public_4673ea
        public_467327 : nop
        push 1
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x58]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x5C], 9
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 8
        je public_467377
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], ebx
        public_467377 : nop
        or ebp, 0xFFFFFFFF
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], ebp
        call dword ptr ds : [public_5c62bc]
        push ebp
/*FIXUP push offset public_5cfd2c @0x467389*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfd2c
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], 0xA
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x58]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x5C], 0xB
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 0xA
        je public_4673dc
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], ebx
        public_4673dc : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], ebp
        call dword ptr ds : [public_5c62ac]
        public_4673ea : nop
        push 0xFAA9
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], 0xC
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [esi+0x350]
        lea edi, ds:[esi+0x34C]
        lea ecx, ss:[esp+0x58]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x5C], 0xD
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 0xC
        je public_467446
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], ebx
        public_467446 : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], ebp
        call dword ptr ds : [public_5c62b4]
        push edi
        push 0x60033
        call public_57da40
        add esp, 8
        test al, al
        je public_467474
        push edi
        call public_57eb40
        add esp, 4
        jmp public_467537
        public_467474 : nop
        push 1
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], 0xE
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x58]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x5C], 0xF
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 0xE
        je public_4674c4
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], ebx
        public_4674c4 : nop
        or ebp, 0xFFFFFFFF
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], ebp
        call dword ptr ds : [public_5c62bc]
        push ebp
/*FIXUP push offset public_5cfcf8 @0x4674d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfcf8
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], 0x10
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x58]
        push ecx
        push eax
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x5C], 0x11
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 0x10
        je public_467529
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], ebx
        public_467529 : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], ebp
        call dword ptr ds : [public_5c62ac]
        public_467537 : nop
        lea edi, ds:[esi+0x358]
        push edi
        push 0x60054
        call public_57da40
        add esp, 8
        test al, al
        je public_46755d
        push edi
        call public_57eb40
        add esp, 4
        jmp public_46765a
        public_46755d : nop
        push 1
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], 0x12
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [ebp+4]
        push eax
        push ebp
        mov ecx, edi
        mov byte ptr ss : [esp+0x58], 0x13
        call public_42a7e0
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x58]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 0x12
        je public_4675c7
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x58], ebx
        public_4675c7 : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_5c62bc]
        push 0xFFFFFFFF
/*FIXUP push offset public_5cfcdc @0x4675db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfcdc
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], 0x14
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x58], eax
        mov ebp, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [ebp+4]
        push eax
        push ebp
        mov ecx, edi
        mov byte ptr ss : [esp+0x58], 0x15
        call public_42a7e0
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x58]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x50], 0x14
        je public_467648
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x58], ebx
        public_467648 : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        public_46765a : nop
        lea eax, ds:[esi+0x364]
        mov edi, offset public_5cef38
        mov dword ptr ss : [esp+0x58], eax
        lea esp, ss:[esp]
        public_467670 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [edi]
        push ecx
        push edx
        call public_57da40
        add esp, 8
        test al, al
        je public_467691
        mov eax, dword ptr ss : [esp+0x58]
        push eax
        call public_57eb40
        add esp, 4
        public_467691 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        add edi, 4
        add ecx, 0xC
        cmp edi, offset public_5cef48
        mov dword ptr ss : [esp+0x58], ecx
        jl public_467670
        push ebx
        push esi
/*FIXUP push offset public_5cfaac @0x4676a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfaac
/*FIXUP push offset public_5cfccc @0x4676ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfccc
        call public_59db20
        add esp, 0x10
        cmp eax, ebx
        mov dword ptr ds : [esi+0x3B4], eax
        je public_467779
        fld dword ptr ds : [public_5cef00]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [public_5cef04]
        push ecx
        fstp dword ptr ss : [esp+0x30]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 0
        call public_579c40
        mov edx, dword ptr ds : [public_5cef08]
        mov eax, dword ptr ds : [public_66d4d8]
        mov ecx, dword ptr ds : [esi+0x3B4]
        push edx
        push eax
        call public_579cc0
        mov ecx, dword ptr ds : [esi+0x3B4]
        push 1
        call public_5799f0
        mov ecx, dword ptr ds : [public_66da64]
        mov eax, dword ptr ds : [esi+0x3B4]
        mov dword ptr ds : [eax+0x49C], ebx
        mov dword ptr ds : [eax+0x498], ecx
        mov ecx, dword ptr ds : [esi+0x3B4]
/*FIXUP push offset public_679bb4 @0x467734*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_579870
        mov ecx, dword ptr ds : [esi+0x3B4]
        push ebx
        call public_579860
        mov ecx, dword ptr ds : [esi+0x3B4]
        push 1
        call public_579a50
        mov ecx, dword ptr ds : [esi+0x3B4]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0x1B7C
        mov ecx, dword ptr ds : [esi+0x3B4]
        push 1
        call public_579890
        public_467779 : nop
        push ebx
        push ebx
        push 0x409
        push ebx
        push ebx
        push ebx
        push ebx
        lea eax, ss:[esp+0x44]
        push eax
        push ebx
        lea ecx, ss:[esp+0x34]
        push ecx
        push ebx
/*FIXUP push offset public_5ced30 @0x467790*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced30
        push ebx
/*FIXUP push offset public_5cf1f4 @0x467796*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf1f4
/*FIXUP push offset public_5cfcc0 @0x46779b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfcc0
        mov ecx, esi
        mov dword ptr ss : [esp+0x64], 0x3CA3D70A
        mov dword ptr ss : [esp+0x68], 0x3CA3D70A
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x4C], 0x3EE147AE
        mov dword ptr ss : [esp+0x50], 0x3E6B851F
        mov dword ptr ss : [esp+0x54], 0
        call public_5a0c90
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        mov dword ptr ds : [esi+0x3CC], eax
        mov edx, dword ptr ds : [public_66d4b8]
        mov eax, dword ptr ds : [public_5cef1c]
/*FIXUP push offset public_5cfcb0 @0x4677ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfcb0
/*FIXUP push offset public_5cfca0 @0x4677f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfca0
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], 2
        mov dword ptr ss : [esp+0x2C], 1
        call public_59db20
        add esp, 0x10
        cmp eax, ebx
        mov dword ptr ds : [esi+0x3C4], eax
        je public_46797b
        fld dword ptr ds : [public_66d4b4]
        lea edx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [public_5cef20]
        push edx
        fstp dword ptr ss : [esp+0x30]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 0
        call public_579c40
        mov ecx, dword ptr ds : [esi+0x3C4]
/*FIXUP push offset public_679bb4 @0x467854*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_58d560
        mov ecx, dword ptr ds : [esi+0x3C4]
        push ebx
        push ebx
        call public_58d590
        mov ecx, dword ptr ds : [esi+0x3C4]
        push 1
        call public_58d5d0
        mov ecx, dword ptr ds : [esi+0x3C4]
        push 1
        push ebx
        push ebx
        push ebx
        call public_58cb80
        mov ecx, dword ptr ds : [esi+0x3C4]
        push ebx
        call public_58cbe0
        mov ecx, dword ptr ds : [esi+0x3C4]
        push 2
        call public_58d5e0
        mov ecx, dword ptr ds : [esi+0x3C4]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x3C4]
        call public_579c30
        fmul dword ptr ds : [public_5cfc9c]
        push ecx
        mov ecx, dword ptr ds : [esi+0x3C4]
        fstp dword ptr ss : [esp]
        call public_58f810
        mov ecx, dword ptr ds : [esi+0x3C4]
        push esi
/*FIXUP push offset _public_4650f0 @0x4678d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4650f0
        call public_58f740
        mov dword ptr ss : [esp+0x58], ebx
        public_4678e3 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [esi+0x3C4]
        push eax
        call public_58d0b0
        mov ebp, eax
        cmp ebp, ebx
        je public_467969
        push 0xC
        call public_5b7e84
        add esp, 4
        cmp eax, ebx
        je public_46792b
        mov dword ptr ds : [eax+4], 1
        mov word ptr ds : [eax+8], bx
        mov byte ptr ds : [eax+0xA], bl
        mov byte ptr ds : [eax+0xB], bl
        mov dword ptr ds : [eax], offset public_5cfc98
        mov ecx, dword ptr ds : [public_66da40]
        mov dword ptr ds : [eax+8], ecx
        mov edi, eax
        jmp public_46792d
        public_46792b : nop
        xor edi, edi
        public_46792d : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, edi
        je public_46794a
        cmp ecx, ebx
        je public_467940
        call public_599980
        mov dword ptr ss : [ebp+8], ebx
        public_467940 : nop
        cmp edi, ebx
        mov dword ptr ss : [ebp+8], edi
        je public_46794a
        inc dword ptr ds : [edi+4]
        public_46794a : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        jbe public_467955
        dec eax
        mov dword ptr ds : [edi+4], eax
        public_467955 : nop
        cmp dword ptr ds : [edi+4], ebx
        jne public_467969
        mov dword ptr ds : [edi+4], 1
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_467969 : nop
        mov eax, dword ptr ss : [esp+0x58]
        inc eax
        cmp eax, 2
        mov dword ptr ss : [esp+0x58], eax
        jl public_4678e3
        public_46797b : nop
        mov eax, dword ptr ds : [public_66d4b0]
        mov ecx, dword ptr ds : [public_5cef24]
        lea edx, ss:[esp+0x10]
        push edx
        push esi
/*FIXUP push offset public_5cfcb0 @0x46798c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfcb0
/*FIXUP push offset public_5cfc88 @0x467991*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfc88
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], 0xB
        mov dword ptr ss : [esp+0x2C], 4
        call public_59db20
        add esp, 0x10
        cmp eax, ebx
        mov dword ptr ds : [esi+0x3C8], eax
        je public_467be1
        fld dword ptr ds : [public_66d4ac]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [public_66d4a8]
        push ecx
        fstp dword ptr ss : [esp+0x30]
        mov ecx, eax
        mov dword ptr ss : [esp+0x34], 0
        call public_579c40
        mov ecx, dword ptr ds : [esi+0x3C8]
/*FIXUP push offset public_679bb4 @0x4679f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_679bb4
        call public_58d560
        mov ecx, dword ptr ds : [esi+0x3C8]
        push ebx
        push ebx
        call public_58d590
        mov ecx, dword ptr ds : [esi+0x3C8]
        push 1
        call public_58d5d0
        mov ecx, dword ptr ds : [esi+0x3C8]
        push ebx
        call public_58cb70
        mov ecx, dword ptr ds : [esi+0x3C8]
        push 1
        push ebx
        push ebx
        push ebx
        call public_58cb80
        mov ecx, dword ptr ds : [esi+0x3C8]
        push ebx
        call public_58cbe0
        mov ecx, dword ptr ds : [esi+0x3C8]
        push ebx
        push 2
        call public_58d5b0
        mov ecx, dword ptr ds : [esi+0x3C8]
        push ebx
        call public_58d5e0
        mov ecx, dword ptr ds : [esi+0x3C8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+4], 0x1B74
        mov ecx, dword ptr ds : [esi+0x3C8]
        push 1
        call public_579890
        mov ecx, dword ptr ds : [esi+0x3C8]
        call public_579c30
        fmul dword ptr ds : [public_5cfc9c]
        push ecx
        mov ecx, dword ptr ds : [esi+0x3C8]
        fstp dword ptr ss : [esp]
        call public_58f810
        mov ecx, dword ptr ds : [esi+0x3C8]
        push esi
/*FIXUP push offset _public_465a90 @0x467aa1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_465a90
        call public_58f740
        mov dword ptr ss : [esp+0x58], ebx
        nop 
        public_467ab0 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [esi+0x3C8]
        push eax
        call public_58d0b0
        mov ebp, eax
        cmp ebp, ebx
        je public_467b36
        push 0xC
        call public_5b7e84
        add esp, 4
        cmp eax, ebx
        je public_467af8
        mov dword ptr ds : [eax+4], 1
        mov word ptr ds : [eax+8], bx
        mov byte ptr ds : [eax+0xA], bl
        mov byte ptr ds : [eax+0xB], bl
        mov dword ptr ds : [eax], offset public_5cfc98
        mov ecx, dword ptr ds : [public_66da40]
        mov dword ptr ds : [eax+8], ecx
        mov edi, eax
        jmp public_467afa
        public_467af8 : nop
        xor edi, edi
        public_467afa : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, edi
        je public_467b17
        cmp ecx, ebx
        je public_467b0d
        call public_599980
        mov dword ptr ss : [ebp+8], ebx
        public_467b0d : nop
        cmp edi, ebx
        mov dword ptr ss : [ebp+8], edi
        je public_467b17
        inc dword ptr ds : [edi+4]
        public_467b17 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        jbe public_467b22
        dec eax
        mov dword ptr ds : [edi+4], eax
        public_467b22 : nop
        cmp dword ptr ds : [edi+4], ebx
        jne public_467b36
        mov dword ptr ds : [edi+4], 1
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_467b36 : nop
        mov eax, dword ptr ss : [esp+0x58]
        inc eax
        cmp eax, 0xB
        mov dword ptr ss : [esp+0x58], eax
        jl public_467ab0
        mov al, byte ptr ss : [esp+0x58]
        mov cl, byte ptr ss : [esp+0x58]
        mov byte ptr ss : [esp+0x28], al
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov byte ptr ss : [esp+0x38], cl
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov ecx, dword ptr ds : [esi+0x3C8]
        lea edx, ss:[esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x54], 0x16
        call public_58d0f0
        xor eax, eax
        lea ebx, ds:[ebx]
        public_467b90 : nop
        mov ecx, dword ptr ds : [eax+public_5cef48]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+eax], ecx
        add eax, 4
        cmp eax, 0x10
        jl public_467b90
        mov ecx, dword ptr ds : [esi+0x3C8]
        lea eax, ss:[esp+0x28]
        push eax
        call public_58d250
        mov ecx, dword ptr ss : [esp+0x3C]
        or ebp, 0xFFFFFFFF
        push ecx
        mov dword ptr ss : [esp+0x54], ebp
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        call public_5b7e1d
        add esp, 8
        jmp public_467be4
        public_467be1 : nop
        or ebp, 0xFFFFFFFF
        public_467be4 : nop
        mov ecx, dword ptr ds : [esi+0x3C8]
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5cfc64 @0x467bf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfc64
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0x3C8]
        mov dword ptr ds : [esi+0x3A0], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5cfc40 @0x467c0e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfc40
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0x3C8]
        mov dword ptr ds : [esi+0x3A4], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5cfc18 @0x467c2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfc18
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0x3C8]
        mov dword ptr ds : [esi+0x394], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5cfbf0 @0x467c48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfbf0
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [esi+0x3C8]
        mov dword ptr ds : [esi+0x398], eax
        call public_57a610
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5cfbc4 @0x467c65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfbc4
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov dword ptr ds : [esi+0x39C], eax
        fld dword ptr ds : [public_5cef0c]
        fadd dword ptr ds : [public_5cef20]
        mov ecx, dword ptr ds : [public_5cef0c]
        fld dword ptr ds : [public_66d4b4]
        mov edx, dword ptr ds : [public_5cef14]
        push ebx
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x34]
        push edx
/*FIXUP push offset public_5cfbb4 @0x467c9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfbb4
        fstp dword ptr ss : [esp+0x40]
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0
        call public_5a10e0
        lea ecx, ds:[esi+0x340]
        mov dword ptr ds : [esi+0x3BC], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x10], ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, eax
        mov dword ptr ss : [esp+0x54], 0x17
        call public_57b470
        mov edi, dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x50], ebp
        call edi
        fld dword ptr ds : [public_5cef0c]
        fadd dword ptr ds : [public_5cef04]
        mov ecx, dword ptr ds : [public_5cef0c]
        fld dword ptr ds : [public_5cef00]
        mov edx, dword ptr ds : [public_5cef14]
        push ebx
        lea eax, ss:[esp+0x2C]
        push eax
        fstp dword ptr ss : [esp+0x30]
        push ecx
        fstp dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x3C], 0
        push edx
/*FIXUP push offset public_5cfba4 @0x467d2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfba4
        mov ecx, esi
        call public_5a10e0
        lea ecx, ds:[esi+0x334]
        mov dword ptr ds : [esi+0x3B8], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x10], ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, eax
        mov dword ptr ss : [esp+0x54], 0x18
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x50], ebp
        call edi
        fld dword ptr ds : [public_5cef0c]
        fadd dword ptr ds : [public_66d4a8]
        mov ecx, dword ptr ds : [public_5cef0c]
        fld dword ptr ds : [public_66d4ac]
        mov edx, dword ptr ds : [public_5cef14]
        push ebx
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x34]
        push edx
/*FIXUP push offset public_5cfb94 @0x467d99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfb94
        fstp dword ptr ss : [esp+0x40]
        mov ecx, esi
        mov dword ptr ss : [esp+0x44], 0
        call public_5a10e0
        lea ecx, ds:[esi+0x34C]
        mov dword ptr ds : [esi+0x3C0], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x20], ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, eax
        mov dword ptr ss : [esp+0x54], 0x19
        call public_57b470
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x50], ebp
        call edi
        mov eax, dword ptr ds : [public_66da7c]
        cmp eax, ebx
        pop edi
        pop ebp
        je public_467e5b
        mov ecx, esi
        mov dword ptr ds : [esi+0x3B0], eax
        call public_468310
        mov ecx, dword ptr ds : [esi+0x3C8]
        mov edx, dword ptr ds : [ecx+0x4A4]
        cmp edx, ebx
        jne public_467e15
        xor eax, eax
        jmp public_467e20
        public_467e15 : nop
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        sar eax, 2
        public_467e20 : nop
        push eax
        call public_58f730
        push eax
        mov ecx, esi
        call public_4669c0
        mov ecx, dword ptr ds : [esi+0x3C4]
        mov edx, dword ptr ds : [ecx+0x4A4]
        cmp edx, ebx
        jne public_467e42
        xor eax, eax
        jmp public_467e4d
        public_467e42 : nop
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        sar eax, 2
        public_467e4d : nop
        push eax
        call public_58f730
        push eax
        mov ecx, esi
        call public_465110
        public_467e5b : nop
        mov ecx, esi
        call public_468310
        mov ecx, dword ptr ds : [esi+0x3C8]
        mov edx, dword ptr ds : [ecx+0x4A4]
        cmp edx, ebx
        jne public_467e76
        xor eax, eax
        jmp public_467e81
        public_467e76 : nop
        mov eax, dword ptr ds : [ecx+0x4A8]
        sub eax, edx
        sar eax, 2
        public_467e81 : nop
        push eax
        call public_58f730
        push eax
        mov ecx, esi
        call public_4669c0
        mov ecx, dword ptr ds : [esi+0x3C4]
        mov eax, dword ptr ds : [ecx+0x4A4]
        cmp eax, ebx
        je public_467eaa
        mov ebx, dword ptr ds : [ecx+0x4A8]
        sub ebx, eax
        sar ebx, 2
        public_467eaa : nop
        push ebx
        call public_58f730
        push eax
        mov ecx, esi
        call public_465110
        lea eax, ds:[esi+0x80]
        push eax
        lea ecx, ds:[esi+0xB4]
        call public_5a1340
        mov ecx, dword ptr ss : [esp+0x40]
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x4670c0)
    }
}

#undef public_467100
#undef public_4671a2
#undef public_4671d7
#undef public_467227
#undef public_46728c
#undef public_46729a
#undef public_4672f6
#undef public_467327
#undef public_467377
#undef public_4673dc
#undef public_4673ea
#undef public_467446
#undef public_467474
#undef public_4674c4
#undef public_467529
#undef public_467537
#undef public_46755d
#undef public_4675c7
#undef public_467648
#undef public_46765a
#undef public_467670
#undef public_467691
#undef public_467779
#undef public_4678e3
#undef public_46792b
#undef public_46792d
#undef public_467940
#undef public_46794a
#undef public_467955
#undef public_467969
#undef public_46797b
#undef public_467ab0
#undef public_467af8
#undef public_467afa
#undef public_467b0d
#undef public_467b17
#undef public_467b22
#undef public_467b36
#undef public_467b90
#undef public_467be1
#undef public_467be4
#undef public_467e15
#undef public_467e20
#undef public_467e42
#undef public_467e4d
#undef public_467e5b
#undef public_467e76
#undef public_467e81
#undef public_467eaa
