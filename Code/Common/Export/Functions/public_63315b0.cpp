#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_6331730);

#define public_63315d8 _public_63315d8
#define public_6331631 _public_6331631
#define public_6331638 _public_6331638
#define public_6331653 _public_6331653
#define public_633166b _public_633166b
#define public_6331680 _public_6331680
#define public_6331691 _public_6331691
#define public_6331695 _public_6331695
#define public_63316f0 _public_63316f0
#define public_6331709 _public_6331709
#define public_6331716 _public_6331716

PROC_DECLARE(0x63315b0, internal_63315b0, public_63315b0);
extern "C" NAKED register_t __cdecl internal_63315b0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        xor eax, eax
        push esi
        mov ebp, ecx
        mov dword ptr ds : [public_640a74c], eax
        mov dword ptr ds : [public_640a748], eax
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, eax
        push edi
        je public_6331716
        mov edi, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0x20]
        public_63315d8 : nop
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsubr qword ptr ds : [public_6399410]
        fabs 
        fcomp qword ptr ds : [public_63a4950]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_6331680
        mov eax, dword ptr ds : [ebx+0xC]
        push esi
        push ebx
        mov dword ptr ss : [esp+0x2C], eax
        call public_62c47a0
        fsub dword ptr ds : [esi+0xC]
        add esp, 8
        fcom dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_6331653
        fstp st(0)
        mov eax, 1
        public_6331631 : nop
        mov eax, dword ptr ds : [esi+eax*4+0x10]
        push edi
        push ebx
        push eax
        public_6331638 : nop
        mov ecx, ebp
        call public_6331730
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        jne public_63315d8
        mov eax, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_6331653 : nop
        fld dword ptr ss : [esp+0x24]
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_633166b
        mov eax, 2
        jmp public_6331631
        public_633166b : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push edi
        push ebx
        push ecx
        mov ecx, ebp
        call public_6331730
        mov edx, dword ptr ds : [esi+0x18]
        push edi
        push ebx
        push edx
        jmp public_6331638
        public_6331680 : nop
        add esi, 0x1C
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], esi
        jmp public_6331695
        public_6331691 : nop
        mov esi, dword ptr ss : [esp+0x24]
        public_6331695 : nop
        mov ebp, dword ptr ds : [esi]
        test ebp, ebp
        je public_6331709
        push ebx
        add esi, 4
        lea ecx, ss:[esp+0x14]
        push esi
        push ecx
        call public_6288800
        fld dword ptr ds : [esi+0xC]
        fadd dword ptr ds : [ebx+0xC]
        add esp, 0xC
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_63316f0
        test ebp, ebp
        je public_63316f0
        mov eax, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edi]
        jae public_63316f0
        mov dword ptr ds : [edi+eax*4+8], ebp
        inc dword ptr ds : [edi+4]
        public_63316f0 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        inc eax
        add edx, 0x14
        cmp eax, 8
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], edx
        jb public_6331691
        public_6331709 : nop
        mov eax, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        public_6331716 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x63315b0)
    }
}

#undef public_63315d8
#undef public_6331631
#undef public_6331638
#undef public_6331653
#undef public_633166b
#undef public_6331680
#undef public_6331691
#undef public_6331695
#undef public_63316f0
#undef public_6331709
#undef public_6331716
