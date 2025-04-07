#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_62dc410);
CLANG_FORWARD_PROC_SYMBOL(public_63311e0);

#define public_6331200 _public_6331200
#define public_633124c _public_633124c
#define public_6331286 _public_6331286
#define public_6331291 _public_6331291
#define public_63312f2 _public_63312f2
#define public_63312f6 _public_63312f6
#define public_6331307 _public_6331307
#define public_6331310 _public_6331310
#define public_63313a9 _public_63313a9
#define public_63313c1 _public_63313c1
#define public_63313c3 _public_63313c3
#define public_63313da _public_63313da
#define public_633145f _public_633145f
#define public_63314af _public_63314af

PROC_DECLARE(0x63311e0, internal_63311e0, public_63311e0);
extern "C" NAKED register_t __cdecl internal_63311e0()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        test esi, esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_63314af
        mov ebx, dword ptr ss : [esp+0x50]
        lea ecx, ds:[ecx]
        public_6331200 : nop
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
        jp public_6331307
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_633124c
        mov ecx, dword ptr ss : [esp+0x54]
        push ecx
        push ebx
        push eax
        mov ecx, ebp
        call public_63311e0
        public_633124c : nop
        push esi
        push ebx
        call public_62c47a0
        fsub dword ptr ds : [esi+0xC]
        fld dword ptr ds : [ebx+0x14]
        add esp, 8
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [ebx+0x10]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [ebx+0xC]
        fmul dword ptr ds : [esi]
        faddp 
        fld st(1)
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6331286
        mov edi, 1
        fchs 
        jmp public_6331291
        public_6331286 : nop
        fxch 
        mov edi, 2
        fchs 
        fxch 
        public_6331291 : nop
        fcom qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 5
        jnp public_63312f2
        fxch 
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x4C]
        fstp st(0)
        fld dword ptr ss : [esp+0x4C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_63312f6
        fld dword ptr ss : [esp+0x4C]
        fcomp dword ptr ds : [ebx+0x18]
        fnstsw ax
        test ah, 0x41
        je public_63312f6
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        lea ebp, ds:[ebx+0xC]
        lea eax, ss:[esp+0x24]
        push ebp
        push eax
        call public_6288830
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x24]
        push ebx
        push edx
        call public_62887d0
        add esp, 0x18
        jmp public_63313da
        public_63312f2 : nop
        fstp st(0)
        fstp st(0)
        public_63312f6 : nop
        mov esi, dword ptr ds : [esi+edi*4+0x10]
        test esi, esi
        je public_63314af
        jmp public_6331200
        public_6331307 : nop
        xor ebp, ebp
        add esi, 0x2C
        lea esp, ss:[esp]
        public_6331310 : nop
        mov edi, dword ptr ds : [esi-0x10]
        test edi, edi
        je public_63314af
        push ebx
        lea eax, ds:[esi-0xC]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_6288800
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        add esp, 0xC
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x4C]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 5
        jnp public_63313a9
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_62dc410
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        call public_62c47a0
        fcom dword ptr ds : [public_6399408]
        add esp, 8
        fnstsw ax
        test ah, 5
        jnp public_63313c1
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        fld st(2)
        fmul st, st(3)
        fsubp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_63313c3
        public_63313a9 : nop
        test edi, edi
        je public_63313c3
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [eax]
        jae public_63313c3
        mov dword ptr ds : [eax+ecx*4+8], edi
        inc dword ptr ds : [eax+4]
        jmp public_63313c3
        public_63313c1 : nop
        fstp st(0)
        public_63313c3 : nop
        inc ebp
        add esi, 0x14
        cmp ebp, 8
        jb public_6331310
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        public_63313da : nop
        mov eax, edi
        mov edi, dword ptr ds : [esi+edi*4+0x10]
        xor eax, 3
        test edi, edi
        mov dword ptr ss : [esp+0x4C], eax
        je public_633145f
        fld dword ptr ss : [esp+0x14]
        mov edx, ebx
        fsub dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+4]
        fsub dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [edx+8]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x2C], eax
        fsub dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x30], ecx
        fld st(0)
        mov eax, ebp
        fmul st, st(1)
        mov ecx, dword ptr ds : [eax]
        fld st(3)
        mov dword ptr ss : [esp+0x34], edx
        fmul st, st(4)
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], ecx
        faddp 
        mov ecx, dword ptr ss : [esp+0x54]
        fld st(2)
        push ecx
        fmul st, st(3)
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x40], edx
        lea edx, ss:[esp+0x30]
        faddp 
        push edx
        push edi
        mov dword ptr ss : [esp+0x4C], eax
        fsqrt 
        fstp dword ptr ss : [esp+0x50]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_63311e0
        mov eax, dword ptr ss : [esp+0x4C]
        public_633145f : nop
        mov esi, dword ptr ds : [esi+eax*4+0x10]
        test esi, esi
        je public_63314af
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [ebp]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x44], edx
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x18]
        push edx
        push esi
        mov dword ptr ss : [esp+0x50], eax
        call public_63311e0
        public_63314af : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0xC
        UNREACHABLE_TRAP(0x63311e0)
    }
}

#undef public_6331200
#undef public_633124c
#undef public_6331286
#undef public_6331291
#undef public_63312f2
#undef public_63312f6
#undef public_6331307
#undef public_6331310
#undef public_63313a9
#undef public_63313c1
#undef public_63313c3
#undef public_63313da
#undef public_633145f
#undef public_63314af
