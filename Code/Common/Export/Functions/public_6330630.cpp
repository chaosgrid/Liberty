#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887a0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_632f3f0);
CLANG_FORWARD_PROC_SYMBOL(public_632f920);
CLANG_FORWARD_PROC_SYMBOL(public_632f980);
CLANG_FORWARD_PROC_SYMBOL(public_6330630);
CLANG_FORWARD_PROC_SYMBOL(public_6330960);
CLANG_FORWARD_PROC_SYMBOL(public_6331cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);

#define public_633064d _public_633064d
#define public_6330669 _public_6330669
#define public_6330690 _public_6330690
#define public_63306a0 _public_63306a0
#define public_63306e0 _public_63306e0
#define public_63307b5 _public_63307b5
#define public_63307fd _public_63307fd
#define public_6330811 _public_6330811
#define public_6330825 _public_6330825
#define public_633084b _public_633084b
#define public_6330853 _public_6330853
#define public_6330871 _public_6330871
#define public_6330875 _public_6330875
#define public_6330891 _public_6330891
#define public_63308c6 _public_63308c6
#define public_63308de _public_63308de
#define public_63308e0 _public_63308e0
#define public_63308f6 _public_63308f6
#define public_6330901 _public_6330901
#define public_633090f _public_633090f
#define public_6330926 _public_6330926

PROC_DECLARE(0x6330630, internal_6330630, public_6330630);
extern "C" NAKED register_t __cdecl internal_6330630()
{
    __asm
    {
        sub esp, 0x74
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x84]
        push esi
        mov esi, dword ptr ss : [ebp+4]
        test esi, esi
        push edi
        jne public_633064d
        xor ebx, ebx
        mov dword ptr ss : [esp+0x10], ebx
        jmp public_6330669
        public_633064d : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        mov ebx, edx
        public_6330669 : nop
        test ebx, ebx
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        jle public_63306a0
        add esi, 4
        mov edi, ebx
        lea ebx, ds:[ebx]
        public_6330690 : nop
        push esi
        lea ecx, ss:[esp+0x34]
        call public_62887a0
        add esi, 0x14
        dec edi
        jne public_6330690
        public_63306a0 : nop
        fild dword ptr ss : [esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x34]
        lea edx, ss:[esp+0x40]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6330960
        add esp, 0xC
        test ebx, ebx
        mov dword ptr ss : [esp+0x18], 0x270F
        mov dword ptr ss : [esp+0x20], 0
        jle public_6330926
        mov esi, dword ptr ss : [ebp+4]
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x14], eax
        public_63306e0 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x3C]
        push eax
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        call public_6288800
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        add esp, 0xC
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fcomp qword ptr ds : [public_63a4950]
        fnstsw ax
        test ah, 5
        jnp public_6330853
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x4C], ecx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x50], edx
        call public_6347e60
        fdivr dword ptr ds : [public_639a1d0]
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x54]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x58]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fstp st(0)
        call public_62c47a0
        mov ebx, dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x5C]
        mov ebp, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x5C]
        xor edi, edi
        add esp, 8
        mov dword ptr ss : [esp+0x74], ebx
        mov dword ptr ss : [esp+0x78], ebp
        mov dword ptr ss : [esp+0x7C], edx
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x70], edi
        mov dword ptr ss : [esp+0x6C], edi
        mov dword ptr ss : [esp+0x68], edi
        add esi, 4
        public_63307b5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_63307fd
        mov ecx, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        jae public_63307fd
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        push esi
        lea ecx, ss:[esp+0x7C]
        call public_632f3f0
        mov edx, dword ptr ss : [esp+eax*4+0x68]
        lea eax, ss:[esp+eax*4+0x68]
        inc edx
        inc edi
        mov dword ptr ds : [eax], edx
        add esi, 0x14
        jmp public_63307b5
        public_63307fd : nop
        lea ecx, ss:[esp+0x68]
        call public_632f980
        test al, al
        jne public_6330811
        mov eax, 0x270F
        jmp public_6330825
        public_6330811 : nop
        mov eax, dword ptr ss : [esp+0x70]
        sub eax, dword ptr ss : [esp+0x6C]
        cdq 
        xor eax, edx
        sub eax, edx
        mov edx, dword ptr ss : [esp+0x68]
        lea eax, ds:[eax+edx*2]
        public_6330825 : nop
        cmp eax, dword ptr ss : [esp+0x18]
        jge public_633084b
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebp
        mov dword ptr ss : [esp+0x60], ecx
        mov dword ptr ss : [esp+0x64], edx
        je public_6330871
        public_633084b : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6330853 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x14]
        inc eax
        add edx, 0x14
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x14], edx
        jl public_63306e0
        jmp public_6330875
        public_6330871 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6330875 : nop
        test ebx, ebx
        jle public_6330926
        mov ebp, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x1C], ebx
        mov ebx, dword ptr ss : [esp+0x98]
        xor edi, edi
        public_6330891 : nop
        mov eax, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[edi+ecx]
        mov edx, dword ptr ds : [esi+0x10]
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x24], edx
        call public_632f920
        fcom dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_63308c6
        fstp st(0)
        mov eax, 1
        jmp public_63308e0
        public_63308c6 : nop
        fld dword ptr ss : [esp+0x20]
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_63308de
        mov eax, 2
        jmp public_63308e0
        public_63308de : nop
        xor eax, eax
        public_63308e0 : nop
        sub eax, 0
        je public_6330901
        dec eax
        je public_63308f6
        dec eax
        jne public_6330901
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push 1
        push eax
        mov ecx, ebx
        jmp public_633090f
        public_63308f6 : nop
        mov ecx, dword ptr ss : [ebp+8]
        push esi
        push 1
        push ecx
        mov ecx, ebp
        jmp public_633090f
        public_6330901 : nop
        mov ecx, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ds : [ecx+8]
        push esi
        push 1
        push edx
        public_633090f : nop
        call public_6331cf0
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 0x14
        dec eax
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6330891
        public_6330926 : nop
        mov eax, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x60]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0x5C]
        pop ebp
        mov dword ptr ds : [ecx+0xC], edx
        pop ebx
        add esp, 0x74
        ret 0x14
        UNREACHABLE_TRAP(0x6330630)
    }
}

#undef public_633064d
#undef public_6330669
#undef public_6330690
#undef public_63306a0
#undef public_63306e0
#undef public_63307b5
#undef public_63307fd
#undef public_6330811
#undef public_6330825
#undef public_633084b
#undef public_6330853
#undef public_6330871
#undef public_6330875
#undef public_6330891
#undef public_63308c6
#undef public_63308de
#undef public_63308e0
#undef public_63308f6
#undef public_6330901
#undef public_633090f
#undef public_6330926
