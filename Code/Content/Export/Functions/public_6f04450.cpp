#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eab770);
CLANG_FORWARD_PROC_SYMBOL(public_6ead7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eae680);
CLANG_FORWARD_PROC_SYMBOL(public_6f04450);
CLANG_FORWARD_PROC_SYMBOL(public_6f04be0);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ad60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d220);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f0446b _public_6f0446b
#define public_6f04481 _public_6f04481
#define public_6f04494 _public_6f04494
#define public_6f044ec _public_6f044ec
#define public_6f0451f _public_6f0451f
#define public_6f04546 _public_6f04546
#define public_6f04550 _public_6f04550
#define public_6f04570 _public_6f04570
#define public_6f045b4 _public_6f045b4
#define public_6f045cf _public_6f045cf
#define public_6f045d1 _public_6f045d1
#define public_6f045d3 _public_6f045d3
#define public_6f045f5 _public_6f045f5
#define public_6f04640 _public_6f04640
#define public_6f04659 _public_6f04659
#define public_6f04662 _public_6f04662
#define public_6f04664 _public_6f04664
#define public_6f04666 _public_6f04666
#define public_6f04692 _public_6f04692
#define public_6f046a6 _public_6f046a6
#define public_6f04718 _public_6f04718
#define public_6f0472f _public_6f0472f
#define public_6f04744 _public_6f04744
#define public_6f04749 _public_6f04749
#define public_6f04776 _public_6f04776
#define public_6f04799 _public_6f04799
#define public_6f047a5 _public_6f047a5
#define public_6f047c8 _public_6f047c8

PROC_DECLARE(0x6f04450, internal_6f04450, public_6f04450);
extern "C" NAKED register_t __cdecl internal_6f04450()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        mov ebx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov dword ptr ss : [esp+4], 0
        jne public_6f0446b
        xor edx, edx
        jmp public_6f04481
        public_6f0446b : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f04481 : nop
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x68]
        cmp edx, edi
        jae public_6f044ec
        test edi, edi
        mov eax, edi
        jge public_6f04494
        xor eax, eax
        public_6f04494 : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 2
        push ecx
        call public_6fa912a
        mov edx, dword ptr ds : [ebx+8]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [ebx+4]
        push esi
        push edx
        push eax
        mov ecx, ebx
        call public_6f04be0
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        push ecx
        push edx
        mov ecx, ebx
        call public_6ea1490
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[edi+edi*8]
        lea edx, ds:[esi+ecx*4]
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], edx
        call public_6ead7e0
        lea eax, ds:[eax+eax*8]
        lea ecx, ds:[esi+eax*4]
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+4], esi
        public_6f044ec : nop
        mov ebp, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6f04749
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 3
        test eax, eax
        je public_6f04749
        lea eax, ds:[edi+edi]
        cmp eax, 0x14
        mov dword ptr ss : [esp+0x14], 0x14
        jb public_6f0451f
        mov dword ptr ss : [esp+0x14], eax
        public_6f0451f : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x58], 0
        call public_6f478c0
        mov edx, dword ptr ds : [eax+0x48]
        push edx
        call public_6f4d5e0
        add esp, 4
        test edi, edi
        je public_6f04744
        jmp public_6f04550
        public_6f04546 : nop
        mov ebp, dword ptr ss : [esp+0x64]
        lea ebx, ds:[ebx]
        public_6f04550 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp dword ptr ss : [esp+0x58], eax
        ja public_6f04744
        mov esi, dword ptr ss : [ebp+8]
        fld dword ptr ds : [public_6fb444c]
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_6f045cf
        mov edi, edi
        public_6f04570 : nop
        fadd dword ptr ds : [eax+4]
        add eax, 8
        cmp eax, esi
        jne public_6f04570
        fst dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f045d1
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_6fb4448]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_6fb444c]
        je public_6f045cf
        public_6f045b4 : nop
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0x1C]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6f04659
        add ecx, 8
        cmp ecx, esi
        jne public_6f045b4
        public_6f045cf : nop
        fstp st(0)
        public_6f045d1 : nop
        mov ebp, esi
        public_6f045d3 : nop
        mov ecx, dword ptr ss : [ebp]
        push ecx
        mov ecx, dword ptr ss : [esp+0x64]
        call public_6eab770
        fld dword ptr ds : [public_6fb444c]
        mov edi, eax
        mov esi, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [edi+0x18]
        add edi, 0x14
        cmp eax, esi
        je public_6f04664
        public_6f045f5 : nop
        fadd dword ptr ds : [eax+0x24]
        add eax, 0x28
        cmp eax, esi
        jne public_6f045f5
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f04666
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_6fb4448]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_6fb444c]
        je public_6f04664
        lea esp, ss:[esp]
        public_6f04640 : nop
        fadd dword ptr ds : [ecx+0x24]
        fld dword ptr ss : [esp+0x1C]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6f04662
        add ecx, 0x28
        cmp ecx, esi
        jne public_6f04640
        jmp public_6f04664
        public_6f04659 : nop
        fstp st(0)
        mov ebp, ecx
        jmp public_6f045d3
        public_6f04662 : nop
        mov esi, ecx
        public_6f04664 : nop
        fstp st(0)
        public_6f04666 : nop
        cmp esi, dword ptr ds : [edi+8]
        je public_6f0472f
        xor ecx, ecx
        lea eax, ds:[esi+0xC]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], ecx
        mov byte ptr ss : [esp+0x3C], cl
        jne public_6f04692
        mov dword ptr ss : [esp+0x38], ecx
        mov byte ptr ss : [esp+0x3C], cl
        jmp public_6f046a6
        public_6f04692 : nop
        push eax
        lea edx, ss:[esp+0x40]
        push 0x18
        push edx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x38], eax
        public_6f046a6 : nop
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        call public_6f4d220
        add esp, 8
        test al, al
        je public_6f0472f
        mov edx, dword ptr ds : [public_6fb8030]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [edx+0x48]
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        push eax
        call public_6f4ad60
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [public_6fb8030]
        add esp, 0xC
        fcomp dword ptr ss : [esp+0x2C]
        fnstsw ax
        test ah, 0x44
        jp public_6f04776
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6f04718
        mov dword ptr ss : [esp+0x10], 2
        public_6f04718 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_6f0472f : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x68]
        inc ecx
        test eax, eax
        mov dword ptr ss : [esp+0x58], ecx
        jne public_6f04546
        public_6f04744 : nop
        call public_6f4d650
        public_6f04749 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        pop edi
        pop esi
        pop ebp
        je public_6f047c8
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x5C], edx
        je public_6f047c8
        xor eax, eax
        pop ebx
        add esp, 0x44
        ret 
        public_6f04776 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x34]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [eax+0xC]
        test eax, eax
        sete cl
        cmp eax, 3
        jne public_6f04799
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6f047a5
        public_6f04799 : nop
        test eax, eax
        je public_6f047a5
        mov dword ptr ss : [esp+0x10], 4
        public_6f047a5 : nop
        test cl, cl
        je public_6f04718
        mov ecx, dword ptr ds : [ebx+8]
        lea eax, ss:[esp+0x30]
        push eax
        push 1
        push ecx
        mov ecx, ebx
        call public_6eae680
        dec dword ptr ss : [esp+0x68]
        jmp public_6f0472f
        public_6f047c8 : nop
        mov eax, dword ptr ss : [esp+4]
        pop ebx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6f04450)
    }
}

#undef public_6f0446b
#undef public_6f04481
#undef public_6f04494
#undef public_6f044ec
#undef public_6f0451f
#undef public_6f04546
#undef public_6f04550
#undef public_6f04570
#undef public_6f045b4
#undef public_6f045cf
#undef public_6f045d1
#undef public_6f045d3
#undef public_6f045f5
#undef public_6f04640
#undef public_6f04659
#undef public_6f04662
#undef public_6f04664
#undef public_6f04666
#undef public_6f04692
#undef public_6f046a6
#undef public_6f04718
#undef public_6f0472f
#undef public_6f04744
#undef public_6f04749
#undef public_6f04776
#undef public_6f04799
#undef public_6f047a5
#undef public_6f047c8
