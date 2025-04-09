#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421b70);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422690);
CLANG_FORWARD_PROC_SYMBOL(public_47e790);
CLANG_FORWARD_PROC_SYMBOL(public_4c63e0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);
CLANG_FORWARD_PROC_SYMBOL(public_5a4b50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_479748 _public_479748
#define public_47974b _public_47974b
#define public_479767 _public_479767
#define public_47976a _public_47976a
#define public_479775 _public_479775
#define public_4797b4 _public_4797b4
#define public_4797bb _public_4797bb
#define public_4797f3 _public_4797f3
#define public_4797fa _public_4797fa
#define public_479805 _public_479805
#define public_4798c3 _public_4798c3
#define public_4798df _public_4798df
#define public_4798e7 _public_4798e7
#define public_479910 _public_479910
#define public_47991f _public_47991f
#define public_479923 _public_479923
#define public_479995 _public_479995
#define public_4799e3 _public_4799e3
#define public_4799fc _public_4799fc
#define public_479a0e _public_479a0e
#define public_479a26 _public_479a26
#define public_479b97 _public_479b97
#define public_479cfc _public_479cfc

PROC_DECLARE(0x479700, internal_479700, public_479700);
extern "C" NAKED register_t __cdecl internal_479700()
{
    __asm
    {
        sub esp, 0x94
        push ebx
        push ebp
        push esi
        push edi
        push 0xA
        mov ebp, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_479cfc
        mov al, byte ptr ss : [ebp+0x4E7]
        test al, al
        jne public_479cfc
        mov eax, dword ptr ss : [ebp+0x3CC]
        or edi, 0xFFFFFFFF
        test eax, eax
        jl public_47974b
        sub eax, dword ptr ss : [ebp+0x3C4]
        mov edi, eax
        js public_479748
        cmp edi, 5
        jl public_47974b
        public_479748 : nop
        or edi, 0xFFFFFFFF
        public_47974b : nop
        mov eax, dword ptr ss : [ebp+0x3A4]
        or ebx, 0xFFFFFFFF
        test eax, eax
        jl public_47976a
        sub eax, dword ptr ss : [ebp+0x3C4]
        mov ebx, eax
        js public_479767
        cmp ebx, 5
        jl public_47976a
        public_479767 : nop
        or ebx, 0xFFFFFFFF
        public_47976a : nop
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        je public_479805
        public_479775 : nop
        test edi, edi
        mov dword ptr ds : [esi+0x70], 0
        jl public_4797bb
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        cmp eax, dword ptr ss : [ebp+edi*4+0x438]
        je public_4797b4
        cmp eax, dword ptr ss : [ebp+edi*4+0x3FC]
        je public_4797b4
        cmp eax, dword ptr ss : [ebp+edi*4+0x474]
        je public_4797b4
        cmp eax, dword ptr ss : [ebp+edi*4+0x488]
        je public_4797b4
        cmp eax, dword ptr ss : [ebp+edi*4+0x44C]
        jne public_4797bb
        public_4797b4 : nop
        mov dword ptr ds : [esi+0x70], 1
        public_4797bb : nop
        test ebx, ebx
        jl public_4797fa
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        cmp eax, dword ptr ss : [ebp+ebx*4+0x438]
        je public_4797f3
        cmp eax, dword ptr ss : [ebp+ebx*4+0x3FC]
        je public_4797f3
        cmp eax, dword ptr ss : [ebp+ebx*4+0x474]
        je public_4797f3
        cmp eax, dword ptr ss : [ebp+ebx*4+0x488]
        je public_4797f3
        cmp eax, dword ptr ss : [ebp+ebx*4+0x44C]
        jne public_4797fa
        public_4797f3 : nop
        mov dword ptr ds : [esi+0x70], 2
        public_4797fa : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_479775
        public_479805 : nop
        lea eax, ss:[ebp+0x438]
        push 5
        push eax
        call public_5a4b50
        lea ecx, ss:[ebp+0x3FC]
        push 5
        push ecx
        call public_5a4b50
        add esp, 0x10
        mov ecx, ebp
        call public_5a0760
        mov eax, dword ptr ss : [ebp+0x4CC]
        xor edi, edi
        cmp eax, edi
        je public_479cfc
        cmp dword ptr ss : [ebp+0x4D0], edi
        je public_479cfc
        cmp dword ptr ss : [ebp+0x4D4], edi
        je public_479cfc
        cmp dword ptr ss : [ebp+0x910], edi
        mov dword ptr ss : [esp+0x1C], edi
        jne public_479923
        mov eax, dword ptr ss : [ebp+0x360]
        cmp eax, edi
        je public_479923
        mov eax, dword ptr ds : [eax+0x390]
        cmp eax, edi
        je public_479923
        push eax
        call dword ptr ds : [public_5c603c]
        add esp, 4
        cmp eax, edi
        je public_479923
        cmp dword ptr ss : [ebp+0x3A4], 0xFFFFFFFF
        je public_4798e7
        mov edx, dword ptr ss : [ebp+0x360]
        fild dword ptr ds : [edx+0x988]
        fmul dword ptr ds : [eax+0x5C]
        call public_5b7ec0
        mov dword ptr ss : [ebp+0x910], eax
        mov eax, dword ptr ss : [ebp+0x32C]
        cmp eax, edi
        je public_4798c3
        cmp eax, 2
        jne public_479923
        public_4798c3 : nop
        mov ecx, ebp
        call public_47e790
        mov cl, byte ptr ss : [ebp+0x35C]
        test cl, cl
        jne public_4798df
        cmp eax, edi
        je public_479923
        mov cl, byte ptr ds : [eax+0xC]
        test cl, cl
        je public_479923
        public_4798df : nop
        mov dword ptr ss : [ebp+0x910], edi
        jmp public_479923
        public_4798e7 : nop
        mov ecx, dword ptr ss : [ebp+0x394]
        mov dword ptr ss : [ebp+0x910], edi
        cmp byte ptr ds : [ecx], 0
        jne public_479910
        mov edx, dword ptr ss : [ebp+0x360]
        fild dword ptr ds : [edx+0x988]
        fmul dword ptr ds : [eax+0x5C]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x1C], eax
        public_479910 : nop
        mov eax, dword ptr ss : [ebp+0x32C]
        cmp eax, edi
        je public_47991f
        cmp eax, 2
        jne public_479923
        public_47991f : nop
        mov dword ptr ss : [esp+0x1C], edi
        public_479923 : nop
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[ebp+0x330]
        call public_4c63e0
        fld dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], 0
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ss : [esp+0x30], 0
        fnstsw ax
        test ah, 0x41
        jne public_479995
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x14]
        fild dword ptr ss : [ebp+0x910]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x30]
        public_479995 : nop
        mov esi, dword ptr ss : [ebp+0x4D0]
        lea edx, ds:[esi+0xB4]
        mov eax, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x34], eax
        fld dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [ebp+0x910]
        fadd st(0), st
        cmp eax, edi
        mov dword ptr ss : [esp+0x38], ebx
        fst dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x3C], ecx
        fmul st, st(1)
        fsubr dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jg public_4799e3
        cmp dword ptr ss : [esp+0x1C], edi
        jle public_479b97
        cmp eax, edi
        jle public_479a0e
        public_4799e3 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5d15b4]
        fnstsw ax
        test ah, 5
        jp public_4799fc
        mov dword ptr ss : [esp+0x18], 0x3CCCCCCD
        public_4799fc : nop
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x18]
        fsubr dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        jmp public_479a26
        public_479a0e : nop
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x18], edx
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        public_479a26 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        fld dword ptr ds : [esi+0xA8]
        fadd dword ptr ds : [esi+0x60]
        add esi, 0x3C
        mov ecx, 9
        lea edi, ss:[esp+0x44]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+0x70]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+0x74]
        rep movsd
        mov dword ptr ss : [esp+0x68], edx
        lea edx, ss:[esp+0x44]
        push edx
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        push 0
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], ecx
        call public_422690
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 4
        push 2
        call public_4220c0
        push 0xA
        push 0
        push 0
        push 0
        call public_421b70
        push 8
        call public_421670
        mov esi, dword ptr ss : [esp+0x44]
        push 0x3A83126F
        push ebx
        push esi
        call public_421cc0
        fld dword ptr ss : [esp+0x70]
        fchs 
        push 0x3A83126F
        fstp dword ptr ss : [esp+0x4C]
        mov edi, dword ptr ss : [esp+0x4C]
        push edi
        push esi
        call public_421cc0
        fld dword ptr ss : [esp+0x78]
        add esp, 0x44
        fchs 
        fstp dword ptr ss : [esp+0x10]
        push 0x3A83126F
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        push esi
        call public_421cc0
        push 0x3A83126F
        push ebx
        push esi
        call public_421cc0
        add esp, 0x18
        call public_421690
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov esi, dword ptr ss : [ebp+0x4D4]
        mov edx, dword ptr ds : [esi+0x84]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        push 0x3F800000
        push edx
/*FIXUP push offset public_67dbf8 @0x479b8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_479b97 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 8
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        fld dword ptr ds : [esi+0x60]
        fadd dword ptr ds : [esi+0xA8]
        add esi, 0x3C
        mov ecx, 9
        lea edi, ss:[esp+0x74]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+0x70]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+0x74]
        rep movsd
        mov dword ptr ss : [esp+0x98], edx
        lea edx, ss:[esp+0x74]
        push edx
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        push 0
        mov dword ptr ss : [esp+0xA4], eax
        mov dword ptr ss : [esp+0xA8], ecx
        call public_422690
        push 0xDE1
        call public_421ed0
        push 0xBE2
        call public_421dd0
        push 4
        push 2
        call public_4220c0
        push 0xA
        push 0
        push 0
        push 0
        call public_421b70
        push 8
        call public_421670
        mov esi, dword ptr ss : [esp+0x40]
        push 0x3A83126F
        push ebx
        push esi
        call public_421cc0
        fld dword ptr ss : [esp+0x70]
        fchs 
        push 0x3A83126F
        fstp dword ptr ss : [esp+0x4C]
        mov edi, dword ptr ss : [esp+0x4C]
        push edi
        push esi
        call public_421cc0
        fld dword ptr ss : [esp+0x78]
        add esp, 0x44
        fchs 
        fstp dword ptr ss : [esp+0x10]
        push 0x3A83126F
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        push esi
        call public_421cc0
        push 0x3A83126F
        push ebx
        push esi
        call public_421cc0
        add esp, 0x18
        call public_421690
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [ebp+0x4CC]
        mov edx, dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push 0
        push 0x3F800000
        push edx
/*FIXUP push offset public_67dbf8 @0x479cf3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_479cfc : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x94
        ret 
        UNREACHABLE_TRAP(0x479700)
    }
}

#undef public_479748
#undef public_47974b
#undef public_479767
#undef public_47976a
#undef public_479775
#undef public_4797b4
#undef public_4797bb
#undef public_4797f3
#undef public_4797fa
#undef public_479805
#undef public_4798c3
#undef public_4798df
#undef public_4798e7
#undef public_479910
#undef public_47991f
#undef public_479923
#undef public_479995
#undef public_4799e3
#undef public_4799fc
#undef public_479a0e
#undef public_479a26
#undef public_479b97
#undef public_479cfc
