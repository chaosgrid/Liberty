#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421bd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220a0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_5074e0);
CLANG_FORWARD_PROC_SYMBOL(public_507e70);
CLANG_FORWARD_PROC_SYMBOL(public_507ea0);

#define public_507600 _public_507600
#define public_507644 _public_507644
#define public_507716 _public_507716
#define public_50772f _public_50772f
#define public_5078a2 _public_5078a2
#define public_5078bb _public_5078bb
#define public_507919 _public_507919
#define public_507c13 _public_507c13
#define public_507e2f _public_507e2f
#define public_507e5c _public_507e5c

PROC_DECLARE(0x5074e0, internal_5074e0, public_5074e0);
extern "C" NAKED register_t __cdecl internal_5074e0()
{
    __asm
    {
        sub esp, 0xB8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x5C]
        test eax, eax
        je public_507e5c
        mov ecx, dword ptr ds : [ebx+0x20]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        lea edx, ss:[esp+0x94]
        push edx
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x6C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov dword ptr ss : [esp+0x70], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x74], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0xA0]
        rep movsd
        mov eax, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ss : [esp+0xAC]
        mov edx, dword ptr ss : [esp+0xA0]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x94]
        call public_422b80
        mov eax, dword ptr ss : [esp+0xBC]
        mov ecx, dword ptr ss : [esp+0xB0]
        mov edx, dword ptr ss : [esp+0xA4]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x6C]
        call public_422b80
        mov eax, dword ptr ss : [esp+0xC0]
        mov ecx, dword ptr ss : [esp+0xB4]
        mov edx, dword ptr ss : [esp+0xA8]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x88]
        call public_422b80
        fld dword ptr ss : [esp+0x94]
        fcomp dword ptr ss : [esp+0x9C]
        pop edi
        pop esi
        fnstsw ax
        test ah, 0x41
        jne public_507600
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x84]
        mov edx, dword ptr ss : [esp+0x88]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], eax
        jmp public_507644
        public_507600 : nop
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x94]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x70], ecx
        mov ecx, dword ptr ss : [esp+0x88]
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], ecx
        public_507644 : nop
        lea edx, ss:[esp+0xC0]
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_423b60
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        mov eax, 0x5F3759DF
        fld dword ptr ss : [esp+0x20]
        add esp, 0xC
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x20], eax
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fabs 
        fsubr qword ptr ds : [public_5c89b8]
        fsub dword ptr ds : [public_5db098]
        fmul dword ptr ds : [public_5db0a0]
        fst dword ptr ss : [esp+0x20]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_507716
        mov dword ptr ss : [esp+0x20], 0x3F800000
        jmp public_50772f
        public_507716 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 5
        jp public_50772f
        mov dword ptr ss : [esp+0x20], 0
        public_50772f : nop
        fld dword ptr ss : [esp+0x38]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x4C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x40]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x44]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x40]
        mov edx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fstp dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x30]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+0x20]
        fmul dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x40]
        push edx
        fmul dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [eax+0x40]
        fmul dword ptr ds : [public_5db09c]
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+0x30]
        call public_410190
        fdivr dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_5db09c]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fstp st(0)
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fabs 
        fsubr qword ptr ds : [public_5c89b8]
        fsub dword ptr ds : [public_5d043c]
        fmul dword ptr ds : [public_5d8464]
        fst dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_5078a2
        mov dword ptr ss : [esp+0x10], 0x3F800000
        jmp public_5078bb
        public_5078a2 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 5
        jp public_5078bb
        mov dword ptr ss : [esp+0x10], 0
        public_5078bb : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_507919
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fabs 
        fsubr qword ptr ds : [public_5c89b8]
        fsub dword ptr ds : [public_5d043c]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5d8464]
        fst dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 5
        jp public_507919
        mov dword ptr ss : [esp+0x10], 0
        public_507919 : nop
        fld dword ptr ss : [esp+0x5C]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x30]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x64]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x28]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x24]
        push ecx
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fstp dword ptr ss : [esp]
        call public_507e70
        fld dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [ebx+0x20]
        fmul st, st(1)
        add esp, 4
        lea edx, ss:[esp+0x24]
        push edx
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [eax+0x40]
        fmul dword ptr ds : [public_5db09c]
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x30]
        call public_410190
        fdivr dword ptr ss : [esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x5C]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fstp st(0)
        fld dword ptr ss : [esp+0x94]
        fmul dword ptr ds : [public_5db09c]
        fstp dword ptr ss : [esp]
        call public_507ea0
        push 0xB50
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0
        call public_422190
        push 0xB71
        call public_421ed0
        push 0xBE2
        call public_421dd0
        add esp, 0x14
        mov ecx, dword ptr ds : [ebx+0x5C]
        push 0
        call public_425640
        push eax
        call public_4220a0
        push 6
        push 5
        call public_4220c0
        push 8
        call public_421670
        fld dword ptr ss : [esp+0x30]
        fcomp qword ptr ds : [public_5c8ba8]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        jne public_507c13
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ebx+0x2A8]
        mov edx, dword ptr ds : [ebx+0x2A4]
        push eax
        mov eax, dword ptr ds : [ebx+0x2A0]
        push ecx
        push edx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [ebx+0x5C]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+8]
        push ecx
        push edx
        call public_421ca0
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x80]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        call public_423b30
        lea eax, ss:[esp+0x58]
        push eax
        lea ecx, ss:[esp+0x74]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        call public_423b60
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [ebx+0x5C]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+0x10]
        push ecx
        push edx
        call public_421ca0
        add esp, 0x44
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        call public_423b30
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_423b30
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [ebx+0x5C]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x10]
        push ecx
        push edx
        call public_421ca0
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x94]
        push ecx
        lea edx, ss:[esp+0x80]
        push edx
        call public_423b60
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_423b30
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x48]
        add esp, 0x44
        push eax
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [ebx+0x5C]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+8]
        push ecx
        push edx
        call public_421ca0
        fld dword ptr ss : [esp+0x80]
        fsub dword ptr ss : [esp+0x5C]
        add esp, 8
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0xC]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x4C]
        push eax
        push ecx
        push edx
        call public_421cc0
        add esp, 0xC
        public_507c13 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_507e2f
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+0x2A8]
        mov edx, dword ptr ds : [ebx+0x2A4]
        push eax
        mov eax, dword ptr ds : [ebx+0x2A0]
        push ecx
        push edx
        push eax
        call public_421bd0
        mov eax, dword ptr ds : [ebx+0x5C]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+8]
        push ecx
        push edx
        call public_421ca0
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x84]
        add esp, 0xC
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x70]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x54]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [ebx+0x5C]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+0x10]
        push ecx
        push edx
        call public_421ca0
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x80]
        add esp, 8
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x70]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x54]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [ebx+0x5C]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x10]
        push ecx
        push edx
        call public_421ca0
        fld dword ptr ss : [esp+0x80]
        fsub dword ptr ss : [esp+0x40]
        add esp, 8
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push edx
        call public_421cc0
        mov ebx, dword ptr ds : [ebx+0x5C]
        mov eax, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+8]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x78]
        fsub dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x7C]
        fsub dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x80]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x68]
        fxch 
        fsub dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        push ecx
        call public_421cc0
        add esp, 0x20
        public_507e2f : nop
        call public_421690
        push 0xB71
        call public_421dd0
        push 1
        call public_422190
        push 0xBE2
        call public_421ed0
        push 0xB44
        call public_421dd0
        add esp, 0x10
        public_507e5c : nop
        pop ebx
        add esp, 0xB8
        ret 0xC
        UNREACHABLE_TRAP(0x5074e0)
    }
}

#undef public_507600
#undef public_507644
#undef public_507716
#undef public_50772f
#undef public_5078a2
#undef public_5078bb
#undef public_507919
#undef public_507c13
#undef public_507e2f
#undef public_507e5c
