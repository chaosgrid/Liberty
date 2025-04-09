#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_465ab0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46baf0);
CLANG_FORWARD_PROC_SYMBOL(public_46bb00);
CLANG_FORWARD_PROC_SYMBOL(public_46bb50);
CLANG_FORWARD_PROC_SYMBOL(public_46bba0);
CLANG_FORWARD_PROC_SYMBOL(public_46bbb0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_58cd00);
CLANG_FORWARD_PROC_SYMBOL(public_58cdb0);
CLANG_FORWARD_PROC_SYMBOL(public_58ce10);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb332);

#define public_465bd5 _public_465bd5
#define public_465c1d _public_465c1d
#define public_465ca8 _public_465ca8
#define public_465cf0 _public_465cf0
#define public_465d0f _public_465d0f
#define public_465d35 _public_465d35
#define public_465d61 _public_465d61
#define public_465d8d _public_465d8d
#define public_465db9 _public_465db9
#define public_465df7 _public_465df7
#define public_465ea6 _public_465ea6
#define public_465f19 _public_465f19
#define public_465f61 _public_465f61
#define public_465f73 _public_465f73
#define public_466008 _public_466008
#define public_466025 _public_466025
#define public_46608b _public_46608b
#define public_46609c _public_46609c
#define public_4660ca _public_4660ca
#define public_466157 _public_466157
#define public_4661ac _public_4661ac
#define public_4661d6 _public_4661d6
#define public_466206 _public_466206
#define public_466294 _public_466294
#define public_4662da _public_4662da
#define public_466369 _public_466369
#define public_466411 _public_466411
#define public_46642a _public_46642a
#define public_4664a4 _public_4664a4
#define public_4664bc _public_4664bc
#define public_466528 _public_466528
#define public_46652a _public_46652a
#define public_466558 _public_466558
#define public_4665bb _public_4665bb
#define public_4665cb _public_4665cb
#define public_4665ce _public_4665ce
#define public_46664a _public_46664a
#define public_46665b _public_46665b
#define public_46668a _public_46668a
#define public_4666ad _public_4666ad

PROC_DECLARE(0x465ab0, internal_465ab0, public_465ab0);
extern "C" NAKED register_t __cdecl internal_465ab0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb332 @0x465ab2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb332
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x84
        push ebx
        mov ebx, dword ptr ss : [esp+0x98]
        push ebp
        mov ebp, dword ptr ds : [public_66d3fc]
        push esi
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x3C8]
        push 0
        push ebx
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], ebp
        call public_58cd00
        test al, al
        je public_465d35
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        call public_46c860
        push 0
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], 0
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov byte ptr ss : [esp+0xA8], 1
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x9C], 0
        call public_45eeb0
        or esi, 0xFFFFFFFF
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x9C], esi
        call dword ptr ds : [public_5c62bc]
        mov edi, dword ptr ss : [esp+0xA8]
        cmp dword ptr ds : [edi], ebp
        lea ecx, ss:[esp+0x1C]
        jne public_465bd5
        push 0x3343
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov byte ptr ss : [esp+0xA8], 3
        call public_46c800
        mov byte ptr ss : [esp+0x9C], 2
        jmp public_465c1d
        public_465bd5 : nop
        push 0x69F5
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov byte ptr ss : [esp+0xA8], 5
        call public_46c800
        mov byte ptr ss : [esp+0x9C], 4
        public_465c1d : nop
        lea ecx, ss:[esp+0x18]
        call public_45eeb0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x9C], esi
        call dword ptr ds : [public_5c62b4]
        mov al, byte ptr ss : [esp+0xAC]
        test al, al
        jne public_465ca8
        push 0xBB80
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], 6
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov byte ptr ss : [esp+0xA8], 7
        call public_46c800
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x9C], 6
        call public_45eeb0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x9C], esi
        call dword ptr ds : [public_5c62b4]
        public_465ca8 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        call public_46baf0
        mov ecx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        lea edx, ss:[esp+0x50]
        push edx
        call public_53e430
        push eax
        lea ecx, ss:[esp+0x14]
        call public_46bba0
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x24]
        push eax
        call public_46baf0
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        mov ebp, dword ptr ss : [esp+0x14]
        je public_465d0f
        lea ebx, ds:[ebx]
        public_465cf0 : nop
        add eax, 8
        push eax
        push edi
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebp
        call public_46c800
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        jne public_465cf0
        public_465d0f : nop
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+0x3C8]
        push 1
        push 0
        push ebx
        call public_58ce10
        mov ecx, dword ptr ds : [esi+0x3C8]
        push 0
        push ebx
        call public_58cdb0
        mov ebp, dword ptr ss : [esp+0x30]
        public_465d35 : nop
        mov ecx, dword ptr ds : [esi+0x3C8]
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ebx
        call public_58cd00
        test al, al
        je public_465d61
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call public_46c860
        public_465d61 : nop
        mov ecx, dword ptr ds : [esi+0x3C8]
        lea eax, ss:[esp+0x14]
        push eax
        push 2
        push ebx
        call public_58cd00
        test al, al
        je public_465d8d
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call public_46c860
        public_465d8d : nop
        mov ecx, dword ptr ds : [esi+0x3C8]
        lea eax, ss:[esp+0x14]
        push eax
        push 3
        push ebx
        call public_58cd00
        test al, al
        je public_465db9
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call public_46c860
        public_465db9 : nop
        mov ecx, dword ptr ds : [esi+0x3C8]
        push ebx
        call public_58d0b0
        mov cl, byte ptr ss : [esp+0xAC]
        mov byte ptr ds : [eax], cl
        mov byte ptr ds : [eax+1], cl
        mov ecx, dword ptr ss : [esp+0xA8]
        mov byte ptr ds : [eax+2], 1
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        cmp dword ptr ds : [ecx], ebp
        jne public_465df7
        mov ecx, dword ptr ds : [esi+0x3C8]
        push ebx
        call public_58d4b0
        public_465df7 : nop
        mov ecx, dword ptr ds : [esi+0x3C8]
        inc ebx
        push ebx
        mov dword ptr ss : [esp+0xA8], ebx
        call public_58d0b0
        mov edi, eax
        test edi, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_4666ad
        mov ecx, dword ptr ds : [esi+0x3C8]
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ebx
        call public_58cd00
        test al, al
        je public_4660ca
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call public_46c860
        push 1
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 8
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0xA8], 9
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        xor edi, edi
        cmp ecx, edi
        mov byte ptr ss : [esp+0x9C], bl
        je public_465ea6
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], edi
        public_465ea6 : nop
        or ebp, 0xFFFFFFFF
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x9C], ebp
        call dword ptr ds : [public_5c62bc]
        mov esi, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x30]
        cmp ecx, eax
        lea ecx, ss:[esp+0x24]
        jne public_465f19
        push 0x3DBC
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0xA
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0xA8], 0xB
        call public_46c800
        mov byte ptr ss : [esp+0x9C], bl
        jmp public_465f61
        public_465f19 : nop
        push 0x5203
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], 0xC
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0xA8], 0xD
        call public_46c800
        mov byte ptr ss : [esp+0x9C], 0xC
        public_465f61 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        je public_465f73
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], edi
        public_465f73 : nop
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x9C], ebp
        call dword ptr ds : [public_5c62b4]
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        je public_466025
        push eax
        lea ecx, ss:[esp+0x78]
/*FIXUP push offset public_5cfb80 @0x465f96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfb80
        push ecx
        call dword ptr ds : [public_5c70ec]
        add esp, 0xC
        push ebp
        lea edx, ss:[esp+0x78]
        push edx
        lea ecx, ss:[esp+0x5C]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0xE
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0xA8], 0xF
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov byte ptr ss : [esp+0x9C], bl
        je public_466008
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], 0
        public_466008 : nop
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x9C], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        mov esi, dword ptr ss : [esp+0x2C]
        xor edi, edi
        jmp public_46609c
        public_466025 : nop
        mov esi, dword ptr ss : [esp+0x2C]
        lea eax, ds:[esi+0x358]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x24], eax
        mov ebx, 0x10
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0xA8], 0x11
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, edi
        mov byte ptr ss : [esp+0x9C], bl
        je public_46608b
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], edi
        public_46608b : nop
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x9C], ebp
        call dword ptr ds : [public_5c62c8]
        public_46609c : nop
        mov ecx, dword ptr ds : [esi+0x3C8]
        push edi
        mov edi, dword ptr ss : [esp+0xA8]
        push 1
        push edi
        call public_58ce10
        mov ecx, dword ptr ds : [esi+0x3C8]
        push 1
        push edi
        call public_58cdb0
        mov esi, dword ptr ss : [esp+0x2C]
        mov ebx, edi
        mov edi, dword ptr ss : [esp+0x18]
        public_4660ca : nop
        mov ecx, dword ptr ds : [esi+0x3C8]
        lea eax, ss:[esp+0x14]
        push eax
        push 2
        push ebx
        call public_58cd00
        test al, al
        je public_4662da
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call public_46c860
        push 1
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x12
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0xA8], 0x13
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        xor esi, esi
        cmp ecx, esi
        mov byte ptr ss : [esp+0x9C], bl
        je public_466157
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], esi
        public_466157 : nop
        or ebp, 0xFFFFFFFF
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x9C], ebp
        call dword ptr ds : [public_5c62bc]
        mov edi, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x30]
        cmp ecx, eax
        lea ecx, ss:[esp+0x24]
        jne public_4661ac
        push 0x3DBC
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x14
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x9C], 0x15
        jmp public_4661d6
        public_4661ac : nop
        push 0x5203
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x16
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov byte ptr ss : [esp+0x9C], 0x17
        public_4661d6 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, esi
        mov byte ptr ss : [esp+0x9C], bl
        je public_466206
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], esi
        public_466206 : nop
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x9C], ebp
        call dword ptr ds : [public_5c62b4]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        lea edx, ss:[esp+0x78]
/*FIXUP push offset public_5cfb80 @0x466222*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfb80
        push edx
        call dword ptr ds : [public_5c70ec]
        add esp, 0xC
        push ebp
        lea eax, ss:[esp+0x78]
        push eax
        lea ecx, ss:[esp+0x5C]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x18
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0xA8], 0x19
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov byte ptr ss : [esp+0x9C], bl
        je public_466294
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], 0
        public_466294 : nop
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x9C], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        mov esi, dword ptr ss : [esp+0xA4]
        mov edi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [edi+0x3C8]
        push 0
        push 2
        push esi
        call public_58ce10
        mov ecx, dword ptr ds : [edi+0x3C8]
        push 2
        push esi
        call public_58cdb0
        mov ebx, esi
        mov esi, edi
        mov edi, dword ptr ss : [esp+0x18]
        public_4662da : nop
        mov ecx, dword ptr ds : [esi+0x3C8]
        lea eax, ss:[esp+0x14]
        push eax
        push 3
        push ebx
        call public_58cd00
        test al, al
        je public_46668a
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call public_46c860
        push 1
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x1A
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov byte ptr ss : [esp+0xA8], 0x1B
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov byte ptr ss : [esp+0x9C], bl
        je public_466369
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], 0
        public_466369 : nop
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x9C], 0xFFFFFFFF
        call dword ptr ds : [public_5c62bc]
        mov ecx, dword ptr ss : [esp+0xA8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x30]
        cmp edx, eax
        lea ecx, ss:[esp+0x1C]
        jne public_46642a
        push 0x3DBC
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x1C
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push esi
        mov byte ptr ss : [esp+0xA4], 0x1D
        mov edi, ecx
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov byte ptr ss : [esp+0x9C], bl
        je public_466411
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], 0
        public_466411 : nop
        or ebp, 0xFFFFFFFF
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x9C], ebp
        call dword ptr ds : [public_5c62b4]
        jmp public_4664bc
        public_46642a : nop
        push 0x5203
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x1E
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push esi
        mov byte ptr ss : [esp+0xA4], 0x1F
        mov edi, ecx
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x10]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov byte ptr ss : [esp+0x9C], bl
        je public_4664a4
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], 0
        public_4664a4 : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x9C], 0xFFFFFFFF
        call dword ptr ds : [public_5c62b4]
        or ebp, 0xFFFFFFFF
        public_4664bc : nop
        mov edi, dword ptr ds : [public_66da70]
        test edi, edi
        je public_46665b
        mov eax, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx+8]
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x3C], edx
        call public_432240
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x4C]
        cmp ecx, eax
        jne public_4665cb
        push 0xC
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        test esi, esi
        mov dword ptr ss : [esp+0x9C], 0x20
        je public_466528
        lea edx, ss:[esp+0x3B]
        push edx
        mov ecx, esi
        call public_46ba60
        jmp public_46652a
        public_466528 : nop
        xor esi, esi
        public_46652a : nop
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        mov dword ptr ss : [esp+0xA0], ebp
        call dword ptr ds : [public_5c6094]
        add esp, 4
        test eax, eax
        je public_466558
        mov edx, dword ptr ds : [eax]
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        call public_57da40
        add esp, 8
        test al, al
        jne public_4665bb
        public_466558 : nop
        mov ecx, esi
        call public_46bb50
        push ebp
/*FIXUP push offset public_5ceee8 @0x466560*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceee8
        lea ecx, ss:[esp+0x70]
        call dword ptr ds : [public_5c62f8]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x21
        mov ecx, eax
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x40], eax
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0xA0], 0x22
        call public_46bb00
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x9C], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x9C], ebp
        call dword ptr ds : [public_5c62f4]
        public_4665bb : nop
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, edi
        call public_46bbb0
        mov dword ptr ds : [eax], esi
        jmp public_4665ce
        public_4665cb : nop
        mov esi, dword ptr ds : [ecx+0x10]
        public_4665ce : nop
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x44], eax
        mov ebx, 0x23
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x9C], ebx
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x3C], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [esi+4]
        push edx
        push esi
        mov byte ptr ss : [esp+0xA4], 0x24
        mov edi, ecx
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x9C], bl
        je public_46664a
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x3C], 0
        public_46664a : nop
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x9C], ebp
        call dword ptr ds : [public_5c62c8]
        public_46665b : nop
        mov esi, dword ptr ss : [esp+0xA4]
        mov edi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [edi+0x3C8]
        push 0
        push 3
        push esi
        call public_58ce10
        mov ecx, dword ptr ds : [edi+0x3C8]
        push 3
        push esi
        call public_58cdb0
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, esi
        public_46668a : nop
        mov al, byte ptr ss : [esp+0xAC]
        mov ecx, dword ptr ss : [esp+0xA8]
        mov byte ptr ds : [edi], al
        mov byte ptr ds : [edi+1], al
        mov eax, dword ptr ds : [edi+8]
        dec ebx
        mov byte ptr ds : [edi+2], 0
        mov dword ptr ds : [edi+4], ebx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        public_4666ad : nop
        mov ecx, dword ptr ss : [esp+0x94]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x90
        ret 0xC
        UNREACHABLE_TRAP(0x465ab0)
    }
}

#undef public_465bd5
#undef public_465c1d
#undef public_465ca8
#undef public_465cf0
#undef public_465d0f
#undef public_465d35
#undef public_465d61
#undef public_465d8d
#undef public_465db9
#undef public_465df7
#undef public_465ea6
#undef public_465f19
#undef public_465f61
#undef public_465f73
#undef public_466008
#undef public_466025
#undef public_46608b
#undef public_46609c
#undef public_4660ca
#undef public_466157
#undef public_4661ac
#undef public_4661d6
#undef public_466206
#undef public_466294
#undef public_4662da
#undef public_466369
#undef public_466411
#undef public_46642a
#undef public_4664a4
#undef public_4664bc
#undef public_466528
#undef public_46652a
#undef public_466558
#undef public_4665bb
#undef public_4665cb
#undef public_4665ce
#undef public_46664a
#undef public_46665b
#undef public_46668a
#undef public_4666ad
