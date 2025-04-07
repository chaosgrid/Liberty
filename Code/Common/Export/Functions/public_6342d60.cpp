#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_6350a60);
CLANG_FORWARD_PROC_SYMBOL(public_63510c0);
CLANG_FORWARD_PROC_SYMBOL(public_63510f0);

#define public_6342de6 _public_6342de6
#define public_6342e12 _public_6342e12
#define public_6342e14 _public_6342e14
#define public_6342ed2 _public_6342ed2
#define public_6342efa _public_6342efa
#define public_6342f3d _public_6342f3d
#define public_6342f6a _public_6342f6a
#define public_6342f6e _public_6342f6e
#define public_6342f70 _public_6342f70

PROC_DECLARE(0x6342d60, internal_6342d60, public_6342d60);
extern "C" NAKED register_t __cdecl internal_6342d60()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x5C]
        fld dword ptr ds : [esi+0x44]
        fld dword ptr ds : [esi+8]
        push edi
        fsub dword ptr ds : [eax+0x128]
        mov edi, dword ptr ss : [esp+0x68]
        add eax, 0xA4
        lea edx, ss:[esp+0x24]
        fmul st, st(1)
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [eax+0x88]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [eax+0x80]
        push ecx
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x28]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ds : [esi+0x48]
        fmul dword ptr ds : [edi]
        fchs 
        fstp dword ptr ss : [esp]
        push eax
        push edx
        call public_628be60
        fld dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+4]
        fld st(0)
        mov ebx, dword ptr ds : [esi+0x5C]
        fmulp 
        mov dword ptr ss : [esp+0x68], eax
        lea ecx, ss:[esp+0x2C]
        lea edx, ds:[esi+0x2C]
        mov ebp, 3
        public_6342de6 : nop
        fld dword ptr ds : [ebx+0x20]
        fmul dword ptr ds : [ecx]
        fmul st, st(1)
        fabs 
        fcomp dword ptr ds : [edx]
        fnstsw ax
        test ah, 1
        jne public_6342e14
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_63a53d4]
        fld dword ptr ds : [ebx+0x40]
        fmul dword ptr ds : [edi]
        fnstsw ax
        fmul dword ptr ds : [edi]
        test ah, 1
        fmul dword ptr ds : [edx]
        je public_6342e12
        fchs 
        public_6342e12 : nop
        fstp dword ptr ds : [ecx]
        public_6342e14 : nop
        sub edx, 4
        sub ecx, 4
        dec ebp
        jne public_6342de6
        mov edx, dword ptr ss : [esp+0x68]
        fstp st(0)
        push edx
        lea eax, ss:[esp+0x28]
        lea ecx, ds:[ebx+0xA4]
        push eax
        push ecx
        call public_628be60
        lea ebx, ds:[esi+0x14]
        push ebx
        lea ecx, ss:[esp+0x48]
        call public_63510c0
        mov ecx, dword ptr ds : [esi+0x5C]
        add ecx, 0xE4
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        lea ecx, ss:[esp+0x5C]
        call public_63510f0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x58]
        call public_6350a60
        mov edx, dword ptr ds : [esi+0x5C]
        fld dword ptr ds : [edx+0xF0]
        fmul dword ptr ds : [ebx+0xC]
        fld dword ptr ds : [edx+0xEC]
        fmul dword ptr ds : [ebx+8]
        faddp 
        fld dword ptr ds : [edx+0xE8]
        fmul dword ptr ds : [ebx+4]
        faddp 
        fld dword ptr ds : [edx+0xE4]
        fmul dword ptr ds : [ebx]
        faddp 
        fcomp dword ptr ds : [public_63a53d4]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [esi+0x4C]
        fnstsw ax
        test ah, 1
        je public_6342ed2
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        fmul st, st(2)
        mov dword ptr ss : [esp+0x1C], ecx
        fstp dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        jmp public_6342efa
        public_6342ed2 : nop
        fchs 
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], eax
        fstp dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        public_6342efa : nop
        fld dword ptr ds : [esi+0x50]
        mov ebp, edx
        fchs 
        lea ecx, ds:[esi+0x3C]
        fld st(0)
        sub ebp, esi
        fmul dword ptr ds : [edx+0x94]
        lea ebx, ss:[esp+0x3C]
        mov esi, 3
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x34]
        fld st(0)
        fmul dword ptr ds : [edx+0x98]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [edx+0x9C]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x3C]
        public_6342f3d : nop
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [ecx+ebp-0x20]
        fmul dword ptr ds : [ebx]
        fld st(0)
        fabs 
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        jne public_6342f6e
        fcomp dword ptr ds : [public_63a53d4]
        fld dword ptr ds : [ecx+ebp]
        fmul dword ptr ds : [edi]
        fnstsw ax
        fmul dword ptr ds : [ecx]
        test ah, 1
        je public_6342f6a
        fchs 
        public_6342f6a : nop
        fstp dword ptr ds : [ebx]
        jmp public_6342f70
        public_6342f6e : nop
        fstp st(0)
        public_6342f70 : nop
        sub ecx, 4
        sub ebx, 4
        dec esi
        jne public_6342f3d
        fld dword ptr ss : [esp+0x34]
        pop edi
        fadd dword ptr ds : [edx+0x94]
        pop esi
        pop ebp
        pop ebx
        fstp dword ptr ds : [edx+0x94]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [edx+0x98]
        fstp dword ptr ds : [edx+0x98]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [edx+0x9C]
        fstp dword ptr ds : [edx+0x9C]
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x6342d60)
    }
}

#undef public_6342de6
#undef public_6342e12
#undef public_6342e14
#undef public_6342ed2
#undef public_6342efa
#undef public_6342f3d
#undef public_6342f6a
#undef public_6342f6e
#undef public_6342f70
