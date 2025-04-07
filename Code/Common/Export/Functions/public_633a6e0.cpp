#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62748a0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62dba00);
CLANG_FORWARD_PROC_SYMBOL(public_62dbb90);
CLANG_FORWARD_PROC_SYMBOL(public_62e25c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_633a75e _public_633a75e
#define public_633a79a _public_633a79a
#define public_633a7c6 _public_633a7c6
#define public_633a899 _public_633a899
#define public_633a89b _public_633a89b
#define public_633a8ce _public_633a8ce
#define public_633a8f8 _public_633a8f8
#define public_633a917 _public_633a917
#define public_633aa03 _public_633aa03
#define public_633aa25 _public_633aa25

PROC_DECLARE(0x633a6e0, internal_633a6e0, public_633a6e0);
extern "C" NAKED register_t __cdecl internal_633a6e0()
{
    __asm
    {
        sub esp, 0x80
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x3C]
        sub eax, 3
        mov dword ptr ss : [esp+8], 0
        je public_633a917
        sub eax, 2
        je public_633a79a
        mov ecx, dword ptr ss : [esp+0x88]
        lea eax, ss:[ebp+0x30]
        push eax
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call public_6288800
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_63a4ab4]
        fnstsw ax
        test ah, 5
        jp public_633a75e
        fld dword ptr ds : [public_6399408]
        pop ebp
        add esp, 0x80
        ret 4
        public_633a75e : nop
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [ebp]
        fdivr qword ptr ds : [public_6399410]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, ebp
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        call dword ptr ds : [eax+0x40]
        jmp public_633a8f8
        public_633a79a : nop
        mov eax, dword ptr ss : [esp+0x88]
        lea edx, ss:[ebp+0x30]
        push edx
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_6288800
        mov eax, dword ptr ds : [public_658a9b0]
        add esp, 0xC
        test eax, eax
        jne public_633a7c6
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633a7c6 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[ebp+0xC]
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        fld dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        sub esp, 0xC
        fld dword ptr ss : [ebp+0x48]
        lea ecx, ss:[esp+0x18]
        fadd dword ptr ss : [ebp+0x44]
        fmul qword ptr ds : [public_639df88]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fdivp 
        fld st(0)
        fmul st, st(3)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [public_6399408]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fxch 
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fsub st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fld st(1)
        fadd st, st(3)
        fadd st, st(1)
        fsqrt 
        fstp dword ptr ss : [esp+4]
        fxch 
        faddp st(2), st
        fxch 
        fadd st, st(1)
        fsqrt 
        fcom dword ptr ds : [public_63a4ab4]
        fstp st(1)
        fnstsw ax
        test ah, 5
        jnp public_633a899
        fdivr qword ptr ds : [public_6399410]
        push ecx
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp]
        call public_62e25c0
        jmp public_633a89b
        public_633a899 : nop
        fstp st(0)
        public_633a89b : nop
        fld dword ptr ss : [ebp+0x4C]
        fmul qword ptr ds : [public_639df88]
        fld dword ptr ss : [esp+0x10]
        fabs 
        fld dword ptr ss : [ebp+0x44]
        fld st(2)
        fld st(1)
        fmul st, st(2)
        fld st(4)
        fmul st, st(5)
        faddp 
        fsqrt 
        fdivp 
        fstp st(1)
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_633a8ce
        fdivp 
        jmp public_633a8f8
        public_633a8ce : nop
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp+0x44]
        fsub dword ptr ss : [ebp+0x48]
        fmul qword ptr ds : [public_639df88]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        public_633a8f8 : nop
        fcom dword ptr ds : [public_63a4ab4]
        fnstsw ax
        test ah, 0x41
        jne public_633aa25
        fdivr dword ptr ss : [esp+4]
        pop ebp
        add esp, 0x80
        ret 4
        public_633a917 : nop
        push ebx
        push esi
        push edi
        lea ecx, ss:[esp+0x54]
        call public_62748a0
        fld dword ptr ss : [ebp+0x4C]
        fmul dword ptr ds : [public_639c13c]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x48]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x44]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        lea esi, ss:[ebp+0xC]
        mov ecx, 0xC
        lea edi, ss:[esp+0x54]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x84], edx
        lea edx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x88], eax
        mov eax, dword ptr ss : [esp+0x94]
        push edx
        mov dword ptr ss : [esp+0x90], ecx
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        call public_6288800
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        call public_62dbb90
        add esp, 0x18
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x5C]
        call public_62dba00
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x28]
        mov bl, al
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6288800
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        add esp, 0xC
        fld dword ptr ss : [esp+0x20]
        pop edi
        fmul dword ptr ss : [esp+0x1C]
        pop esi
        test bl, bl
        pop ebx
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        jne public_633aa03
        fchs 
        public_633aa03 : nop
        mov edx, dword ptr ss : [ebp]
        fstp dword ptr ss : [esp+4]
        mov ecx, ebp
        call dword ptr ds : [edx+0x30]
        fld st(0)
        fmulp 
        pop ebp
        fld dword ptr ss : [esp]
        fadd st, st(1)
        fdivrp 
        add esp, 0x80
        ret 4
        public_633aa25 : nop
        fstp st(0)
        pop ebp
        fld dword ptr ss : [esp+4]
        add esp, 0x80
        ret 4
        UNREACHABLE_TRAP(0x633a6e0)
    }
}

#undef public_633a75e
#undef public_633a79a
#undef public_633a7c6
#undef public_633a899
#undef public_633a89b
#undef public_633a8ce
#undef public_633a8f8
#undef public_633a917
#undef public_633aa03
#undef public_633aa25
