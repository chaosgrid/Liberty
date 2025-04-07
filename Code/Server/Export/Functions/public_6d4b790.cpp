#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46370);
CLANG_FORWARD_PROC_SYMBOL(public_6d464f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d48960);
CLANG_FORWARD_PROC_SYMBOL(public_6d48b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60160);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6335c);

#define public_6d4b7f2 _public_6d4b7f2
#define public_6d4b7fa _public_6d4b7fa
#define public_6d4b93f _public_6d4b93f
#define public_6d4b9d3 _public_6d4b9d3
#define public_6d4ba55 _public_6d4ba55
#define public_6d4ba5a _public_6d4ba5a
#define public_6d4baf0 _public_6d4baf0
#define public_6d4bb20 _public_6d4bb20
#define public_6d4bb3d _public_6d4bb3d
#define public_6d4bb43 _public_6d4bb43
#define public_6d4bb5b _public_6d4bb5b
#define public_6d4bbb5 _public_6d4bbb5
#define public_6d4bbe7 _public_6d4bbe7
#define public_6d4bc1f _public_6d4bc1f
#define public_6d4bc40 _public_6d4bc40
#define public_6d4bc60 _public_6d4bc60
#define public_6d4bc9e _public_6d4bc9e
#define public_6d4bccf _public_6d4bccf
#define public_6d4bcde _public_6d4bcde
#define public_6d4bcee _public_6d4bcee
#define public_6d4bd10 _public_6d4bd10
#define public_6d4bd1d _public_6d4bd1d
#define public_6d4bd3f _public_6d4bd3f
#define public_6d4bd92 _public_6d4bd92
#define public_6d4bdad _public_6d4bdad
#define public_6d4bde6 _public_6d4bde6
#define public_6d4bdfe _public_6d4bdfe
#define public_6d4be16 _public_6d4be16
#define public_6d4be2e _public_6d4be2e
#define public_6d4be71 _public_6d4be71
#define public_6d4be84 _public_6d4be84
#define public_6d4be87 _public_6d4be87
#define public_6d4be91 _public_6d4be91
#define public_6d4bed7 _public_6d4bed7
#define public_6d4bef9 _public_6d4bef9
#define public_6d4bf0e _public_6d4bf0e
#define public_6d4bf38 _public_6d4bf38
#define public_6d4bf4e _public_6d4bf4e
#define public_6d4bf63 _public_6d4bf63
#define public_6d4bf69 _public_6d4bf69
#define public_6d4bf98 _public_6d4bf98
#define public_6d4bfa5 _public_6d4bfa5
#define public_6d4bfc9 _public_6d4bfc9
#define public_6d4bfee _public_6d4bfee
#define public_6d4c058 _public_6d4c058
#define public_6d4c061 _public_6d4c061
#define public_6d4c094 _public_6d4c094
#define public_6d4c0af _public_6d4c0af
#define public_6d4c0b8 _public_6d4c0b8
#define public_6d4c0cd _public_6d4c0cd
#define public_6d4c104 _public_6d4c104
#define public_6d4c147 _public_6d4c147
#define public_6d4c154 _public_6d4c154
#define public_6d4c17c _public_6d4c17c
#define public_6d4c1a1 _public_6d4c1a1
#define public_6d4c1d0 _public_6d4c1d0
#define public_6d4c1d9 _public_6d4c1d9
#define public_6d4c200 _public_6d4c200
#define public_6d4c209 _public_6d4c209
#define public_6d4c20d _public_6d4c20d

PROC_DECLARE(0x6d4b790, internal_6d4b790, public_6d4b790);
extern "C" NAKED register_t __cdecl internal_6d4b790()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6d6335c @0x6d4b798*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6335c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x22EC
        mov dword ptr fs : [0], esp
        call public_6d60160
        mov al, byte ptr ss : [esp+3]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push 0
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x84], esi
        mov byte ptr ss : [esp+0x74], al
        call dword ptr ds : [public_6d64b74]
        test esi, esi
        mov dword ptr ss : [esp+0x2304], 0
        je public_6d4b7f2
        lea ecx, ss:[esp+0x18C]
        push esi
        push ecx
        call public_6d464f0
        add esp, 8
        jmp public_6d4b7fa
        public_6d4b7f2 : nop
        mov byte ptr ss : [esp+0x18C], 0
        public_6d4b7fa : nop
        mov ebp, dword ptr ss : [esp+0x230C]
        lea edx, ss:[esp+0x88]
        push ebp
        push edx
        call public_6d46370
        or ecx, 0xFFFFFFFF
        add esp, 8
        xor eax, eax
        lea edi, ss:[esp+0x88]
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_6d64b08]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6d6aecc
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_6d6aecc @0x6d4b846*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aecc
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_6d64b3c]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6d6aea4
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_6d6aea4 @0x6d4b865*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
        lea ecx, ss:[esp+0x78]
        call dword ptr ds : [public_6d64b3c]
        mov ebx, dword ptr ds : [public_6d64bc0]
/*FIXUP push offset public_6d6aea4 @0x6d4b87a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
        lea ecx, ss:[esp+0x8C]
        push ecx
        lea edx, ss:[esp+0x194]
        push edx
        lea eax, ss:[esp+0x198]
        push 0
        push eax
        call ebx
        lea ecx, ss:[esp+0x9C]
        push ecx
        call dword ptr ds : [public_6d64ca8]
        mov edx, dword ptr ds : [public_6d64920]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ss : [ebp+0x30]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x18
        push edx
        mov byte ptr ss : [esp+0x17], 0
        call dword ptr ds : [eax]
        mov esi, eax
        mov eax, dword ptr ds : [public_6d64920]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+0x38]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x70], esi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_6d64920]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x34]
        push eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [public_6d64920]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [ebp+0x3C]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x14], eax
        test esi, esi
        jne public_6d4b93f
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jne public_6d4b93f
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jne public_6d4b93f
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_6d4b93f
        push 1
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x2308], 0xFFFFFFFF
        call dword ptr ds : [public_6d64b74]
        xor al, al
        jmp public_6d4c20d
        public_6d4b93f : nop
        lea ecx, ss:[esp+0x4F]
        push ecx
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d64b0c]
        mov dword ptr ss : [esp+0x28], 0
        lea edx, ss:[esp+0x4D]
        push edx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x2308], 1
        mov dword ptr ss : [esp+0x28], offset public_6d6b5c0
        call dword ptr ds : [public_6d64b0c]
        mov dword ptr ss : [esp+0x24], offset public_6d6b5a0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x18C]
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x230C], 2
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d4b9d3
        mov edi, dword ptr ss : [esp+0x40]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x18C]
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_6d64b88]
        mov esi, dword ptr ss : [esp+0x6C]
        public_6d4b9d3 : nop
        lea ecx, ss:[esp+0x18C]
/*FIXUP push offset public_6d6b598 @0x6d4b9da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b598
        push ecx
        call dword ptr ds : [public_6d64bd8]
        mov ebp, dword ptr ds : [public_6d64c08]
        xor edi, edi
        add esp, 8
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], eax
        je public_6d4c104
        push 0x104
        lea edx, ss:[esp+0x8C]
        push edx
        push edi
        call dword ptr ds : [public_6d64a94]
        push edi
        push edi
        lea eax, ss:[esp+0x298]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x98]
        push edx
        call dword ptr ds : [public_6d64bdc]
        add esp, 0x14
        call dword ptr ds : [public_6d641c0]
        test al, al
        lea edx, ss:[esp+0x88]
        lea ecx, ss:[esp+0x50]
        push edi
        lea eax, ss:[esp+0x294]
        je public_6d4ba55
/*FIXUP push offset public_6d6ae68 @0x6d4ba4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae68
        jmp public_6d4ba5a
/*FIXUP public_6d4ba55 : nop
        push offset public_6d6ae54 @0x6d4ba55*/
  FIXUP public_6d4ba55 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae54
        public_6d4ba5a : nop
        push eax
        push ecx
        push edx
        call ebx
        add esp, 0x14
        lea eax, ss:[esp+0x4E]
        push eax
        lea ecx, ss:[esp+0x5C]
        call dword ptr ds : [public_6d64b0c]
        mov dword ptr ss : [esp+0x54], edi
        lea ecx, ss:[esp+0xD94]
        mov byte ptr ss : [esp+0x2304], 3
        call dword ptr ds : [public_6d644f0]
        mov ebx, dword ptr ds : [public_6d64bd8]
        lea ecx, ss:[esp+0x88]
/*FIXUP push offset public_6d6b314 @0x6d4ba97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b314
        push ecx
        mov byte ptr ss : [esp+0x230C], 4
        call ebx
        add esp, 8
        cmp eax, edi
        mov dword ptr ss : [esp+0x54], eax
        je public_6d4bb43
        push eax
        push 4
        lea edx, ss:[esp+0x28]
        push 1
        push edx
        call dword ptr ds : [public_6d64bd4]
        lea ecx, ss:[esp+0x30]
        mov edx, dword ptr ds : [ecx]
        mov eax, offset public_6d6b30c
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        cmp edx, ecx
        jne public_6d4bb20
        mov eax, dword ptr ss : [esp+0x54]
        cmp eax, edi
        je public_6d4baf0
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        mov dword ptr ss : [esp+0x54], edi
        public_6d4baf0 : nop
        lea eax, ss:[esp+0x88]
/*FIXUP push offset public_6d6aea8 @0x6d4baf7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea8
        push eax
        call ebx
        add esp, 8
        cmp eax, edi
        mov dword ptr ss : [esp+0x54], eax
        je public_6d4bb43
        push 4
        lea ecx, ss:[esp+0x58]
        call public_6d48960
        lea ecx, ss:[esp+0x54]
        call public_6d48b60
        jmp public_6d4bb3d
        public_6d4bb20 : nop
        lea edx, ss:[esp+0x20]
        mov eax, dword ptr ds : [edx]
        mov ecx, offset public_6d6b304
        cmp eax, dword ptr ds : [ecx]
        je public_6d4bf63
        push edi
        lea ecx, ss:[esp+0x58]
        call public_6d48960
        public_6d4bb3d : nop
        mov eax, dword ptr ss : [esp+0x54]
        cmp eax, edi
        public_6d4bb43 : nop
        setne al
        test al, al
        je public_6d4bf63
        mov eax, dword ptr ss : [esp+0x5C]
        cmp eax, edi
        jne public_6d4bb5b
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d4bb5b : nop
        mov ecx, dword ptr ss : [esp+0x60]
        push ecx
        push eax
        lea ecx, ss:[esp+0xD9C]
        call dword ptr ds : [public_6d648d4]
        cmp esi, edi
        je public_6d4bf4e
        cmp dword ptr ss : [esp+0x18], edi
        je public_6d4bf4e
        cmp dword ptr ss : [esp+0x1C], edi
        je public_6d4bf4e
        cmp dword ptr ss : [esp+0x14], edi
        je public_6d4bf4e
        lea ecx, ss:[esp+0xD94]
        call dword ptr ds : [public_6d64540]
        test al, al
        mov ebp, dword ptr ds : [public_6d64c08]
        je public_6d4bf38
        mov ebx, dword ptr ds : [public_6d64c74]
        public_6d4bbb5 : nop
        lea ecx, ss:[esp+0xD94]
        call dword ptr ds : [public_6d6491c]
        mov edx, dword ptr ss : [esp+0x28]
        push eax
/*FIXUP push offset public_6d6b590 @0x6d4bbc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b590
        push edx
        call ebp
        add esp, 0xC
        lea ecx, ss:[esp+0xD94]
        call dword ptr ds : [public_6d6455c]
        test al, al
        je public_6d4bf0e
        public_6d4bbe7 : nop
        lea ecx, ss:[esp+0xD94]
        call dword ptr ds : [public_6d648b4]
/*FIXUP push offset public_6d6b584 @0x6d4bbf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b584
        push eax
        mov dword ptr ss : [esp+0x70], eax
        call dword ptr ds : [public_6d64a48]
        add esp, 8
        test eax, eax
        jne public_6d4bcee
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_6d4bc1f
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d4bc1f : nop
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
/*FIXUP push offset public_6d6b2b4 @0x6d4bc24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b2b4
/*FIXUP push offset public_6d6b578 @0x6d4bc29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b578
        push eax
        call ebp
        mov eax, dword ptr ds : [esi+0x20]
        add esp, 0x10
        test eax, eax
        jne public_6d4bc40
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d4bc40 : nop
        push eax
        call dword ptr ds : [public_6d64918]
        push eax
        call dword ptr ds : [public_6d6449c]
        mov esi, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [eax+0xC]
        add esp, 8
        cmp esi, edi
        je public_6d4bef9
        nop 
        public_6d4bc60 : nop
        mov al, byte ptr ds : [esi+0xC]
        test al, al
        mov eax, dword ptr ds : [esi+4]
        push eax
        je public_6d4bc9e
        call dword ptr ds : [public_6d642fc]
        add esp, 4
        test eax, eax
        je public_6d4bcde
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push eax
        lea ecx, ss:[esp+0x49C]
/*FIXUP push offset public_6d6b570 @0x6d4bc87*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b570
        push ecx
        call ebx
        lea edx, ss:[esp+0x4A4]
        push edx
/*FIXUP push offset public_6d6b03c @0x6d4bc97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b03c
        jmp public_6d4bccf
        public_6d4bc9e : nop
        call dword ptr ds : [public_6d642fc]
        add esp, 4
        test eax, eax
        je public_6d4bcde
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push eax
        lea ecx, ss:[esp+0x39C]
/*FIXUP push offset public_6d6b568 @0x6d4bcba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b568
        push ecx
        call ebx
        lea edx, ss:[esp+0x3A4]
        push edx
/*FIXUP push offset public_6d6b028 @0x6d4bcca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b028
        public_6d4bccf : nop
        mov eax, dword ptr ss : [esp+0x40]
/*FIXUP push offset public_6d6b578 @0x6d4bcd3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b578
        push eax
        call ebp
        add esp, 0x20
        public_6d4bcde : nop
        add esi, 0x20
        cmp esi, edi
        jne public_6d4bc60
        jmp public_6d4bef9
        public_6d4bcee : nop
        lea ecx, ss:[esp+0xD94]
        call dword ptr ds : [public_6d64914]
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x84], eax
        jle public_6d4bed7
        lea esp, ss:[esp]
        public_6d4bd10 : nop
        test ebx, ebx
        jne public_6d4bd1d
        mov byte ptr ss : [esp+0x994], bl
        jmp public_6d4bd3f
        public_6d4bd1d : nop
        mov dl, byte ptr ds : [public_6d6b566]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x994]
        repne scasb
        mov cx, word ptr ds : [public_6d6b564]
        dec edi
        mov word ptr ds : [edi], cx
        mov byte ptr ds : [edi+2], dl
        public_6d4bd3f : nop
        push ebx
        lea ecx, ss:[esp+0xD98]
        call dword ptr ds : [public_6d64590]
        mov edi, eax
        cmp byte ptr ds : [edi], 0x25
        jne public_6d4be91
        mov esi, dword ptr ds : [public_6d64a48]
/*FIXUP push offset public_6d6b558 @0x6d4bd5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b558
        push edi
        call esi
        add esp, 8
        test eax, eax
        jne public_6d4bd92
        mov ecx, dword ptr ss : [esp+0x230C]
        lea eax, ss:[esp+0x594]
        push eax
        push ecx
        call dword ptr ds : [public_6d64910]
        add esp, 8
        lea edi, ss:[esp+0x594]
        jmp public_6d4be91
/*FIXUP public_6d4bd92 : nop
        push offset public_6d6b54c @0x6d4bd92*/
  FIXUP public_6d4bd92 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b54c
        push edi
        call esi
        add esp, 8
        test eax, eax
        jne public_6d4bdad
        mov edx, dword ptr ss : [esp+0x6C]
        mov edi, dword ptr ds : [edx+8]
        jmp public_6d4be87
/*FIXUP public_6d4bdad : nop
        push offset public_6d6b540 @0x6d4bdad*/
  FIXUP public_6d4bdad : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b540
        push edi
        call esi
        add esp, 8
        test eax, eax
        jne public_6d4bde6
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x2C]
        push ecx
        lea edx, ss:[esp+0x598]
/*FIXUP push offset public_6d6b53c @0x6d4bdcb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b53c
        push edx
        call dword ptr ds : [public_6d64c74]
        add esp, 0xC
        lea edi, ss:[esp+0x594]
        jmp public_6d4be91
/*FIXUP public_6d4bde6 : nop
        push offset public_6d6b528 @0x6d4bde6*/
  FIXUP public_6d4bde6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b528
        push edi
        call esi
        add esp, 8
        test eax, eax
        jne public_6d4bdfe
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_6d4be84
/*FIXUP public_6d4bdfe : nop
        push offset public_6d6b514 @0x6d4bdfe*/
  FIXUP public_6d4bdfe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b514
        push edi
        call esi
        add esp, 8
        test eax, eax
        jne public_6d4be16
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [ecx+0x28]
        jmp public_6d4be87
/*FIXUP public_6d4be16 : nop
        push offset public_6d6b508 @0x6d4be16*/
  FIXUP public_6d4be16 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b508
        push edi
        call esi
        add esp, 8
        test eax, eax
        jne public_6d4be2e
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edx+0x48]
        jmp public_6d4be87
/*FIXUP public_6d4be2e : nop
        push offset public_6d6b4f8 @0x6d4be2e*/
  FIXUP public_6d4be2e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4f8
        push edi
        call esi
        add esp, 8
        test eax, eax
        jne public_6d4be71
        mov eax, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [public_6d643dc]
        add esp, 4
        test eax, eax
        je public_6d4be91
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        push eax
        call dword ptr ds : [public_6d644f4]
        add esp, 4
        test eax, eax
        je public_6d4be91
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov edi, eax
        jmp public_6d4be91
/*FIXUP public_6d4be71 : nop
        push offset public_6d6b4e8 @0x6d4be71*/
  FIXUP public_6d4be71 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e8
        push edi
        call esi
        add esp, 8
        test eax, eax
        jne public_6d4be91
        mov eax, dword ptr ss : [esp+0x1C]
        public_6d4be84 : nop
        mov edi, dword ptr ds : [eax+8]
        public_6d4be87 : nop
        test edi, edi
        jne public_6d4be91
        mov edi, dword ptr ds : [public_6d64b7c]
        public_6d4be91 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        lea edx, ss:[esp+0x994]
        mov dword ptr ss : [esp+0x20], eax
        xor eax, eax
        mov edi, edx
        mov edx, dword ptr ss : [esp+0x20]
        repne scasb
        mov eax, dword ptr ss : [esp+0x84]
        dec edi
        mov ecx, edx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        inc ebx
        cmp ebx, eax
        rep movsb
        jl public_6d4bd10
        public_6d4bed7 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x994]
        push eax
        push ecx
/*FIXUP push offset public_6d6b578 @0x6d4bee8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b578
        push edx
        call ebp
        mov ebx, dword ptr ds : [public_6d64c74]
        add esp, 0x10
        public_6d4bef9 : nop
        lea ecx, ss:[esp+0xD94]
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6d4bbe7
        public_6d4bf0e : nop
        mov eax, dword ptr ss : [esp+0x28]
/*FIXUP push offset public_6d6af50 @0x6d4bf12*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6af50
        push eax
        call ebp
        add esp, 8
        lea ecx, ss:[esp+0xD94]
        call dword ptr ds : [public_6d64540]
        test al, al
        jne public_6d4bbb5
        mov ebx, dword ptr ds : [public_6d64bd8]
        public_6d4bf38 : nop
        lea ecx, ss:[esp+0xD94]
        mov byte ptr ss : [esp+0x13], 1
        xor edi, edi
        call dword ptr ds : [public_6d6490c]
        jmp public_6d4bf69
        public_6d4bf4e : nop
        mov ebp, dword ptr ds : [public_6d64c08]
        lea ecx, ss:[esp+0xD94]
        call dword ptr ds : [public_6d6490c]
        jmp public_6d4bf69
        public_6d4bf63 : nop
        mov ebp, dword ptr ds : [public_6d64c08]
        public_6d4bf69 : nop
        cmp dword ptr ss : [esp+0x28], edi
        je public_6d4bfee
        push edi
        lea ecx, ss:[esp+0x2C]
        call public_6d48960
        lea ecx, ss:[esp+0x28]
        call public_6d48b60
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, edi
        je public_6d4bf98
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        mov dword ptr ss : [esp+0x28], edi
        public_6d4bf98 : nop
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, edi
        jne public_6d4bfa5
        mov eax, dword ptr ds : [public_6d64b7c]
/*FIXUP public_6d4bfa5 : nop
        push offset public_6d6b4e4 @0x6d4bfa5*/
  FIXUP public_6d4bfa5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e4
        push eax
        call ebx
/*FIXUP push offset public_6d6b30c @0x6d4bfad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b30c
        push eax
        mov dword ptr ss : [esp+0x38], eax
        call ebp
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 0x10
        cmp eax, edi
        jne public_6d4bfc9
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d4bfc9 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x34]
        push ecx
        push edx
        push 1
        push eax
        call dword ptr ds : [public_6d64c04]
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 0x14
        mov dword ptr ss : [esp+0x28], edi
        public_6d4bfee : nop
        lea ecx, ss:[esp+0x21BC]
        mov dword ptr ss : [esp+0x68], ecx
        lea ecx, ss:[esp+0x21BC]
        mov byte ptr ss : [esp+0x2304], 6
        call dword ptr ds : [public_6d64660]
        push 1
        lea ecx, ss:[esp+0x21C0]
        mov byte ptr ss : [esp+0x2308], 5
        call dword ptr ds : [public_6d64b74]
        lea ecx, ss:[esp+0xD94]
        mov byte ptr ss : [esp+0x2304], 7
        call dword ptr ds : [public_6d64660]
        mov eax, dword ptr ss : [esp+0xD98]
        cmp eax, edi
        je public_6d4c061
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d4c058
        cmp cl, 0xFF
        je public_6d4c058
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d4c061
        public_6d4c058 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d4c061 : nop
        mov eax, dword ptr ss : [esp+0x54]
        cmp eax, edi
        mov dword ptr ss : [esp+0xD98], edi
        mov dword ptr ss : [esp+0xD9C], edi
        mov dword ptr ss : [esp+0xDA0], edi
        mov byte ptr ss : [esp+0x2304], 2
        je public_6d4c094
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        mov dword ptr ss : [esp+0x54], edi
        public_6d4c094 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        cmp eax, edi
        je public_6d4c0b8
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d4c0af
        cmp cl, 0xFF
        je public_6d4c0af
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d4c0b8
        public_6d4c0af : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d4c0b8 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6d4c104
        mov eax, dword ptr ss : [esp+0x74]
        cmp eax, edi
        jne public_6d4c0cd
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d4c0cd : nop
        mov esi, dword ptr ss : [esp+0x80]
        push eax
        mov ecx, esi
        call public_6d4b5a0
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d4c104
        lea edx, ss:[esp+0x18C]
        push edx
        push esi
        mov eax, 0x100003
/*FIXUP push offset public_6d6b4b8 @0x6d4c0f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4b8
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x10
        public_6d4c104 : nop
        mov dword ptr ss : [esp+0x24], offset public_6d6b5a0
        cmp dword ptr ss : [esp+0x28], edi
        mov byte ptr ss : [esp+0x2304], 9
        je public_6d4c1a1
        push edi
        lea ecx, ss:[esp+0x2C]
        call public_6d48960
        lea ecx, ss:[esp+0x28]
        call public_6d48b60
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, edi
        je public_6d4c147
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        mov dword ptr ss : [esp+0x28], edi
        public_6d4c147 : nop
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, edi
        jne public_6d4c154
        mov eax, dword ptr ds : [public_6d64b7c]
/*FIXUP public_6d4c154 : nop
        push offset public_6d6b4e4 @0x6d4c154*/
  FIXUP public_6d4c154 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e4
        push eax
        call dword ptr ds : [public_6d64bd8]
/*FIXUP push offset public_6d6b30c @0x6d4c160*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b30c
        push eax
        mov dword ptr ss : [esp+0x38], eax
        call ebp
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 0x10
        cmp eax, edi
        jne public_6d4c17c
        mov eax, dword ptr ds : [public_6d64b7c]
        public_6d4c17c : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x34]
        push ecx
        push edx
        push 1
        push eax
        call dword ptr ds : [public_6d64c04]
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 0x14
        mov dword ptr ss : [esp+0x28], edi
        public_6d4c1a1 : nop
        push 1
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x2308], 8
        call dword ptr ds : [public_6d64b74]
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, edi
        je public_6d4c1d9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d4c1d0
        cmp cl, 0xFF
        je public_6d4c1d0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d4c1d9
        public_6d4c1d0 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d4c1d9 : nop
        mov eax, dword ptr ss : [esp+0x74]
        cmp eax, edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        je public_6d4c209
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6d4c200
        cmp cl, 0xFF
        je public_6d4c200
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d4c209
        public_6d4c200 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d4c209 : nop
        mov al, byte ptr ss : [esp+0x13]
        public_6d4c20d : nop
        mov ecx, dword ptr ss : [esp+0x22FC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x22F8
        ret 4
        UNREACHABLE_TRAP(0x6d4b790)
    }
}

#undef public_6d4b7f2
#undef public_6d4b7fa
#undef public_6d4b93f
#undef public_6d4b9d3
#undef public_6d4ba55
#undef public_6d4ba5a
#undef public_6d4baf0
#undef public_6d4bb20
#undef public_6d4bb3d
#undef public_6d4bb43
#undef public_6d4bb5b
#undef public_6d4bbb5
#undef public_6d4bbe7
#undef public_6d4bc1f
#undef public_6d4bc40
#undef public_6d4bc60
#undef public_6d4bc9e
#undef public_6d4bccf
#undef public_6d4bcde
#undef public_6d4bcee
#undef public_6d4bd10
#undef public_6d4bd1d
#undef public_6d4bd3f
#undef public_6d4bd92
#undef public_6d4bdad
#undef public_6d4bde6
#undef public_6d4bdfe
#undef public_6d4be16
#undef public_6d4be2e
#undef public_6d4be71
#undef public_6d4be84
#undef public_6d4be87
#undef public_6d4be91
#undef public_6d4bed7
#undef public_6d4bef9
#undef public_6d4bf0e
#undef public_6d4bf38
#undef public_6d4bf4e
#undef public_6d4bf63
#undef public_6d4bf69
#undef public_6d4bf98
#undef public_6d4bfa5
#undef public_6d4bfc9
#undef public_6d4bfee
#undef public_6d4c058
#undef public_6d4c061
#undef public_6d4c094
#undef public_6d4c0af
#undef public_6d4c0b8
#undef public_6d4c0cd
#undef public_6d4c104
#undef public_6d4c147
#undef public_6d4c154
#undef public_6d4c17c
#undef public_6d4c1a1
#undef public_6d4c1d0
#undef public_6d4c1d9
#undef public_6d4c200
#undef public_6d4c209
#undef public_6d4c20d
