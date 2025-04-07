#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6347e90);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6347f50);
CLANG_FORWARD_PROC_SYMBOL(public_6353b50);
CLANG_FORWARD_PROC_SYMBOL(public_6358bb0);

#define public_6353b7d _public_6353b7d
#define public_6353d2a _public_6353d2a
#define public_6353dd7 _public_6353dd7
#define public_6353e6a _public_6353e6a

PROC_DECLARE(0x6353b50, internal_6353b50, public_6353b50);
extern "C" NAKED register_t __cdecl internal_6353b50()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x20]
        mov edi, ecx
        push eax
        call public_6358bb0
        mov esi, dword ptr ds : [edi+0x40]
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1C], 0
        lea ebx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x18], ecx
        lea ebp, ds:[edi+0x10]
        public_6353b7d : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edx+8]
        test eax, eax
        je public_6353dd7
        mov eax, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax+0x9C]
        fld dword ptr ds : [eax+0xF4]
        add eax, 0xF4
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ds : [eax+0x10]
        push esi
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x6C]
        push ecx
        fstp dword ptr ss : [esp+0x78]
        lea ecx, ss:[esp+0x50]
        call public_6347f50
        lea ecx, ss:[esp+0x48]
        call public_6347e60
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edi+0x44]
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 1
        jne public_6353e6a
        fld dword ptr ds : [edi+0x44]
        mov eax, dword ptr ds : [edi+0x40]
        fld st(0)
        add eax, 0x88
        fsub st, st(2)
        lea edx, ss:[esp+0x38]
        fmul dword ptr ss : [esp+0x10]
        fsubr st, st(1)
        fmul dword ptr ds : [public_63a5654]
        fdiv dword ptr ds : [edi+0x44]
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [edi+0x38]
        fld st(0)
        fmul dword ptr ds : [eax-0xC]
        fld st(1)
        fmul dword ptr ds : [eax-8]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ds : [eax-0x10]
        push ecx
        mov dword ptr ss : [esp+0x44], ecx
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [edi+0x3C]
        fstp dword ptr ss : [esp]
        push eax
        push edx
        call public_628be60
        lea ecx, ss:[esp+0x48]
        call public_6347ef0
        fld dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x40]
        fxch 
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fxch 
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fst dword ptr ss : [esp+0x14]
        fabs 
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6353dd7
        fld dword ptr ss : [esp+0x38]
        push ecx
        fstp dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x40]
        lea eax, ss:[esp+0x4C]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x5C]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x18]
        fchs 
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        lea ecx, ss:[esp+0x64]
        call public_628be60
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x80]
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6353d2a
        fmul dword ptr ds : [public_63a5498]
        fld dword ptr ss : [esp+0x80]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ss : [esp+0x80], edx
        fxch 
        public_6353d2a : nop
        fld dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x30]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fstp st(0)
        mov dword ptr ss : [esp+0x2C], eax
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x14]
        fadd st, st(1)
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        fstp st(0)
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        fmul dword ptr ds : [esi+0x80]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+0x7C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+0x78]
        faddp 
        fstp dword ptr ds : [edi+0x38]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+0x90]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+0x8C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+0x88]
        faddp 
        fstp dword ptr ds : [edi+0x3C]
        public_6353dd7 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        inc eax
        sub edx, 4
        add ebp, 0x14
        add ebx, 4
        cmp eax, 2
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], edx
        jl public_6353b7d
        fld dword ptr ds : [edi+0x38]
        mov edx, dword ptr ds : [edi+0x3C]
        fld st(0)
        mov ecx, dword ptr ss : [esp+0x8C]
        fmul dword ptr ds : [esi+0x78]
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ss : [esp+0x78]
        fld st(0)
        fmul dword ptr ds : [esi+0x7C]
        fstp dword ptr ss : [esp+0x7C]
        fmul dword ptr ds : [esi+0x80]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x8C]
        fadd dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x90]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x88]
        fadd dword ptr ss : [esp+0x78]
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+8]
        call public_6347e90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x78
        ret 4
        public_6353e6a : nop
        pop edi
        fstp st(0)
        fld dword ptr ds : [public_63a53d4]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x78
        ret 4
        UNREACHABLE_TRAP(0x6353b50)
    }
}

#undef public_6353b7d
#undef public_6353d2a
#undef public_6353dd7
#undef public_6353e6a
