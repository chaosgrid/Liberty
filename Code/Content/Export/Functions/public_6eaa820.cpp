#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7f60);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eaa820);
CLANG_FORWARD_PROC_SYMBOL(public_6eab000);
CLANG_FORWARD_PROC_SYMBOL(public_6ead190);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eadb20);
CLANG_FORWARD_PROC_SYMBOL(public_6eb04d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a00);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6f32920);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa9bc3);

#define public_6eaa8d0 _public_6eaa8d0
#define public_6eaa900 _public_6eaa900
#define public_6eaa93b _public_6eaa93b
#define public_6eaa948 _public_6eaa948
#define public_6eaa95d _public_6eaa95d
#define public_6eaa963 _public_6eaa963
#define public_6eaa96c _public_6eaa96c
#define public_6eaa972 _public_6eaa972
#define public_6eaa982 _public_6eaa982
#define public_6eaa9a3 _public_6eaa9a3
#define public_6eaa9c8 _public_6eaa9c8
#define public_6eaa9d9 _public_6eaa9d9
#define public_6eaab4c _public_6eaab4c
#define public_6eaab90 _public_6eaab90
#define public_6eaabbc _public_6eaabbc
#define public_6eaabda _public_6eaabda
#define public_6eaac16 _public_6eaac16
#define public_6eaac18 _public_6eaac18
#define public_6eaac91 _public_6eaac91
#define public_6eaaca3 _public_6eaaca3
#define public_6eaacb5 _public_6eaacb5
#define public_6eaacc7 _public_6eaacc7
#define public_6eaad03 _public_6eaad03
#define public_6eaad29 _public_6eaad29
#define public_6eaad30 _public_6eaad30
#define public_6eaad54 _public_6eaad54
#define public_6eaad61 _public_6eaad61
#define public_6eaad71 _public_6eaad71
#define public_6eaad94 _public_6eaad94
#define public_6eaadc0 _public_6eaadc0
#define public_6eaadd1 _public_6eaadd1
#define public_6eaade1 _public_6eaade1
#define public_6eaadf0 _public_6eaadf0
#define public_6eaae00 _public_6eaae00
#define public_6eaae20 _public_6eaae20
#define public_6eaae28 _public_6eaae28
#define public_6eaae39 _public_6eaae39
#define public_6eaae43 _public_6eaae43
#define public_6eaaeb8 _public_6eaaeb8
#define public_6eaaec9 _public_6eaaec9
#define public_6eaaee0 _public_6eaaee0
#define public_6eaaee2 _public_6eaaee2
#define public_6eaaf0b _public_6eaaf0b
#define public_6eaaf0d _public_6eaaf0d
#define public_6eaaf7d _public_6eaaf7d
#define public_6eaaf8e _public_6eaaf8e
#define public_6eaafa3 _public_6eaafa3
#define public_6eaafc2 _public_6eaafc2
#define public_6eaafe6 _public_6eaafe6

PROC_DECLARE(0x6eaa820, internal_6eaa820, public_6eaa820);
extern "C" NAKED register_t __cdecl internal_6eaa820()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa9bc3 @0x6eaa828*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa9bc3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x170C
        mov dword ptr fs : [0], esp
        call public_6fa9000
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x50]
        test eax, eax
        lea ecx, ds:[eax+1]
        mov dword ptr ds : [ebx+0x50], ecx
        jne public_6eaafe6
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x1B4]
        call dword ptr ds : [public_6fb300c]
        mov esi, dword ptr ss : [esp+0x172C]
        test esi, esi
        mov dword ptr ss : [esp+0x1724], 0
        jne public_6eaa96c
        mov edx, dword ptr ds : [ebx+0x48]
        lea eax, ss:[esp+0x1B4]
        push eax
/*FIXUP push offset public_6fb4470 @0x6eaa888*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4470
        mov dword ptr ss : [esp+0x18], edx
        call public_6f24280
        add esp, 8
        test al, al
        je public_6eaa95d
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0xE0]
        push 0x40
        push edx
        call dword ptr ds : [public_6fb35dc]
        add esp, 0xC
        lea ecx, ss:[esp+0x1B4]
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6eaa95d
        mov edi, edi
/*FIXUP public_6eaa8d0 : nop
        push offset public_6fb4468 @0x6eaa8d0*/
  FIXUP public_6eaa8d0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4468
        lea ecx, ss:[esp+0x1B8]
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6eaa948
        mov esi, dword ptr ds : [public_6fb3018]
        lea ecx, ss:[esp+0x1B4]
        call esi
        test al, al
        je public_6eaa948
        lea esp, ss:[esp]
        public_6eaa900 : nop
        mov ebp, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6eaa906*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        lea ecx, ss:[esp+0x1B8]
        call ebp
        test al, al
        je public_6eaa93b
        lea ecx, ss:[esp+0x1B4]
        call dword ptr ds : [public_6fb3054]
        push eax
        lea eax, ss:[esp+0xE0]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6eaa963
        public_6eaa93b : nop
        lea ecx, ss:[esp+0x1B4]
        call esi
        test al, al
        jne public_6eaa900
        public_6eaa948 : nop
        lea ecx, ss:[esp+0x1B4]
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6eaa8d0
        public_6eaa95d : nop
        mov ebp, dword ptr ds : [public_6fb3014]
        public_6eaa963 : nop
        lea esi, ss:[esp+0x1B4]
        jmp public_6eaa972
        public_6eaa96c : nop
        mov ebp, dword ptr ds : [public_6fb3014]
        public_6eaa972 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6eaade1
/*FIXUP public_6eaa982 : nop
        push offset public_6fb43d8 @0x6eaa982*/
  FIXUP public_6eaa982 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb43d8
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        mov ecx, esi
        je public_6eaa9d9
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6eaadd1
/*FIXUP public_6eaa9a3 : nop
        push offset public_6fb43e0 @0x6eaa9a3*/
  FIXUP public_6eaa9a3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb43e0
        mov ecx, esi
        call ebp
        test al, al
        je public_6eaa9c8
        mov edi, dword ptr ds : [public_6fb3020]
        push 0
        mov ecx, esi
        call edi
        push 1
        mov ecx, esi
        mov dword ptr ds : [ebx+0x68], eax
        call edi
        mov dword ptr ds : [ebx+0x6C], eax
        public_6eaa9c8 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6eaa9a3
        jmp public_6eaadd1
/*FIXUP public_6eaa9d9 : nop
        push offset public_6fb44c8 @0x6eaa9d9*/
  FIXUP public_6eaa9d9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44c8
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6eaab4c
        lea ecx, ss:[esp+0x48]
        call public_6f32920
        lea ecx, ss:[esp+0x22]
        push ecx
        lea ecx, ss:[esp+0x90]
        call public_6ead6a0
        lea edx, ss:[esp+0x1F]
        push edx
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0x1728], 1
        call public_6ead6a0
        lea eax, ss:[esp+0x23]
        push eax
        lea ecx, ss:[esp+0xB0]
        mov byte ptr ss : [esp+0x1728], 2
        call public_6ead6a0
        lea ecx, ss:[esp+0x21]
        push ecx
        lea ecx, ss:[esp+0xC0]
        mov byte ptr ss : [esp+0x1728], 3
        call public_6ead6a0
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0xD0]
        mov byte ptr ss : [esp+0x1728], 4
        call public_6ead6a0
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x1724], 5
        call dword ptr ds : [public_6fb3030]
        mov eax, dword ptr ds : [ebx+0x48]
        push eax
        push esi
        lea ecx, ss:[esp+0x50]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        call public_6ea7f60
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0x10
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x124]
        mov dword ptr ss : [esp+0x120], eax
        call public_6ead190
        lea edx, ss:[esp+0x11C]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ds:[ebx+0x84]
        mov byte ptr ss : [esp+0x172C], 6
        call public_6eadb20
        lea ecx, ss:[esp+0x120]
        mov byte ptr ss : [esp+0x1724], 5
        call public_6eab000
        lea ecx, ss:[esp+0xCC]
        mov byte ptr ss : [esp+0x1724], 0xA
        call public_6eec8d0
        lea ecx, ss:[esp+0xBC]
        mov byte ptr ss : [esp+0x1724], 9
        call public_6eec8d0
        lea ecx, ss:[esp+0xAC]
        mov byte ptr ss : [esp+0x1724], 8
        call public_6eec8d0
        lea ecx, ss:[esp+0x9C]
        mov byte ptr ss : [esp+0x1724], 7
        call public_6eec8d0
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0x1724], 0
        call public_6eec8d0
        jmp public_6eaadd1
/*FIXUP public_6eaab4c : nop
        push offset public_6fb44c0 @0x6eaab4c*/
  FIXUP public_6eaab4c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44c0
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6eaadc0
        xor edi, edi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x2C], edi
        call public_6f1d4c0
        mov ecx, esi
        mov byte ptr ss : [esp+0x1724], 0xB
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6eaad71
        lea esp, ss:[esp]
/*FIXUP public_6eaab90 : nop
        push offset public_6fb445c @0x6eaab90*/
  FIXUP public_6eaab90 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call ebp
        test al, al
        mov ecx, esi
        je public_6eaabbc
        call dword ptr ds : [public_6fb3054]
        mov ecx, dword ptr ds : [ebx+0x48]
        push eax
        push ecx
        call dword ptr ds : [public_6fb35f0]
        add esp, 8
        mov dword ptr ss : [esp+0x28], eax
        jmp public_6eaad61
/*FIXUP public_6eaabbc : nop
        push offset public_6fb44ac @0x6eaabbc*/
  FIXUP public_6eaabbc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44ac
        call ebp
        test al, al
        mov ecx, esi
        je public_6eaabda
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_6eaad61
/*FIXUP public_6eaabda : nop
        push offset public_6fb44a4 @0x6eaabda*/
  FIXUP public_6eaabda : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb44a4
        call ebp
        test al, al
        je public_6eaad61
        push 0x78
        call public_6fa912a
        xor ecx, ecx
        add esp, 4
        cmp eax, ecx
        je public_6eaac16
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+0x10], ecx
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [eax+0x54], ecx
        mov byte ptr ds : [eax+0x58], cl
        mov dword ptr ds : [eax], offset public_6fb4498
        mov edi, eax
        jmp public_6eaac18
        public_6eaac16 : nop
        xor edi, edi
        public_6eaac18 : nop
        mov ebp, dword ptr ds : [public_6fb3048]
        push ecx
        mov ecx, esi
        call ebp
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ds:[ebx+0x84]
        call public_6f7b0f0
        mov eax, dword ptr ds : [ebx+0x88]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_6eaad54
        add ecx, 0x10
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[edi+0xC]
        push ecx
        push 1
        mov ecx, esi
        call ebp
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        push edx
        call dword ptr ds : [public_6fb3688]
        add esp, 0xC
        test eax, eax
        jne public_6eaad54
        push 2
        mov ecx, esi
        call ebp
        test eax, eax
        jne public_6eaac91
        mov dword ptr ds : [edi+0x10], eax
        mov byte ptr ds : [edi+0x14], al
        jmp public_6eaaca3
        public_6eaac91 : nop
        push eax
        lea eax, ds:[edi+0x14]
        push 0x40
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi+0x10], eax
        public_6eaaca3 : nop
        push 3
        mov ecx, esi
        call ebp
        test eax, eax
        jne public_6eaacb5
        mov dword ptr ds : [edi+0x54], eax
        mov byte ptr ds : [edi+0x58], al
        jmp public_6eaacc7
        public_6eaacb5 : nop
        push eax
        lea ecx, ds:[edi+0x58]
        push 0x20
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ds : [edi+0x54], eax
        public_6eaacc7 : nop
        lea ebp, ds:[edi+0x58]
        push ebp
/*FIXUP push offset public_6fb7d98 @0x6eaaccb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d98
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6eaad03
        push ebp
/*FIXUP push offset public_6fb7da0 @0x6eaacde*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7da0
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        je public_6eaad03
        push ebp
/*FIXUP push offset public_6fb7dac @0x6eaacf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7dac
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6eaad30
        public_6eaad03 : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [ebp+0x48]
        test eax, eax
        je public_6eaad29
        mov ecx, dword ptr ss : [ebp+0x4C]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        jne public_6eaad30
        public_6eaad29 : nop
        add ebp, 0x54
        mov dword ptr ss : [esp+0x10], ebp
        public_6eaad30 : nop
        mov edx, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x1C], edi
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6eaad54 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [public_6fb3014]
        public_6eaad61 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6eaab90
        public_6eaad71 : nop
        test dword ptr ss : [esp+0x28], 0x3FFFFFFF
        je public_6eaad94
        mov eax, dword ptr ds : [ebx+0xAC]
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ds:[ebx+0xA4]
        push 1
        push eax
        call public_6eb04d0
        public_6eaad94 : nop
        lea eax, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x1724], 0xC
        call public_6ed2a00
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x1724], 0
        call public_6f15350
        jmp public_6eaadd1
/*FIXUP public_6eaadc0 : nop
        push offset public_6fb4490 @0x6eaadc0*/
  FIXUP public_6eaadc0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4490
        mov ecx, esi
        call dword ptr ds : [public_6fb301c]
        test al, al
        jne public_6eaade1
        public_6eaadd1 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6eaa982
        public_6eaade1 : nop
        mov edi, dword ptr ds : [ebx+0x5C]
        cmp edi, dword ptr ds : [ebx+0x60]
        je public_6eaae43
        lea esp, ss:[esp]
        public_6eaadf0 : nop
        mov esi, dword ptr ds : [edi+8]
        cmp esi, dword ptr ds : [edi+0xC]
        je public_6eaae39
        lea ebp, ds:[ebx+0x84]
        mov edi, edi
        public_6eaae00 : nop
        push esi
        mov ecx, ebp
        call public_6fa7200
        mov ecx, dword ptr ss : [ebp+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6eaae20
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6eaae20
        lea eax, ss:[esp+0x18]
        jmp public_6eaae28
        public_6eaae20 : nop
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x14]
        public_6eaae28 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x4C], ecx
        mov eax, dword ptr ds : [edi+0xC]
        add esi, 4
        cmp esi, eax
        jne public_6eaae00
        public_6eaae39 : nop
        mov eax, dword ptr ds : [ebx+0x60]
        add edi, 0x28
        cmp edi, eax
        jne public_6eaadf0
        public_6eaae43 : nop
        mov ebx, 0xD
        lea edx, ss:[esp+0x15DC]
        mov dword ptr ss : [esp+0x1724], ebx
        mov dword ptr ss : [esp+0x3C], edx
        mov eax, dword ptr ds : [public_6fb3304]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea ecx, ss:[esp+0x15E4]
        mov byte ptr ss : [esp+0x172C], 0xE
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x15EC], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_6fb32ac]
        mov esi, dword ptr ds : [public_6fb32a8]
        je public_6eaaee0
        mov eax, dword ptr ss : [esp+0x15F0]
        xor edi, edi
        cmp eax, edi
        je public_6eaaec9
        mov eax, dword ptr ss : [esp+0x15F4]
        cmp eax, edi
        je public_6eaaeb8
        push eax
        call ebp
        mov dword ptr ss : [esp+0x15F4], edi
        mov dword ptr ss : [esp+0x15F8], edi
        public_6eaaeb8 : nop
        mov edx, dword ptr ss : [esp+0x15F0]
        push edx
        call esi
        mov dword ptr ss : [esp+0x15F0], edi
        public_6eaaec9 : nop
        mov eax, dword ptr ss : [esp+0x15EC]
        push eax
        call esi
        mov dword ptr ss : [esp+0x15EC], 0xFFFFFFFF
        jmp public_6eaaee2
        public_6eaaee0 : nop
        xor edi, edi
        public_6eaaee2 : nop
        mov eax, dword ptr ss : [esp+0x15F4]
        cmp eax, edi
        mov edi, dword ptr ds : [public_6fb3390]
        je public_6eaaf0b
        push eax
        call edi
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x15F4], eax
        mov dword ptr ss : [esp+0x15F8], eax
        jmp public_6eaaf0d
        public_6eaaf0b : nop
        xor eax, eax
        public_6eaaf0d : nop
        push 1
        lea ecx, ss:[esp+0x15E0]
        mov dword ptr ss : [esp+0x1600], eax
        mov byte ptr ss : [esp+0x1728], bl
        call dword ptr ds : [public_6fb32f8]
        mov ecx, dword ptr ds : [public_6fb3304]
        mov edx, dword ptr ds : [ecx]
        push edx
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x1BC]
        mov dword ptr ss : [esp+0x172C], 0xF
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x1C4], 0xFFFFFFFF
        je public_6eaafa3
        cmp dword ptr ss : [esp+0x1C8], ebx
        je public_6eaaf8e
        mov eax, dword ptr ss : [esp+0x1CC]
        cmp eax, ebx
        je public_6eaaf7d
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1CC], ebx
        mov dword ptr ss : [esp+0x1D0], ebx
        public_6eaaf7d : nop
        mov eax, dword ptr ss : [esp+0x1C8]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1C8], ebx
        public_6eaaf8e : nop
        mov ecx, dword ptr ss : [esp+0x1C4]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1C4], 0xFFFFFFFF
        public_6eaafa3 : nop
        mov eax, dword ptr ss : [esp+0x1CC]
        cmp eax, ebx
        je public_6eaafc2
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1CC], ebx
        mov dword ptr ss : [esp+0x1D0], ebx
        public_6eaafc2 : nop
        push 1
        lea ecx, ss:[esp+0x1B8]
        mov dword ptr ss : [esp+0x1D8], ebx
        mov dword ptr ss : [esp+0x1728], 0xFFFFFFFF
        call dword ptr ds : [public_6fb32f8]
        pop edi
        pop esi
        pop ebp
        public_6eaafe6 : nop
        mov ecx, dword ptr ss : [esp+0x1710]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1718
        ret 4
        UNREACHABLE_TRAP(0x6eaa820)
    }
}

#undef public_6eaa8d0
#undef public_6eaa900
#undef public_6eaa93b
#undef public_6eaa948
#undef public_6eaa95d
#undef public_6eaa963
#undef public_6eaa96c
#undef public_6eaa972
#undef public_6eaa982
#undef public_6eaa9a3
#undef public_6eaa9c8
#undef public_6eaa9d9
#undef public_6eaab4c
#undef public_6eaab90
#undef public_6eaabbc
#undef public_6eaabda
#undef public_6eaac16
#undef public_6eaac18
#undef public_6eaac91
#undef public_6eaaca3
#undef public_6eaacb5
#undef public_6eaacc7
#undef public_6eaad03
#undef public_6eaad29
#undef public_6eaad30
#undef public_6eaad54
#undef public_6eaad61
#undef public_6eaad71
#undef public_6eaad94
#undef public_6eaadc0
#undef public_6eaadd1
#undef public_6eaade1
#undef public_6eaadf0
#undef public_6eaae00
#undef public_6eaae20
#undef public_6eaae28
#undef public_6eaae39
#undef public_6eaae43
#undef public_6eaaeb8
#undef public_6eaaec9
#undef public_6eaaee0
#undef public_6eaaee2
#undef public_6eaaf0b
#undef public_6eaaf0d
#undef public_6eaaf7d
#undef public_6eaaf8e
#undef public_6eaafa3
#undef public_6eaafc2
#undef public_6eaafe6
