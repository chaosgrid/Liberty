#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_628bea0);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);
CLANG_FORWARD_PROC_SYMBOL(public_6350a60);
CLANG_FORWARD_PROC_SYMBOL(public_6350df0);
CLANG_FORWARD_PROC_SYMBOL(public_63510c0);
CLANG_FORWARD_PROC_SYMBOL(public_63510f0);

#define public_63431de _public_63431de
#define public_6343206 _public_6343206
#define public_6343264 _public_6343264
#define public_63432bb _public_63432bb
#define public_634333e _public_634333e
#define public_634336a _public_634336a
#define public_634336c _public_634336c
#define public_6343432 _public_6343432
#define public_634349b _public_634349b
#define public_63434c3 _public_63434c3
#define public_6343506 _public_6343506
#define public_6343533 _public_6343533
#define public_6343537 _public_6343537
#define public_6343539 _public_6343539

PROC_DECLARE(0x6343150, internal_6343150, public_6343150);
extern "C" NAKED register_t __cdecl internal_6343150()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+0xF8]
        mov edx, dword ptr ds : [eax+0xFC]
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x64]
        mov dword ptr ss : [esp+0x14], edx
        lea ebx, ds:[esi+0xAC]
        fadd dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+0x68]
        fld st(0)
        fmul dword ptr ds : [ebx+4]
        fadd dword ptr ds : [esi+0xA0]
        fld st(1)
        fmul dword ptr ds : [ebx+8]
        fadd dword ptr ds : [esi+0xA4]
        fstp dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x64]
        fxch 
        fmul dword ptr ds : [ebx]
        fadd dword ptr ds : [esi+0x9C]
        mov dword ptr ds : [esi+0xC], eax
        fstp dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x78]
        test eax, eax
        jne public_63431de
        lea ecx, ds:[esi+0x7C]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x14]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], ecx
        jmp public_6343206
        public_63431de : nop
        fld dword ptr ss : [esp+0x10]
        lea ecx, ds:[esi+0x14]
        fsub dword ptr ds : [esi+0x6C]
        push ecx
        lea edx, ds:[esi+0x8C]
        lea eax, ds:[esi+0x7C]
        fadd dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0x70]
        fmul dword ptr ds : [esi+0x74]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6350df0
        public_6343206 : nop
        mov ecx, dword ptr ds : [esi+0x5C]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [ecx+0x128]
        mov eax, dword ptr ds : [esi+0x58]
        fld dword ptr ds : [esi+0xC]
        add ecx, 0xF4
        fsub dword ptr ds : [ecx+0x38]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x64]
        fsub dword ptr ds : [ecx+0x30]
        mov dword ptr ss : [esp+0x28], edx
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax+0x78]
        test dh, 0xC
        jne public_6343264
        lea edx, ss:[esp+0x30]
        push edx
        add eax, 0x30
        push eax
        call public_6348580
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_628bea0
        public_6343264 : nop
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ds : [esi+0x60]
        fmul dword ptr ds : [public_63a53fc]
        fadd st, st(1)
        fstp dword ptr ds : [esi+0x60]
        fld dword ptr ds : [esi+0xBC]
        fld st(0)
        fmul st, st(1)
        fxch 
        fxch st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_63432bb
        mov edx, dword ptr ds : [esi]
        push 0
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        public_63432bb : nop
        fld dword ptr ds : [esi+0x44]
        push ecx
        fld dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x24]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x68]
        fmul st, st(2)
        mov dword ptr ss : [esp+0x2C], eax
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ds : [esi+0x48]
        fmul dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        push ebx
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_628be60
        fld dword ptr ds : [esi+0x48]
        fmul dword ptr ds : [edi]
        mov edx, dword ptr ds : [esi+0x5C]
        push ecx
        add edx, 0xA4
        fchs 
        lea eax, ss:[esp+0x24]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_628be60
        fld dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+4]
        fld st(0)
        mov dword ptr ss : [esp+0x64], ecx
        fmulp 
        mov ecx, dword ptr ds : [esi+0x5C]
        lea edx, ss:[esp+0x28]
        lea ebx, ds:[esi+0x2C]
        mov ebp, 3
        public_634333e : nop
        fld dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [edx]
        fmul st, st(1)
        fabs 
        fcomp dword ptr ds : [ebx]
        fnstsw ax
        test ah, 1
        jne public_634336c
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [public_63a53d4]
        fld dword ptr ds : [ecx+0x40]
        fmul dword ptr ds : [edi]
        fnstsw ax
        fmul dword ptr ds : [edi]
        test ah, 1
        fmul dword ptr ds : [ebx]
        je public_634336a
        fchs 
        public_634336a : nop
        fstp dword ptr ds : [edx]
        public_634336c : nop
        sub ebx, 4
        sub edx, 4
        dec ebp
        jne public_634333e
        fstp st(0)
        lea ebp, ds:[esi+0x14]
        fld dword ptr ss : [esp+0x24]
        push ebp
        fmul dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [ecx+0xA8]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [ecx+0xAC]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+0xAC], edx
        fmul dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [ecx+0xA4]
        fstp dword ptr ds : [ecx+0xA4]
        fstp dword ptr ds : [ecx+0xA8]
        lea ecx, ss:[esp+0x44]
        call public_63510c0
        mov eax, dword ptr ds : [esi+0x5C]
        add eax, 0xE4
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x58]
        call public_63510f0
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x54]
        call public_6350a60
        fld dword ptr ds : [esi+0xC0]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 1
        je public_6343432
        mov eax, dword ptr ds : [esi]
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        public_6343432 : nop
        mov ebx, dword ptr ds : [esi+0x5C]
        fld dword ptr ds : [ebx+0xF0]
        fmul dword ptr ss : [ebp+0xC]
        fld dword ptr ds : [ebx+0xEC]
        fmul dword ptr ss : [ebp+8]
        faddp 
        fld dword ptr ds : [ebx+0xE8]
        fmul dword ptr ss : [ebp+4]
        faddp 
        fld dword ptr ss : [ebp]
        fmul dword ptr ds : [ebx+0xE4]
        faddp 
        fcomp dword ptr ds : [public_63a53d4]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ds : [esi+0x4C]
        fnstsw ax
        test ah, 1
        je public_634349b
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x38]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fxch 
        mov dword ptr ss : [esp+0x38], ecx
        fmul dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        jmp public_63434c3
        public_634349b : nop
        fchs 
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x38]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fxch 
        mov dword ptr ss : [esp+0x38], edx
        fmul dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        public_63434c3 : nop
        fld dword ptr ds : [esi+0x48]
        mov ebp, ebx
        fchs 
        lea ecx, ds:[esi+0x3C]
        fld st(0)
        sub ebp, esi
        fmul dword ptr ds : [ebx+0x94]
        lea edx, ss:[esp+0x18]
        mov esi, 3
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x10]
        fld st(0)
        fmul dword ptr ds : [ebx+0x98]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ebx+0x9C]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x18]
        public_6343506 : nop
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ds : [ecx+ebp-0x20]
        fmul dword ptr ds : [edx]
        fld st(0)
        fabs 
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        jne public_6343537
        fcomp dword ptr ds : [public_63a53d4]
        fld dword ptr ds : [ecx+ebp]
        fmul dword ptr ds : [edi]
        fnstsw ax
        fmul dword ptr ds : [ecx]
        test ah, 1
        je public_6343533
        fchs 
        public_6343533 : nop
        fstp dword ptr ds : [edx]
        jmp public_6343539
        public_6343537 : nop
        fstp st(0)
        public_6343539 : nop
        sub ecx, 4
        sub edx, 4
        dec esi
        jne public_6343506
        fld dword ptr ss : [esp+0x10]
        pop edi
        fadd dword ptr ds : [ebx+0x94]
        pop esi
        pop ebp
        fstp dword ptr ds : [ebx+0x94]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [ebx+0x98]
        fstp dword ptr ds : [ebx+0x98]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [ebx+0x9C]
        fstp dword ptr ds : [ebx+0x9C]
        pop ebx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x6343150)
    }
}

#undef public_63431de
#undef public_6343206
#undef public_6343264
#undef public_63432bb
#undef public_634333e
#undef public_634336a
#undef public_634336c
#undef public_6343432
#undef public_634349b
#undef public_63434c3
#undef public_6343506
#undef public_6343533
#undef public_6343537
#undef public_6343539
