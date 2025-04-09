#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_465110);
CLANG_FORWARD_PROC_SYMBOL(public_46baf0);
CLANG_FORWARD_PROC_SYMBOL(public_46bba0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46cd50);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_58cbf0);
CLANG_FORWARD_PROC_SYMBOL(public_58cd00);
CLANG_FORWARD_PROC_SYMBOL(public_58cdb0);
CLANG_FORWARD_PROC_SYMBOL(public_58d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_58d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_58d910);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb19c);

#define public_465180 _public_465180
#define public_4651d9 _public_4651d9
#define public_4651f5 _public_4651f5
#define public_4651fa _public_4651fa
#define public_465200 _public_465200
#define public_465224 _public_465224
#define public_465250 _public_465250
#define public_46534c _public_46534c
#define public_465402 _public_465402
#define public_46545a _public_46545a
#define public_4654b3 _public_4654b3
#define public_4654dc _public_4654dc
#define public_465535 _public_465535
#define public_465540 _public_465540
#define public_465599 _public_465599
#define public_4655a1 _public_4655a1
#define public_4655f2 _public_4655f2
#define public_4655f8 _public_4655f8
#define public_4655fd _public_4655fd
#define public_465613 _public_465613
#define public_465624 _public_465624
#define public_465635 _public_465635
#define public_465644 _public_465644
#define public_465660 _public_465660
#define public_4656bc _public_4656bc
#define public_4656cb _public_4656cb
#define public_465721 _public_465721
#define public_4657a1 _public_4657a1
#define public_4657b5 _public_4657b5
#define public_465817 _public_465817
#define public_46582b _public_46582b
#define public_46589f _public_46589f
#define public_4658b5 _public_4658b5
#define public_465921 _public_465921
#define public_465981 _public_465981
#define public_465999 _public_465999
#define public_4659cb _public_4659cb
#define public_465a04 _public_465a04
#define public_465a18 _public_465a18
#define public_465a35 _public_465a35
#define public_465a40 _public_465a40
#define public_465a6d _public_465a6d

PROC_DECLARE(0x465110, internal_465110, public_465110);
extern "C" NAKED register_t __cdecl internal_465110()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push public_5bb19c @0x465115*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb19c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x138
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x3B0]
        test esi, esi
        mov dword ptr ss : [ebp-0x18], edi
        je public_465a6d
        mov eax, dword ptr ds : [public_66d3fc]
        mov dword ptr ss : [ebp-0x60], eax
        mov eax, dword ptr ds : [esi+0x10]
        lea eax, ds:[eax+eax*2]
        shl eax, 2
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x28], eax
        mov esi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp eax, esi
        mov ecx, esp
        mov dword ptr ss : [ebp-0x30], ecx
        mov dword ptr ss : [ebp-0x68], ebx
        je public_465224
        lea edi, ds:[ecx+8]
        public_465180 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp-0x2C], ecx
        mov dl, byte ptr ss : [ebp-0x2A]
        test dl, dl
        je public_465200
        cmp ecx, dword ptr ds : [public_66da48]
        je public_465200
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edi-8], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [edi-4], ecx
        mov al, byte ptr ds : [public_67ed78]
        test al, 1
        mov esi, dword ptr ds : [edx+0x3B0]
        jne public_4651d9
        mov dl, al
        xor eax, eax
        or dl, 1
/*FIXUP push offset _public_401e90 @0x4651b7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_401e90
        mov byte ptr ds : [public_67ed78], dl
        mov dword ptr ds : [public_67ed80], eax
        mov dword ptr ds : [public_67ed84], eax
        mov dword ptr ds : [public_67ed88], eax
        call public_5b7e6c
        add esp, 4
        public_4651d9 : nop
        lea eax, ss:[ebp-0x2C]
        push eax
        lea ecx, ss:[ebp-0x70]
        push ecx
        lea ecx, ds:[esi+0x18]
        call public_46cd50
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x1C]
        je public_4651f5
        add eax, 0x10
        jmp public_4651fa
        public_4651f5 : nop
        mov eax, offset public_67ed80
        public_4651fa : nop
        mov dword ptr ds : [edi], eax
        inc ebx
        add edi, 0xC
        public_465200 : nop
        lea ecx, ss:[ebp-0x28]
        call public_52afa0
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [edx+0x3B0]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x28]
        cmp eax, ecx
        jne public_465180
        mov dword ptr ss : [ebp-0x68], ebx
        mov edi, edx
        public_465224 : nop
        mov ecx, dword ptr ds : [edi+0x3C4]
        call public_58d4a0
        mov esi, dword ptr ss : [ebp+8]
        xor edi, edi
        cmp esi, ebx
        mov dword ptr ss : [ebp-0x24], edi
        jge public_465a35
        mov ecx, dword ptr ss : [ebp-0x30]
        lea eax, ds:[esi+esi*2]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp-0x1C], edx
        nop 
        lea esp, ss:[esp]
        public_465250 : nop
        cmp edi, dword ptr ss : [ebp+0xC]
        jae public_465a6d
        mov ecx, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [ecx+0x3C4]
        lea eax, ss:[ebp-0x14]
        push eax
        push 0
        push edi
        call public_58cd00
        test al, al
        je public_465a18
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea edx, ss:[ebp-0x88]
        push edx
        mov byte ptr ss : [ebp-0xD], 1
        call public_46c860
        xor esi, esi
        push esi
        lea ecx, ss:[ebp-0x84]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], esi
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x58]
        push edx
        push eax
        lea eax, ss:[ebp-0x7C]
        push eax
        mov byte ptr ss : [ebp-4], 1
        call public_46c800
        lea ecx, ss:[ebp-0x58]
        mov byte ptr ss : [ebp-4], 0
        call public_45eeb0
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[ebp-0x84]
        mov dword ptr ss : [ebp-4], ebx
        call dword ptr ds : [public_5c62bc]
        mov edx, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ss : [ebp-0x60]
        cmp dword ptr ds : [edx], ecx
        mov dword ptr ss : [ebp-0x20], esi
        jne public_46534c
        push 0x3343
        lea ecx, ss:[ebp-0x90]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 2
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x5C], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x5C]
        push edx
        push eax
        lea eax, ss:[ebp-0x100]
        push eax
        mov byte ptr ss : [ebp-4], 3
        call public_46c800
        lea ecx, ss:[ebp-0x5C]
        mov byte ptr ss : [ebp-4], 2
        call public_45eeb0
        lea ecx, ss:[ebp-0x90]
        mov dword ptr ss : [ebp-4], ebx
        call dword ptr ds : [public_5c62b4]
        jmp public_4655fd
        public_46534c : nop
        mov esi, dword ptr ds : [public_5c62b8]
        push 0x8283
        lea ecx, ss:[ebp-0x9C]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x6C], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x6C]
        push edx
        push eax
        lea eax, ss:[ebp-0x74]
        push eax
        mov byte ptr ss : [ebp-4], 5
        call public_46c800
        lea ecx, ss:[ebp-0x6C]
        mov byte ptr ss : [ebp-4], 4
        call public_45eeb0
        mov edi, dword ptr ds : [public_5c62b4]
        lea ecx, ss:[ebp-0x9C]
        mov dword ptr ss : [ebp-4], ebx
        call edi
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [public_66da40]
        jne public_465402
        push 0xD801
        lea ecx, ss:[ebp-0xA8]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 6
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x64], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x64]
        push edx
        push eax
        lea eax, ss:[ebp-0xDC]
        push eax
        mov byte ptr ss : [ebp-4], 7
        call public_46c800
        lea ecx, ss:[ebp-0x64]
        mov byte ptr ss : [ebp-4], 6
        call public_45eeb0
        lea ecx, ss:[ebp-0xA8]
        jmp public_4655f8
        public_465402 : nop
        cmp eax, dword ptr ds : [public_66da3c]
        jne public_46545a
        push 0x1D9D
        lea ecx, ss:[ebp-0xB4]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x30], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x30]
        push edx
        push eax
        lea eax, ss:[ebp-0x94]
        push eax
        mov byte ptr ss : [ebp-4], 9
        call public_46c800
        lea ecx, ss:[ebp-0x30]
        mov byte ptr ss : [ebp-4], 8
        call public_45eeb0
        lea ecx, ss:[ebp-0xB4]
        jmp public_4655f8
        public_46545a : nop
        cmp eax, dword ptr ds : [public_66da38]
        jne public_4654dc
        push 0xD801
        lea ecx, ss:[ebp-0xC0]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0xA
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x50], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x50]
        push edx
        push eax
        lea eax, ss:[ebp-0x118]
        push eax
        mov byte ptr ss : [ebp-4], 0xB
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x50]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 0xA
        je public_4654b3
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x50], 0
        public_4654b3 : nop
        lea ecx, ss:[ebp-0xC0]
        mov dword ptr ss : [ebp-4], ebx
        call edi
        mov eax, dword ptr ds : [public_66da84]
        test eax, eax
        je public_4655fd
        mov ecx, dword ptr ds : [eax+0x350]
        test ecx, ecx
        setne byte ptr ss : [ebp-0xD]
        jmp public_4655fd
        public_4654dc : nop
        cmp eax, dword ptr ds : [public_66da48]
        jne public_465540
        push 0x73F7
        lea ecx, ss:[ebp-0xCC]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0xC
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x3C], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x3C]
        push edx
        push eax
        lea eax, ss:[ebp-0xA0]
        push eax
        mov byte ptr ss : [ebp-4], 0xD
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x3C]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 0xC
        je public_465535
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x3C], 0
        public_465535 : nop
        lea ecx, ss:[ebp-0xCC]
        jmp public_4655f8
        public_465540 : nop
        cmp eax, dword ptr ds : [public_66da44]
        jne public_4655a1
        push 0xD681
        lea ecx, ss:[ebp-0xD8]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0xE
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x44], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x44]
        push edx
        push eax
        lea eax, ss:[ebp-0xE8]
        push eax
        mov byte ptr ss : [ebp-4], 0xF
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x44]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 0xE
        je public_465599
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x44], 0
        public_465599 : nop
        lea ecx, ss:[ebp-0xD8]
        jmp public_4655f8
        public_4655a1 : nop
        push 0x8283
        lea ecx, ss:[ebp-0xE4]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0x10
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x48], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x48]
        push edx
        push eax
        lea eax, ss:[ebp-0xAC]
        push eax
        mov byte ptr ss : [ebp-4], 0x11
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x48]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 0x10
        je public_4655f2
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x48], 0
        public_4655f2 : nop
        lea ecx, ss:[ebp-0xE4]
        public_4655f8 : nop
        mov dword ptr ss : [ebp-4], ebx
        call edi
        public_4655fd : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [public_66da40]
        jne public_465613
        mov dword ptr ss : [ebp-0x20], 0x1B76
        jmp public_465644
        public_465613 : nop
        cmp eax, dword ptr ds : [public_66da3c]
        jne public_465624
        mov dword ptr ss : [ebp-0x20], 0x1B77
        jmp public_465644
        public_465624 : nop
        cmp eax, dword ptr ds : [public_66da38]
        jne public_465635
        mov dword ptr ss : [ebp-0x20], 0x1B78
        jmp public_465644
        public_465635 : nop
        cmp eax, dword ptr ds : [public_66da48]
        jne public_465644
        mov dword ptr ss : [ebp-0x20], 0x1B8C
        public_465644 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ss : [ebp-0x18]
        push ecx
        mov ecx, dword ptr ds : [edx+0x3C4]
        call public_58d910
        test eax, eax
        je public_465660
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [eax+4], ecx
        public_465660 : nop
        mov al, byte ptr ss : [ebp-0xD]
        test al, al
        jne public_4656cb
        push 0xBB80
        lea ecx, ss:[ebp-0xF0]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0x12
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x54], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x54]
        push edx
        push eax
        lea eax, ss:[ebp-0x10C]
        push eax
        mov byte ptr ss : [ebp-4], 0x13
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x54]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 0x12
        je public_4656bc
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x54], 0
        public_4656bc : nop
        lea ecx, ss:[ebp-0xF0]
        mov dword ptr ss : [ebp-4], ebx
        call dword ptr ds : [public_5c62b4]
        public_4656cb : nop
        push ebx
        mov ebx, dword ptr ds : [public_5c62b0]
/*FIXUP push offset public_5cfb78 @0x4656d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfb78
        lea ecx, ss:[ebp-0x130]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0x14
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x40], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x40]
        push edx
        push eax
        lea eax, ss:[ebp-0xB8]
        push eax
        mov byte ptr ss : [ebp-4], 0x15
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x40]
        xor esi, esi
        cmp ecx, esi
        mov byte ptr ss : [ebp-4], 0x14
        je public_465721
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x40], esi
        public_465721 : nop
        or edi, 0xFFFFFFFF
        lea ecx, ss:[ebp-0x130]
        mov dword ptr ss : [ebp-4], edi
        call dword ptr ds : [public_5c62ac]
        mov al, byte ptr ss : [ebp-0xD]
        test al, al
        je public_46582b
        mov eax, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [public_66da40]
        jne public_4657b5
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ds : [ecx+0x398]
        push edx
        lea ecx, ss:[ebp-0xFC]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0x16
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x34], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x34]
        push edx
        push eax
        lea eax, ss:[ebp-0xF4]
        push eax
        mov byte ptr ss : [ebp-4], 0x17
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x34]
        cmp ecx, esi
        mov byte ptr ss : [ebp-4], 0x16
        je public_4657a1
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x34], esi
        public_4657a1 : nop
        lea ecx, ss:[ebp-0xFC]
        mov dword ptr ss : [ebp-4], edi
        call dword ptr ds : [public_5c62ec]
        jmp public_4658b5
        public_4657b5 : nop
        cmp eax, dword ptr ds : [public_66da38]
        jne public_4658b5
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+0x394]
        push ecx
        lea ecx, ss:[ebp-0x108]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0x18
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x38], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[ebp-0x38]
        push edx
        push eax
        lea eax, ss:[ebp-0xC4]
        push eax
        mov byte ptr ss : [ebp-4], 0x19
        call public_46c800
        mov ecx, dword ptr ss : [ebp-0x38]
        cmp ecx, esi
        mov byte ptr ss : [ebp-4], 0x18
        je public_465817
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x38], esi
        public_465817 : nop
        lea ecx, ss:[ebp-0x108]
        mov dword ptr ss : [ebp-4], edi
        call dword ptr ds : [public_5c62ec]
        jmp public_4658b5
        public_46582b : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+0x39C]
        push ecx
        lea ecx, ss:[ebp-0x114]
        call dword ptr ds : [public_5c62f0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0x1A
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push esi
        mov byte ptr ss : [ebp-4], 0x1B
        mov edi, ecx
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[ebp-0x28]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [ebp-0x28]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 0x1A
        je public_46589f
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x28], 0
        public_46589f : nop
        lea ecx, ss:[ebp-0x114]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ec]
        or edi, 0xFFFFFFFF
        public_4658b5 : nop
        push edi
/*FIXUP push offset public_5cfb78 @0x4658b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfb78
        lea ecx, ss:[ebp-0x144]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0x1C
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push esi
        mov byte ptr ss : [ebp-4], 0x1D
        mov edi, ecx
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[ebp-0x2C]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ss : [ebp-0x2C]
        test ecx, ecx
        mov byte ptr ss : [ebp-4], 0x1C
        je public_465921
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x2C], 0
        public_465921 : nop
        lea ecx, ss:[ebp-0x144]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        mov ebx, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ss:[ebp-0x11C]
        push eax
        call public_46baf0
        mov edi, dword ptr ds : [eax]
        lea ecx, ss:[ebp-0xD0]
        push ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp-0x70], edi
        call public_53e430
        push eax
        lea ecx, ss:[ebp-0x4C]
        call public_46bba0
        mov ecx, dword ptr ss : [ebp-0x14]
        lea edx, ss:[ebp-0x78]
        push edx
        call public_46baf0
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0x4C]
        cmp eax, edi
        je public_4659cb
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        mov dword ptr ss : [ebp-0x20], ecx
        public_465981 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        lea ebx, ds:[eax+8]
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_465999
        mov edi, eax
        public_465999 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        push ebx
        push eax
        call public_46ea00
        mov eax, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp-0x70]
        add esp, 8
        inc edx
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp-0x4C]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [ebp-0x4C], eax
        jne public_465981
        mov ebx, dword ptr ss : [ebp-0x1C]
        public_4659cb : nop
        mov esi, dword ptr ss : [ebp-0x24]
        mov edi, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [edi+0x3C4]
        push esi
        call public_58d0b0
        mov cl, byte ptr ss : [ebp-0xD]
        mov byte ptr ds : [eax], cl
        mov byte ptr ds : [eax+1], cl
        mov ecx, dword ptr ds : [eax+8]
        mov byte ptr ds : [eax+2], 1
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [ecx+8], edx
        cmp dword ptr ds : [ebx], eax
        jne public_465a04
        mov ecx, dword ptr ds : [edi+0x3C4]
        push esi
        call public_58d4b0
        public_465a04 : nop
        mov ecx, dword ptr ds : [edi+0x3C4]
        push 0
        push esi
        call public_58cdb0
        mov esi, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ss : [ebp-0x68]
        public_465a18 : nop
        mov eax, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ss : [ebp-0x1C]
        inc eax
        mov dword ptr ss : [ebp-0x24], eax
        mov edi, dword ptr ss : [ebp-0x24]
        add edx, 0xC
        add eax, esi
        cmp eax, ebx
        mov dword ptr ss : [ebp-0x1C], edx
        jl public_465250
        public_465a35 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        cmp edi, ebx
        jae public_465a6d
        lea esp, ss:[esp]
        public_465a40 : nop
        mov esi, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [esi+0x3C4]
        push 0
        push edi
        call public_58cbf0
        mov ecx, dword ptr ds : [esi+0x3C4]
        push edi
        call public_58d0b0
        inc edi
        cmp edi, ebx
        mov byte ptr ds : [eax], 0
        mov byte ptr ds : [eax+1], 0
        mov byte ptr ds : [eax+2], 0
        jb public_465a40
        public_465a6d : nop
        lea esp, ss:[ebp-0x150]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x465110)
    }
}

#undef public_465180
#undef public_4651d9
#undef public_4651f5
#undef public_4651fa
#undef public_465200
#undef public_465224
#undef public_465250
#undef public_46534c
#undef public_465402
#undef public_46545a
#undef public_4654b3
#undef public_4654dc
#undef public_465535
#undef public_465540
#undef public_465599
#undef public_4655a1
#undef public_4655f2
#undef public_4655f8
#undef public_4655fd
#undef public_465613
#undef public_465624
#undef public_465635
#undef public_465644
#undef public_465660
#undef public_4656bc
#undef public_4656cb
#undef public_465721
#undef public_4657a1
#undef public_4657b5
#undef public_465817
#undef public_46582b
#undef public_46589f
#undef public_4658b5
#undef public_465921
#undef public_465981
#undef public_465999
#undef public_4659cb
#undef public_465a04
#undef public_465a18
#undef public_465a35
#undef public_465a40
#undef public_465a6d
