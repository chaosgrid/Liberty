#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef00d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef0100);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bf30);
CLANG_FORWARD_PROC_SYMBOL(public_6f69a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f86e40);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_JUMP_SYMBOL(public_6fabf03);

#define public_6eef7a7 _public_6eef7a7
#define public_6eef7d3 _public_6eef7d3
#define public_6eef801 _public_6eef801
#define public_6eef80b _public_6eef80b
#define public_6eef824 _public_6eef824
#define public_6eef82f _public_6eef82f
#define public_6eef831 _public_6eef831
#define public_6eef83d _public_6eef83d
#define public_6eef870 _public_6eef870
#define public_6eef877 _public_6eef877
#define public_6eef895 _public_6eef895
#define public_6eef8c3 _public_6eef8c3
#define public_6eef8ed _public_6eef8ed
#define public_6eef8fa _public_6eef8fa
#define public_6eef901 _public_6eef901
#define public_6eef920 _public_6eef920
#define public_6eef936 _public_6eef936
#define public_6eef94a _public_6eef94a
#define public_6eef970 _public_6eef970
#define public_6eef986 _public_6eef986
#define public_6eef99a _public_6eef99a
#define public_6eef9bf _public_6eef9bf
#define public_6eef9f8 _public_6eef9f8
#define public_6eefa15 _public_6eefa15
#define public_6eefa29 _public_6eefa29
#define public_6eefa96 _public_6eefa96
#define public_6eefa98 _public_6eefa98
#define public_6eefae2 _public_6eefae2
#define public_6eefb0f _public_6eefb0f
#define public_6eefb23 _public_6eefb23
#define public_6eefb46 _public_6eefb46
#define public_6eefc11 _public_6eefc11
#define public_6eefc3b _public_6eefc3b
#define public_6eefc60 _public_6eefc60
#define public_6eefd04 _public_6eefd04
#define public_6eefd13 _public_6eefd13
#define public_6eefd5f _public_6eefd5f
#define public_6eefd66 _public_6eefd66
#define public_6eefda3 _public_6eefda3
#define public_6eefdea _public_6eefdea
#define public_6eefe23 _public_6eefe23
#define public_6eefe50 _public_6eefe50
#define public_6eefe5b _public_6eefe5b
#define public_6eefe5d _public_6eefe5d
#define public_6eefe70 _public_6eefe70
#define public_6eefe7c _public_6eefe7c
#define public_6eefe8f _public_6eefe8f
#define public_6eefeb4 _public_6eefeb4
#define public_6eefeb8 _public_6eefeb8
#define public_6eefede _public_6eefede
#define public_6eeff03 _public_6eeff03
#define public_6eeff12 _public_6eeff12
#define public_6eeff14 _public_6eeff14
#define public_6eeff26 _public_6eeff26
#define public_6eeff32 _public_6eeff32
#define public_6eeff38 _public_6eeff38
#define public_6eeff60 _public_6eeff60
#define public_6eeff7d _public_6eeff7d
#define public_6eeff96 _public_6eeff96
#define public_6eeffa7 _public_6eeffa7
#define public_6eeffae _public_6eeffae
#define public_6eefff0 _public_6eefff0
#define public_6eefffb _public_6eefffb
#define public_6eefffd _public_6eefffd
#define public_6ef0020 _public_6ef0020
#define public_6ef002b _public_6ef002b
#define public_6ef0040 _public_6ef0040
#define public_6ef004b _public_6ef004b
#define public_6ef004d _public_6ef004d
#define public_6ef0060 _public_6ef0060
#define public_6ef006c _public_6ef006c
#define public_6ef0072 _public_6ef0072
#define public_6ef00a3 _public_6ef00a3
#define public_6ef00a7 _public_6ef00a7
#define public_6ef00ab _public_6ef00ab
#define public_6ef00ad _public_6ef00ad

PROC_DECLARE(0x6eef740, internal_6eef740, public_6eef740);
extern "C" NAKED register_t __cdecl internal_6eef740()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fabf03 @0x6eef748*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fabf03
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        mov eax, dword ptr ds : [eax]
        sub esp, 0x50
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        jge public_6eefb46
        mov edi, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6eef7a7
        cmp dword ptr ds : [edi+8], 0x20
        jne public_6eef7a7
        mov eax, dword ptr ds : [esi-0x1B0]
        lea ecx, ds:[esi-0x1B0]
        call dword ptr ds : [eax+0x94]
/*FIXUP push offset public_6fb75e4 @0x6eef793*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75e4
        push edi
        mov ecx, esi
        call public_6f4bf30
        mov al, 1
        jmp public_6ef00ad
        public_6eef7a7 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 3
        mov ebp, dword ptr ds : [public_6fb3124]
        jne public_6eef877
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [eax+0x10]
        cmp ebx, 0xFFFFFFFF
        je public_6eef7d3
        mov ecx, esi
        call ebp
        cmp eax, ebx
        jne public_6eef877
        public_6eef7d3 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [public_6fd3bb8], eax
        jne public_6eef877
        mov ecx, dword ptr ds : [esi+0xE0]
        test ecx, ecx
        lea edi, ds:[esi+0xDC]
        je public_6eef801
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jne public_6eef80b
        public_6eef801 : nop
        push 2
        mov ecx, esi
        call dword ptr ds : [public_6fb3120]
        public_6eef80b : nop
        mov eax, dword ptr ds : [esi+0xD0]
        mov edx, dword ptr ds : [esi+0xD4]
        mov ecx, dword ptr ds : [ebx+8]
        add esi, 0xCC
        cmp eax, edx
        je public_6eef82f
        public_6eef824 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6eef831
        add eax, 4
        cmp eax, edx
        jne public_6eef824
        public_6eef82f : nop
        mov eax, edx
        public_6eef831 : nop
        cmp eax, edx
        je public_6eef83d
        push eax
        mov ecx, esi
        call public_6f69a10
        public_6eef83d : nop
        mov ecx, dword ptr ds : [ebx+8]
        lea edx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x70], ecx
        push edx
        mov ecx, edi
        call public_6eb5f30
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        jne public_6eef870
        lea eax, ss:[esp+0x70]
        push eax
        push ecx
        mov ecx, edi
        call public_6eb5770
        lea ecx, ss:[esp+0x70]
        push ecx
        mov ecx, edi
        call public_6eb5f30
        public_6eef870 : nop
        mov al, 1
        jmp public_6ef00ad
        public_6eef877 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 3
        jne public_6eef8c3
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [eax+0x10]
        cmp ebx, 0xFFFFFFFF
        je public_6eef895
        mov ecx, esi
        call ebp
        cmp eax, ebx
        jne public_6eef8c3
        public_6eef895 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+4]
        cmp dword ptr ds : [public_6fd3bac], eax
        jne public_6eef8c3
        mov edx, dword ptr ds : [esi-0x1B0]
        lea ecx, ds:[esi-0x1B0]
        mov byte ptr ds : [esi+0xAC], 1
        call dword ptr ds : [edx+0x94]
        mov al, 1
        jmp public_6ef00ad
        public_6eef8c3 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6eef901
        cmp dword ptr ds : [edi+8], 0x39
        jne public_6eef901
        mov ecx, dword ptr ds : [esi+0xE0]
        test ecx, ecx
        je public_6eef8ed
        mov eax, dword ptr ds : [esi+0xE4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jne public_6eef8fa
/*FIXUP public_6eef8ed : nop
        push offset public_6fb75e4 @0x6eef8ed*/
  FIXUP public_6eef8ed : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75e4
        push edi
        mov ecx, esi
        call public_6f4bf30
        public_6eef8fa : nop
        mov al, 1
        jmp public_6ef00ad
        public_6eef901 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6eef94a
        cmp dword ptr ds : [edi+8], 0x12
        jne public_6eef94a
        mov eax, dword ptr ds : [esi+0x54]
        mov ebx, dword ptr ds : [esi+0x50]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x70], eax
        je public_6eef936
        public_6eef920 : nop
        mov ecx, dword ptr ds : [ebx]
        call public_6ef00d0
        test al, al
        jne public_6eef936
        mov eax, dword ptr ss : [esp+0x70]
        add ebx, 4
        cmp ebx, eax
        jne public_6eef920
/*FIXUP public_6eef936 : nop
        push offset public_6fb75e4 @0x6eef936*/
  FIXUP public_6eef936 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75e4
        push edi
        mov ecx, esi
        call public_6f4bf30
        mov al, 1
        jmp public_6ef00ad
        public_6eef94a : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6eef99a
        cmp dword ptr ds : [edi+8], 0x25
        jne public_6eef99a
        mov eax, dword ptr ds : [esi+0x54]
        mov ebx, dword ptr ds : [esi+0x50]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x70], eax
        je public_6eef986
        lea esp, ss:[esp]
        public_6eef970 : nop
        mov ecx, dword ptr ds : [ebx]
        call public_6ef00d0
        test al, al
        jne public_6eef986
        mov eax, dword ptr ss : [esp+0x70]
        add ebx, 4
        cmp ebx, eax
        jne public_6eef970
/*FIXUP public_6eef986 : nop
        push offset public_6fb75e4 @0x6eef986*/
  FIXUP public_6eef986 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75e4
        push edi
        mov ecx, esi
        call public_6f4bf30
        mov al, 1
        jmp public_6ef00ad
        public_6eef99a : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6eef9bf
        cmp dword ptr ds : [edi+8], 0x27
        jne public_6eef9bf
/*FIXUP push offset public_6fb75e4 @0x6eef9ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75e4
        push edi
        mov ecx, esi
        call public_6f4bf30
        mov al, 1
        jmp public_6ef00ad
        public_6eef9bf : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6eefa29
        cmp dword ptr ds : [edi+8], 9
        jne public_6eefa29
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_6f86e40
        mov ebx, dword ptr ds : [esi+0xE0]
        cmp ebx, dword ptr ds : [esi+0xE4]
        mov dword ptr ss : [esp+0x68], 0
        je public_6eefa15
        lea ebp, ds:[esi+0x10]
        public_6eef9f8 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [ebp]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [esi+0xE4]
        add ebx, 4
        cmp ebx, eax
        jne public_6eef9f8
/*FIXUP public_6eefa15 : nop
        push offset public_6fb75e4 @0x6eefa15*/
  FIXUP public_6eefa15 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75e4
        push edi
        mov ecx, esi
        call public_6f4bf30
        mov al, 1
        jmp public_6ef00ad
        public_6eefa29 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 4
        jne public_6eefb23
        cmp dword ptr ds : [edi+8], 4
        jne public_6eefb23
        mov ebx, dword ptr ds : [edi+0xC]
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6eefb0f
        mov eax, dword ptr ds : [esi-0x1A8]
        mov ecx, dword ptr ds : [ebx]
        cmp ecx, dword ptr ds : [eax+0xC]
        jne public_6eefb0f
        mov ecx, dword ptr ds : [esi+0xE0]
        test ecx, ecx
        je public_6eefae2
        mov eax, dword ptr ds : [esi+0xE4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6eefae2
        mov eax, ecx
        mov ecx, dword ptr ds : [public_6fcf254]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6eefa96
        lea ecx, ds:[eax-0x10]
        jmp public_6eefa98
        public_6eefa96 : nop
        xor ecx, ecx
        public_6eefa98 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        test al, al
        je public_6eefb0f
        mov ebx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ds : [public_6fb3380]
/*FIXUP push offset public_6fb771c @0x6eefaaa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb771c
        push ebx
        call ebp
/*FIXUP push offset public_6fb75f4 @0x6eefab2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75f4
/*FIXUP push offset public_6fb7710 @0x6eefab7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7710
        push ebx
        call ebp
        mov ecx, dword ptr ds : [esi+0x90]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x14
        push ebx
        call dword ptr ds : [eax+4]
/*FIXUP push offset public_6fb75e4 @0x6eeface*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75e4
        push edi
        mov ecx, esi
        call public_6f4bf30
        mov al, 1
        jmp public_6ef00ad
        public_6eefae2 : nop
        mov ebx, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ds : [public_6fb3380]
/*FIXUP push offset public_6fb771c @0x6eefaeb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb771c
        push ebx
        call ebp
/*FIXUP push offset public_6fb75f4 @0x6eefaf3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75f4
/*FIXUP push offset public_6fb7710 @0x6eefaf8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7710
        push ebx
        call ebp
        mov ecx, dword ptr ds : [esi+0x90]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x14
        push ebx
        call dword ptr ds : [edx+4]
/*FIXUP public_6eefb0f : nop
        push offset public_6fb75e4 @0x6eefb0f*/
  FIXUP public_6eefb0f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75e4
        push edi
        mov ecx, esi
        call public_6f4bf30
        mov al, 1
        jmp public_6ef00ad
        public_6eefb23 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6ef00ab
/*FIXUP push offset public_6fb75e4 @0x6eefb32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb75e4
        push edi
        mov ecx, esi
        call public_6f4bf30
        mov al, 1
        jmp public_6ef00ad
        public_6eefb46 : nop
        jne public_6eefc60
        mov edi, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 4
        jge public_6eefc11
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        cmp eax, 1
        jne public_6eefc11
        lea ebp, ds:[esi-0x160]
        mov ecx, ebp
        call dword ptr ds : [public_6fb3068]
        xor eax, eax
        mov ecx, 6
        mov edi, ebp
        rep stosd
        lea ebx, ds:[esi-0x148]
        mov ecx, ebx
        call dword ptr ds : [public_6fb3068]
        xor eax, eax
        mov ecx, 6
        mov edi, ebx
        rep stosd
        mov eax, dword ptr ds : [esi+0x90]
        mov eax, dword ptr ds : [eax+0x80]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+8]
        movzx edx, byte ptr ds : [ecx+0x54]
        add edx, 0x32FA
        push edx
        mov ecx, ebp
        call dword ptr ds : [public_6fb303c]
        mov ecx, ebp
        call dword ptr ds : [public_6fb3038]
        mov eax, dword ptr ds : [esi+0x90]
        add eax, 0x24
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6fb3088]
        mov eax, dword ptr ds : [public_6fb311c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6fb3118]
        push 0
        push 1
        push 0x3F8CCCCD
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x78], 1
        call dword ptr ds : [public_6fb3114]
        mov al, 1
        jmp public_6ef00ad
        public_6eefc11 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 3
        jne public_6ef00ab
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [eax+0x10]
        cmp ebx, 0xFFFFFFFF
        je public_6eefc3b
        mov ecx, esi
        call dword ptr ds : [public_6fb3124]
        cmp eax, ebx
        jne public_6ef00ab
        public_6eefc3b : nop
        mov edx, dword ptr ds : [public_6fb311c]
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ef00ab
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6fb3120]
        mov al, 1
        jmp public_6ef00ad
        public_6eefc60 : nop
        cmp eax, 1
        jne public_6eefd66
        mov edi, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 4
        jge public_6ef00ab
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        cmp eax, 1
        jne public_6ef00ab
        lea edi, ds:[esi-0x1B0]
        mov ecx, edi
        call public_6ef0100
        lea ebx, ds:[edi+0x26C]
        mov ecx, ebx
        call public_6fa3db0
        test eax, eax
        je public_6eefd5f
        mov eax, dword ptr ds : [edi+0x270]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0x74], ecx
        lea esi, ds:[edi+0x27C]
        push edx
        mov ecx, esi
        call public_6eb5f30
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6eefd04
        lea eax, ss:[esp+0x74]
        push eax
        push ecx
        mov ecx, esi
        call public_6eb5770
        lea ecx, ss:[esp+0x74]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x74], 1
        call public_6eb5f30
        lea edx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        jmp public_6eefd13
        public_6eefd04 : nop
        lea ecx, ss:[esp+0x70]
        push ecx
        lea edx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x74], 0
        push edx
        public_6eefd13 : nop
        lea ecx, ss:[esp+0x24]
        call public_6fa6e80
        lea eax, ss:[esp+0x74]
        push eax
        mov ecx, ebx
        call public_6ef1ef0
        mov ecx, dword ptr ds : [public_6fd3bbc]
        push ecx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6fb3118]
        mov eax, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [edi+0x1C0]
        push eax
        lea ecx, ds:[edi+0x1C0]
        push 0x3C23D70A
        lea eax, ss:[esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0x74], 2
        call dword ptr ds : [edx+0xC]
        public_6eefd5f : nop
        mov al, 1
        jmp public_6ef00ad
        public_6eefd66 : nop
        cmp eax, 3
        jne public_6eefda3
        mov edi, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 4
        jge public_6ef00ab
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        cmp eax, 1
        jne public_6ef00ab
        mov edx, dword ptr ds : [esi-0x1B0]
        lea ecx, ds:[esi-0x1B0]
        call dword ptr ds : [edx+0x5C]
        mov al, 1
        jmp public_6ef00ad
        public_6eefda3 : nop
        cmp eax, 4
        jne public_6eefdea
        mov edi, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        cmp eax, 4
        jge public_6ef00ab
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 1
        jne public_6ef00ab
        mov edx, dword ptr ds : [esi+0x8C]
        mov eax, dword ptr ds : [esi-0x1B0]
        lea ecx, ds:[esi-0x1B0]
        push edx
        call dword ptr ds : [eax+0x8C]
        mov al, 1
        jmp public_6ef00ad
        public_6eefdea : nop
        cmp eax, 2
        jne public_6ef00ab
        mov edi, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax]
        cmp eax, 3
        mov ebp, dword ptr ds : [public_6fb3124]
        jne public_6eefeb8
        mov ecx, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [ecx+0x10]
        cmp ebx, 0xFFFFFFFF
        je public_6eefe23
        mov ecx, esi
        call ebp
        cmp eax, ebx
        jne public_6eefeb8
        public_6eefe23 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ebx+4]
        cmp dword ptr ds : [public_6fd3bb0], eax
        jne public_6eefeb8
        mov eax, dword ptr ds : [esi+0xE0]
        mov ecx, dword ptr ds : [esi+0xE4]
        cmp eax, ecx
        mov edx, dword ptr ds : [ebx+8]
        lea edi, ds:[esi+0xDC]
        je public_6eefe5b
        mov edi, edi
        public_6eefe50 : nop
        cmp dword ptr ds : [eax], edx
        je public_6eefeb4
        add eax, 4
        cmp eax, ecx
        jne public_6eefe50
        public_6eefe5b : nop
        mov edx, ecx
        public_6eefe5d : nop
        cmp edx, ecx
        je public_6eefe8f
        lea eax, ds:[edx+4]
        cmp eax, ecx
        je public_6eefe7c
        sub edx, eax
        lea ebx, ds:[ebx]
        public_6eefe70 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6eefe70
        public_6eefe7c : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        add eax, 0xFFFFFFFC
        push eax
        mov ecx, edi
        call public_6ea1490
        add dword ptr ds : [edi+8], 0xFFFFFFFC
        public_6eefe8f : nop
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov dword ptr ds : [esi+0x8C], ecx
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb3120]
        mov al, 1
        jmp public_6ef00ad
        public_6eefeb4 : nop
        mov edx, eax
        jmp public_6eefe5d
        public_6eefeb8 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        cmp eax, 3
        jne public_6ef00ab
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ds : [eax+0x10]
        cmp ebx, 0xFFFFFFFF
        je public_6eefede
        mov ecx, esi
        call ebp
        cmp eax, ebx
        jne public_6ef00ab
        public_6eefede : nop
        mov edi, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        cmp dword ptr ds : [public_6fd3bb4], eax
        jne public_6ef00ab
        mov eax, dword ptr ds : [esi+0xE0]
        mov ecx, dword ptr ds : [esi+0xE4]
        cmp eax, ecx
        mov edx, dword ptr ds : [edi+8]
        je public_6eeff12
        public_6eeff03 : nop
        cmp dword ptr ds : [eax], edx
        je public_6eeffa7
        add eax, 4
        cmp eax, ecx
        jne public_6eeff03
        public_6eeff12 : nop
        mov edx, ecx
        public_6eeff14 : nop
        cmp edx, ecx
        mov ebx, 0xFFFFFFFC
        je public_6eeff38
        lea eax, ds:[edx+4]
        cmp eax, ecx
        je public_6eeff32
        sub edx, eax
        public_6eeff26 : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebp
        add eax, 4
        cmp eax, ecx
        jne public_6eeff26
        public_6eeff32 : nop
        add dword ptr ds : [esi+0xE4], ebx
        public_6eeff38 : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [esi+0xE0]
        test ecx, ecx
        je public_6eeff60
        mov eax, dword ptr ds : [esi+0xE4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jne public_6ef00a3
        public_6eeff60 : nop
        mov ecx, dword ptr ds : [esi+0xD0]
        test ecx, ecx
        je public_6eeff7d
        mov eax, dword ptr ds : [esi+0xD4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jne public_6ef00a3
        public_6eeff7d : nop
        mov ecx, dword ptr ds : [esi+0xC0]
        test ecx, ecx
        je public_6eeff96
        mov eax, dword ptr ds : [esi+0xC4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        jne public_6eeffae
        public_6eeff96 : nop
        push 3
        mov ecx, esi
        call dword ptr ds : [public_6fb3120]
        mov al, 1
        jmp public_6ef00ad
        public_6eeffa7 : nop
        mov edx, eax
        jmp public_6eeff14
        public_6eeffae : nop
        mov ecx, dword ptr ds : [esi+0xC0]
        test ecx, ecx
        je public_6ef00a3
        mov eax, dword ptr ds : [esi+0xC4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6ef00a3
        mov eax, ecx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0xD0]
        mov ecx, dword ptr ds : [esi+0xD4]
        cmp eax, ecx
        lea edi, ds:[esi+0xCC]
        mov dword ptr ss : [esp+0x10], edx
        je public_6eefffb
        lea ecx, ds:[ecx]
        public_6eefff0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6eefffd
        add eax, 4
        cmp eax, ecx
        jne public_6eefff0
        public_6eefffb : nop
        mov eax, ecx
        public_6eefffd : nop
        cmp eax, ecx
        jne public_6ef002b
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, edi
        call public_6f937c0
        mov eax, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [edi+8]
        cmp eax, edi
        mov edx, dword ptr ss : [esp+0x10]
        je public_6ef002b
        mov edi, edi
        public_6ef0020 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef002b
        add eax, 4
        cmp eax, edi
        jne public_6ef0020
        public_6ef002b : nop
        mov eax, dword ptr ds : [esi+0xC0]
        mov ecx, dword ptr ds : [esi+0xC4]
        cmp eax, ecx
        je public_6ef004b
        nop 
        lea esp, ss:[esp]
        public_6ef0040 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ef00a7
        add eax, 4
        cmp eax, ecx
        jne public_6ef0040
        public_6ef004b : nop
        mov edx, ecx
        public_6ef004d : nop
        cmp edx, ecx
        je public_6ef0072
        lea eax, ds:[edx+4]
        cmp eax, ecx
        je public_6ef006c
        sub edx, eax
        lea ebx, ds:[ebx]
        public_6ef0060 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], edi
        add eax, 4
        cmp eax, ecx
        jne public_6ef0060
        public_6ef006c : nop
        add dword ptr ds : [esi+0xC4], ebx
        public_6ef0072 : nop
        mov ecx, dword ptr ds : [public_6fd3bbc]
        push ecx
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_6fb3118]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+0x10]
        push eax
        lea ecx, ds:[esi+0x10]
        push 0x3C23D70A
        lea eax, ss:[esp+0x4C]
        push eax
        mov dword ptr ss : [esp+0x74], 3
        call dword ptr ds : [edx+0xC]
        public_6ef00a3 : nop
        mov al, 1
        jmp public_6ef00ad
        public_6ef00a7 : nop
        mov edx, eax
        jmp public_6ef004d
        public_6ef00ab : nop
        xor al, al
        public_6ef00ad : nop
        mov ecx, dword ptr ss : [esp+0x60]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x5C
        ret 8
        UNREACHABLE_TRAP(0x6eef740)
    }
}

#undef public_6eef7a7
#undef public_6eef7d3
#undef public_6eef801
#undef public_6eef80b
#undef public_6eef824
#undef public_6eef82f
#undef public_6eef831
#undef public_6eef83d
#undef public_6eef870
#undef public_6eef877
#undef public_6eef895
#undef public_6eef8c3
#undef public_6eef8ed
#undef public_6eef8fa
#undef public_6eef901
#undef public_6eef920
#undef public_6eef936
#undef public_6eef94a
#undef public_6eef970
#undef public_6eef986
#undef public_6eef99a
#undef public_6eef9bf
#undef public_6eef9f8
#undef public_6eefa15
#undef public_6eefa29
#undef public_6eefa96
#undef public_6eefa98
#undef public_6eefae2
#undef public_6eefb0f
#undef public_6eefb23
#undef public_6eefb46
#undef public_6eefc11
#undef public_6eefc3b
#undef public_6eefc60
#undef public_6eefd04
#undef public_6eefd13
#undef public_6eefd5f
#undef public_6eefd66
#undef public_6eefda3
#undef public_6eefdea
#undef public_6eefe23
#undef public_6eefe50
#undef public_6eefe5b
#undef public_6eefe5d
#undef public_6eefe70
#undef public_6eefe7c
#undef public_6eefe8f
#undef public_6eefeb4
#undef public_6eefeb8
#undef public_6eefede
#undef public_6eeff03
#undef public_6eeff12
#undef public_6eeff14
#undef public_6eeff26
#undef public_6eeff32
#undef public_6eeff38
#undef public_6eeff60
#undef public_6eeff7d
#undef public_6eeff96
#undef public_6eeffa7
#undef public_6eeffae
#undef public_6eefff0
#undef public_6eefffb
#undef public_6eefffd
#undef public_6ef0020
#undef public_6ef002b
#undef public_6ef0040
#undef public_6ef004b
#undef public_6ef004d
#undef public_6ef0060
#undef public_6ef006c
#undef public_6ef0072
#undef public_6ef00a3
#undef public_6ef00a7
#undef public_6ef00ab
#undef public_6ef00ad
