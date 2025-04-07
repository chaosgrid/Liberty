#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_4be370);
CLANG_FORWARD_PROC_SYMBOL(public_57b0e0);
CLANG_FORWARD_PROC_SYMBOL(public_58ceb0);
CLANG_FORWARD_PROC_SYMBOL(public_58cfb0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9b0);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_58e60a _public_58e60a
#define public_58e659 _public_58e659
#define public_58e688 _public_58e688
#define public_58e6d8 _public_58e6d8
#define public_58e785 _public_58e785
#define public_58e790 _public_58e790
#define public_58e7a0 _public_58e7a0
#define public_58e7ac _public_58e7ac
#define public_58e7b2 _public_58e7b2
#define public_58e7d4 _public_58e7d4
#define public_58e7e7 _public_58e7e7
#define public_58e7ed _public_58e7ed
#define public_58e803 _public_58e803
#define public_58e80e _public_58e80e
#define public_58e817 _public_58e817
#define public_58e823 _public_58e823
#define public_58e827 _public_58e827
#define public_58e849 _public_58e849
#define public_58e85c _public_58e85c
#define public_58e862 _public_58e862
#define public_58e88c _public_58e88c
#define public_58e89a _public_58e89a
#define public_58e8a5 _public_58e8a5
#define public_58e8b8 _public_58e8b8
#define public_58e8c0 _public_58e8c0
#define public_58e8c6 _public_58e8c6
#define public_58e8fa _public_58e8fa
#define public_58e8fc _public_58e8fc
#define public_58e90a _public_58e90a
#define public_58e984 _public_58e984
#define public_58e99a _public_58e99a
#define public_58e9a5 _public_58e9a5
#define public_58e9fe _public_58e9fe
#define public_58ea64 _public_58ea64
#define public_58ea7a _public_58ea7a
#define public_58ea85 _public_58ea85
#define public_58eadd _public_58eadd
#define public_58eb17 _public_58eb17
#define public_58eb25 _public_58eb25

PROC_DECLARE(0x58e5a0, internal_58e5a0, public_58e5a0);
extern "C" NAKED register_t __cdecl internal_58e5a0()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        push esi
        mov esi, ecx
        call public_57b0e0
        call public_59d9b0
        xor ebx, ebx
        cmp eax, esi
        jne public_58e688
        cmp byte ptr ds : [esi+0x541], bl
        je public_58e688
        lea eax, ss:[esp+0x1C]
        push eax
        call public_59da70
        fld dword ptr ds : [esi+0x68]
        fdiv dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [public_67d95c]
        add esp, 4
        cmp eax, ebx
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x24]
        jne public_58e60a
        call public_5b73e0
        mov dword ptr ds : [public_67d95c], eax
        public_58e60a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ds:[esi+0x504]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        cmp byte ptr ds : [esi+0x542], bl
        push ecx
        je public_58e659
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi+0x544]
        fadd dword ptr ds : [esi+0x548]
        mov ecx, esi
        fstp dword ptr ss : [esp]
        push eax
        call public_58ceb0
        push ebx
/*FIXUP push offset public_5e5234 @0x58e646*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5234
        call public_41dde0
        add esp, 8
        pop esi
        pop ebx
        add esp, 0x2C
        ret 
        public_58e659 : nop
        fld dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [esi+0x544]
        fadd dword ptr ds : [esi+0x548]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, esi
        call public_58cfb0
        push ebx
/*FIXUP push offset public_5c95fc @0x58e675*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        call public_41dde0
        add esp, 8
        pop esi
        pop ebx
        add esp, 0x2C
        ret 
        public_58e688 : nop
        call public_59d9b0
        test eax, eax
        jne public_58eb25
        lea edx, ss:[esp+0x28]
        push edx
        call public_59da70
        fld dword ptr ds : [esi+0x68]
        fdiv dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [public_67d95c]
        add esp, 4
        cmp eax, ebx
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x30]
        jne public_58e6d8
        call public_5b73e0
        mov dword ptr ds : [public_67d95c], eax
        public_58e6d8 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ds:[esi+0x504]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x4E0], eax
        mov dword ptr ds : [esi+0x4E4], eax
        mov byte ptr ds : [esi+0x4E8], bl
        fnstsw ax
        mov byte ptr ds : [esi+0x540], bl
        mov byte ptr ds : [esi+0x541], bl
        test ah, 1
        jne public_58eb25
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [esi+0x488]
        fnstsw ax
        test ah, 5
        jp public_58eb25
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_58eb25
        fld dword ptr ds : [esi+0x48C]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_58eb25
        push edi
        mov edi, dword ptr ds : [esi+0x4B4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, edi
        cmp eax, ebx
        jne public_58e785
        xor ecx, ecx
        jmp public_58e790
        public_58e785 : nop
        mov ecx, dword ptr ds : [esi+0x4B8]
        sub ecx, eax
        sar ecx, 2
        public_58e790 : nop
        xor edx, edx
        cmp ecx, ebx
        push ebp
        jbe public_58e7ed
        lea ebp, ds:[edi+4]
        lea ebx, ds:[ebx]
        public_58e7a0 : nop
        lea edi, ds:[edx+1]
        cmp edi, ecx
        jae public_58e7ac
        mov eax, dword ptr ss : [ebp]
        jmp public_58e7b2
        public_58e7ac : nop
        mov eax, dword ptr ds : [esi+0x488]
        public_58e7b2 : nop
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], eax
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        jne public_58e7d4
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jnp public_58e7e7
        public_58e7d4 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, edi
        add ebp, 4
        cmp edx, ecx
        jb public_58e7a0
        jmp public_58e7ed
        public_58e7e7 : nop
        mov dword ptr ds : [esi+0x4E0], edx
        public_58e7ed : nop
        mov edi, dword ptr ds : [esi+0x4A4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, edi
        cmp eax, ebx
        jne public_58e803
        xor ecx, ecx
        jmp public_58e80e
        public_58e803 : nop
        mov ecx, dword ptr ds : [esi+0x4A8]
        sub ecx, eax
        sar ecx, 2
        public_58e80e : nop
        xor edx, edx
        cmp ecx, ebx
        jbe public_58e862
        lea ebp, ds:[edi+4]
        public_58e817 : nop
        lea edi, ds:[edx+1]
        cmp edi, ecx
        jae public_58e823
        mov eax, dword ptr ss : [ebp]
        jmp public_58e827
        public_58e823 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_58e827 : nop
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], eax
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jp public_58e849
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        je public_58e85c
        public_58e849 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, edi
        add ebp, 4
        cmp edx, ecx
        jb public_58e817
        jmp public_58e862
        public_58e85c : nop
        mov dword ptr ds : [esi+0x4E4], edx
        public_58e862 : nop
        cmp byte ptr ds : [esi+0x470], bl
        pop ebp
        je public_58e90a
        mov eax, dword ptr ds : [esi+0x55C]
        dec eax
        je public_58e8c0
        dec eax
        je public_58e8b8
        dec eax
        je public_58e88c
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xB8]
        mov ecx, eax
        jmp public_58e8fc
        public_58e88c : nop
        mov ecx, dword ptr ds : [esi+0x4B4]
        cmp ecx, ebx
        jne public_58e89a
        xor eax, eax
        jmp public_58e8a5
        public_58e89a : nop
        mov eax, dword ptr ds : [esi+0x4B8]
        sub eax, ecx
        sar eax, 2
        public_58e8a5 : nop
        mov ecx, dword ptr ds : [esi+0x4E4]
        mov edi, dword ptr ds : [esi+0x4E0]
        imul ecx, eax
        add ecx, edi
        jmp public_58e8c6
        public_58e8b8 : nop
        mov ecx, dword ptr ds : [esi+0x4E4]
        jmp public_58e8c6
        public_58e8c0 : nop
        mov ecx, dword ptr ds : [esi+0x4E0]
        public_58e8c6 : nop
        mov eax, dword ptr ds : [esi+0x564]
        cmp eax, ebx
        je public_58e8fa
        mov edx, dword ptr ds : [esi+0x568]
        sub edx, eax
        mov eax, 0x51EB851F
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        jae public_58e8fa
        mov eax, dword ptr ds : [esi+0x564]
        imul ecx, 0x64
        add ecx, eax
        jmp public_58e8fc
        public_58e8fa : nop
        xor ecx, ecx
        public_58e8fc : nop
        cmp dword ptr ds : [ecx+4], ebx
        je public_58e90a
        push ecx
        call public_4be370
        add esp, 4
        public_58e90a : nop
        cmp byte ptr ds : [esi+0x500], bl
        pop edi
        je public_58e9fe
        mov ecx, dword ptr ds : [esi+0x4E4]
        cmp ecx, dword ptr ds : [esi+0x558]
        jb public_58e9fe
        mov edx, dword ptr ds : [esi+0x4E0]
        cmp edx, ebx
        jbe public_58e984
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+8]
        fcomp dword ptr ds : [esi+0x4FC]
        fnstsw ax
        test ah, 5
        jp public_58e984
        push ebx
/*FIXUP push offset public_5e5234 @0x58e949*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5234
        call public_41dde0
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi+0x4E0]
        mov al, 1
        add esp, 8
        fstp dword ptr ds : [esi+0x548]
        mov byte ptr ds : [esi+0x540], al
        mov dword ptr ds : [esi+0x544], edx
        mov byte ptr ds : [esi+0x542], al
        pop esi
        pop ebx
        add esp, 0x2C
        ret 
        public_58e984 : nop
        cmp byte ptr ds : [esi+0x540], bl
        jne public_58e9fe
        mov ecx, dword ptr ds : [esi+0x4B4]
        cmp ecx, ebx
        jne public_58e99a
        xor eax, eax
        jmp public_58e9a5
        public_58e99a : nop
        mov eax, dword ptr ds : [esi+0x4B8]
        sub eax, ecx
        sar eax, 2
        public_58e9a5 : nop
        add eax, 0xFFFFFFFE
        cmp edx, eax
        jae public_58e9fe
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x1C]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [esi+0x4FC]
        fnstsw ax
        test ah, 5
        jp public_58e9fe
        push ebx
/*FIXUP push offset public_5e5234 @0x58e9c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5234
        call public_41dde0
        mov ecx, dword ptr ds : [esi+0x4E0]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 8
        mov al, 1
        inc ecx
        mov byte ptr ds : [esi+0x540], al
        mov dword ptr ds : [esi+0x544], ecx
        mov dword ptr ds : [esi+0x548], edx
        mov byte ptr ds : [esi+0x542], al
        pop esi
        pop ebx
        add esp, 0x2C
        ret 
        public_58e9fe : nop
        cmp byte ptr ds : [esi+0x501], bl
        je public_58eadd
        mov edx, dword ptr ds : [esi+0x4E4]
        cmp edx, ebx
        jbe public_58ea64
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x20]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [esi+0x4FC]
        fnstsw ax
        test ah, 5
        jp public_58ea64
        push ebx
/*FIXUP push offset public_5e5234 @0x58ea2e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5234
        call public_41dde0
        mov eax, dword ptr ds : [esi+0x4E4]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 8
        mov byte ptr ds : [esi+0x542], bl
        mov byte ptr ds : [esi+0x540], 1
        mov dword ptr ds : [esi+0x544], eax
        mov dword ptr ds : [esi+0x548], ecx
        pop esi
        pop ebx
        add esp, 0x2C
        ret 
        public_58ea64 : nop
        cmp byte ptr ds : [esi+0x540], bl
        jne public_58eadd
        mov ecx, dword ptr ds : [esi+0x4A4]
        cmp ecx, ebx
        jne public_58ea7a
        xor eax, eax
        jmp public_58ea85
        public_58ea7a : nop
        mov eax, dword ptr ds : [esi+0x4A8]
        sub eax, ecx
        sar eax, 2
        public_58ea85 : nop
        add eax, 0xFFFFFFFE
        cmp edx, eax
        jae public_58eadd
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [esi+0x4FC]
        fnstsw ax
        test ah, 5
        jp public_58eadd
        push ebx
/*FIXUP push offset public_5e5234 @0x58eaa6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5234
        call public_41dde0
        mov edx, dword ptr ds : [esi+0x4E4]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        inc edx
        mov byte ptr ds : [esi+0x542], bl
        mov byte ptr ds : [esi+0x540], 1
        mov dword ptr ds : [esi+0x544], edx
        mov dword ptr ds : [esi+0x548], eax
        pop esi
        pop ebx
        add esp, 0x2C
        ret 
        public_58eadd : nop
        mov edx, dword ptr ds : [esi+0x4A4]
        cmp edx, ebx
        mov ecx, dword ptr ds : [esi+0x4E4]
        je public_58eb17
        mov eax, dword ptr ds : [esi+0x4A8]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        jae public_58eb17
        mov eax, dword ptr ds : [esi+0x4C4]
        lea edx, ds:[ecx+ecx*2]
        cmp byte ptr ds : [eax+edx*4], bl
        je public_58eb17
        mov dword ptr ds : [esi+0x4EC], ecx
        mov byte ptr ds : [esi+0x4E8], 1
        public_58eb17 : nop
        push ebx
/*FIXUP push offset public_5c95fc @0x58eb18*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        call public_41dde0
        add esp, 8
        public_58eb25 : nop
        pop esi
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x58e5a0)
    }
}

#undef public_58e60a
#undef public_58e659
#undef public_58e688
#undef public_58e6d8
#undef public_58e785
#undef public_58e790
#undef public_58e7a0
#undef public_58e7ac
#undef public_58e7b2
#undef public_58e7d4
#undef public_58e7e7
#undef public_58e7ed
#undef public_58e803
#undef public_58e80e
#undef public_58e817
#undef public_58e823
#undef public_58e827
#undef public_58e849
#undef public_58e85c
#undef public_58e862
#undef public_58e88c
#undef public_58e89a
#undef public_58e8a5
#undef public_58e8b8
#undef public_58e8c0
#undef public_58e8c6
#undef public_58e8fa
#undef public_58e8fc
#undef public_58e90a
#undef public_58e984
#undef public_58e99a
#undef public_58e9a5
#undef public_58e9fe
#undef public_58ea64
#undef public_58ea7a
#undef public_58ea85
#undef public_58eadd
#undef public_58eb17
#undef public_58eb25
