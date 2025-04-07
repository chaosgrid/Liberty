#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb44c0);
CLANG_FORWARD_PROC_SYMBOL(public_6efccf0);
CLANG_FORWARD_PROC_SYMBOL(public_6efe300);
CLANG_FORWARD_PROC_SYMBOL(public_6f02330);
CLANG_FORWARD_PROC_SYMBOL(public_6f04cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f050e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6f32510);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d400);
CLANG_FORWARD_PROC_SYMBOL(public_6f49c50);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f870);
CLANG_FORWARD_PROC_SYMBOL(public_6f503d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50880);
CLANG_FORWARD_PROC_SYMBOL(public_6f58190);
CLANG_FORWARD_PROC_SYMBOL(public_6f584d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f67840);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac9df);

#define public_6efe430 _public_6efe430
#define public_6efe450 _public_6efe450
#define public_6efe45e _public_6efe45e
#define public_6efe662 _public_6efe662
#define public_6efe6ab _public_6efe6ab
#define public_6efe6e2 _public_6efe6e2
#define public_6efe6f7 _public_6efe6f7
#define public_6efe70c _public_6efe70c
#define public_6efe72f _public_6efe72f
#define public_6efe754 _public_6efe754
#define public_6efe75d _public_6efe75d
#define public_6efe798 _public_6efe798
#define public_6efe7ce _public_6efe7ce
#define public_6efe7d1 _public_6efe7d1
#define public_6efe7f5 _public_6efe7f5
#define public_6efe804 _public_6efe804
#define public_6efe813 _public_6efe813
#define public_6efe82d _public_6efe82d
#define public_6efe84c _public_6efe84c
#define public_6efe855 _public_6efe855

PROC_DECLARE(0x6efe300, internal_6efe300, public_6efe300);
extern "C" NAKED register_t __cdecl internal_6efe300()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fac9df @0x6efe308*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac9df
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x156C
        mov dword ptr fs : [0], esp
        call public_6fa9000
        push ebx
        push esi
        push edi
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_6fb300c]
        lea eax, ss:[esp+0x10]
        push eax
        xor ebx, ebx
/*FIXUP push offset public_6fb7d44 @0x6efe333*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d44
        mov dword ptr ss : [esp+0x1588], ebx
        call public_6f24280
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6f67840
        mov edi, dword ptr ds : [public_6fb3028]
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call edi
        lea edx, ss:[esp+0x10]
        push edx
        call public_6fa6760
        mov esi, dword ptr ds : [public_6fb3008]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        call esi
        lea eax, ss:[esp+0x10]
        push eax
/*FIXUP push offset public_6fb7d24 @0x6efe37b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d24
        call public_6f24280
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6f67840
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call edi
        lea edx, ss:[esp+0x10]
        push edx
        call public_6fa6760
        add esp, 4
        lea ecx, ss:[esp+0x10]
        call esi
        lea eax, ss:[esp+0x10]
        push eax
/*FIXUP push offset public_6fb7d04 @0x6efe3b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7d04
        call public_6f24280
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6f67840
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call edi
        lea edx, ss:[esp+0x10]
        push edx
        call public_6fa6760
        add esp, 4
        lea ecx, ss:[esp+0x10]
        call esi
/*FIXUP push offset public_6fb7cec @0x6efe3e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7cec
        call public_6f50880
        lea eax, ss:[esp+0x14]
        push eax
/*FIXUP push offset public_6fb7ccc @0x6efe3ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7ccc
        call public_6f24280
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_6fa6760
        add esp, 0x10
        lea ecx, ss:[esp+0x10]
        call esi
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_6fb7cb4 @0x6efe411*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7cb4
        call public_6f24280
        add esp, 8
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6efe45e
        lea esp, ss:[esp]
/*FIXUP public_6efe430 : nop
        push offset public_6fb7ca8 @0x6efe430*/
  FIXUP public_6efe430 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7ca8
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6efe450
        lea eax, ss:[esp+0x10]
        push eax
        call public_6efccf0
        add esp, 4
        public_6efe450 : nop
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6efe430
        public_6efe45e : nop
        lea ecx, ss:[esp+0x10]
        call esi
        lea ecx, ss:[esp+0x10]
        push ecx
/*FIXUP push offset public_6fb7c88 @0x6efe469*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7c88
        call public_6f24280
        lea edx, ss:[esp+0x18]
        push edx
        call public_6f3d400
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call esi
        lea eax, ss:[esp+0x10]
        push eax
/*FIXUP push offset public_6fb7c6c @0x6efe48b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7c6c
        call public_6f24280
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6f3d400
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call esi
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_6fb7c54 @0x6efe4ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7c54
        call public_6f24280
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_6fd0830 @0x6efe4bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0830
        push eax
        call public_6f32510
        add esp, 0x10
        lea ecx, ss:[esp+0x10]
        call esi
        lea ecx, ss:[esp+0x10]
        push ecx
/*FIXUP push offset public_6fb7c38 @0x6efe4d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7c38
        call public_6f24280
        lea edx, ss:[esp+0x18]
/*FIXUP push offset public_6fd0830 @0x6efe4e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0830
        push edx
        call public_6f32510
        add esp, 0x10
        lea ecx, ss:[esp+0x10]
        call esi
        lea eax, ss:[esp+0x10]
        push eax
/*FIXUP push offset public_6fb7c1c @0x6efe4fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7c1c
        call public_6f24280
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6f4f870
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call esi
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_6fb7bf4 @0x6efe51d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7bf4
        call public_6f24280
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f503d0
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call esi
        lea ecx, ss:[esp+0x10]
        push ecx
/*FIXUP push offset public_6fb7bd8 @0x6efe53f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7bd8
        call public_6f24280
        lea edx, ss:[esp+0x18]
        push edx
        call public_6f58190
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call esi
        lea eax, ss:[esp+0x10]
        push eax
/*FIXUP push offset public_6fb7bc4 @0x6efe561*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7bc4
        call public_6f24280
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6f584d0
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call esi
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_6fb7bac @0x6efe583*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7bac
        call public_6f24280
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f04cb0
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call edi
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_6f050e0
        add esp, 4
        lea ecx, ss:[esp+0x10]
        call esi
/*FIXUP push offset public_6fb7b94 @0x6efe5b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7b94
        call public_6f02330
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_6fb7b80 @0x6efe5c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7b80
        call public_6f24280
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6f49c50
        add esp, 0x10
        lea ecx, ss:[esp+0x10]
        call esi
        lea ecx, ss:[esp+0x10]
        push ecx
/*FIXUP push offset public_6fb7b68 @0x6efe5e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7b68
        call public_6f24280
        lea edx, ss:[esp+0x18]
        push edx
        call public_6f4a9f0
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call esi
        lea eax, ss:[esp+0x10]
        push eax
/*FIXUP push offset public_6fb7b54 @0x6efe606*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7b54
        call public_6f24280
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6eb44c0
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call esi
        lea edx, ss:[esp+0x1438]
        mov dword ptr ss : [esp+0x1580], 1
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [public_6fb3304]
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1438]
        mov byte ptr ss : [esp+0x1580], 2
        call dword ptr ds : [public_6fb32e8]
        mov eax, dword ptr ss : [esp+0x1440]
        cmp eax, esi
        jae public_6efe662
        mov esi, eax
        public_6efe662 : nop
        cmp esi, ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3388]
        jbe public_6efe6ab
        mov ecx, dword ptr ss : [esp+0x1440]
        sub eax, esi
        push eax
        lea edx, ds:[ecx+esi]
        push edx
        push ecx
        call ebp
        mov edi, dword ptr ss : [esp+0x1450]
        add esp, 0xC
        push ebx
        sub edi, esi
        push edi
        lea ecx, ss:[esp+0x1444]
        call dword ptr ds : [public_6fb3300]
        test al, al
        je public_6efe6ab
        push edi
        lea ecx, ss:[esp+0x1440]
        call dword ptr ds : [public_6fb32ec]
        public_6efe6ab : nop
        mov eax, dword ptr ss : [esp+0x144C]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_6efe70c
        cmp dword ptr ss : [esp+0x1450], ebx
        je public_6efe6f7
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        je public_6efe6e2
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_6efe6e2 : nop
        mov ecx, dword ptr ss : [esp+0x1450]
        push ecx
        call dword ptr ds : [public_6fb32a8]
        mov dword ptr ss : [esp+0x1450], ebx
        public_6efe6f7 : nop
        mov edx, dword ptr ss : [esp+0x144C]
        push edx
        call dword ptr ds : [public_6fb32a8]
        mov dword ptr ss : [esp+0x144C], edi
        public_6efe70c : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        je public_6efe72f
        push eax
        call dword ptr ds : [public_6fb3390]
        add esp, 4
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_6efe72f : nop
        mov eax, dword ptr ss : [esp+0x1440]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x145C], ebx
        je public_6efe75d
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6efe754
        cmp cl, 0xFF
        je public_6efe754
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6efe75d
        public_6efe754 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6efe75d : nop
        mov dword ptr ss : [esp+0x1440], ebx
        mov dword ptr ss : [esp+0x1444], ebx
        mov dword ptr ss : [esp+0x1448], ebx
        mov eax, dword ptr ds : [public_6fb3304]
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x1584], 3
        call dword ptr ds : [public_6fb32e8]
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, esi
        jae public_6efe798
        mov esi, eax
        public_6efe798 : nop
        cmp esi, ebx
        jbe public_6efe7d1
        sub eax, esi
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[eax+esi]
        push ecx
        push eax
        call ebp
        mov edi, dword ptr ss : [esp+0x28]
        add esp, 0xC
        push ebx
        sub edi, esi
        push edi
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6fb3300]
        test al, al
        je public_6efe7ce
        push edi
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6fb32ec]
        public_6efe7ce : nop
        or edi, 0xFFFFFFFF
        public_6efe7d1 : nop
        cmp dword ptr ss : [esp+0x24], edi
        pop ebp
        je public_6efe813
        cmp dword ptr ss : [esp+0x24], ebx
        je public_6efe804
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_6efe7f5
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        public_6efe7f5 : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call dword ptr ds : [public_6fb32a8]
        mov dword ptr ss : [esp+0x24], ebx
        public_6efe804 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [public_6fb32a8]
        mov dword ptr ss : [esp+0x20], edi
        public_6efe813 : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_6efe82d
        push eax
        call dword ptr ds : [public_6fb3390]
        add esp, 4
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        public_6efe82d : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x30], ebx
        je public_6efe855
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6efe84c
        cmp cl, 0xFF
        je public_6efe84c
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6efe855
        public_6efe84c : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6efe855 : nop
        mov ecx, dword ptr ss : [esp+0x1578]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1578
        ret 
        UNREACHABLE_TRAP(0x6efe300)
    }
}

#undef public_6efe430
#undef public_6efe450
#undef public_6efe45e
#undef public_6efe662
#undef public_6efe6ab
#undef public_6efe6e2
#undef public_6efe6f7
#undef public_6efe70c
#undef public_6efe72f
#undef public_6efe754
#undef public_6efe75d
#undef public_6efe798
#undef public_6efe7ce
#undef public_6efe7d1
#undef public_6efe7f5
#undef public_6efe804
#undef public_6efe813
#undef public_6efe82d
#undef public_6efe84c
#undef public_6efe855
