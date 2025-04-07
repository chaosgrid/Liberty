#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_622ff00);
CLANG_FORWARD_PROC_SYMBOL(public_6230690);
CLANG_FORWARD_PROC_SYMBOL(public_62307f0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6246294);

#define public_623011c _public_623011c
#define public_6230239 _public_6230239
#define public_6230288 _public_6230288
#define public_6230293 _public_6230293
#define public_62302af _public_62302af
#define public_62302c9 _public_62302c9
#define public_623030e _public_623030e
#define public_6230311 _public_6230311
#define public_6230324 _public_6230324
#define public_6230325 _public_6230325
#define public_6230345 _public_6230345

PROC_DECLARE(0x622ff00, internal_622ff00, public_622ff00);
extern "C" NAKED register_t __cdecl internal_622ff00()
{
    __asm
    {
        sub esp, 0xAC
        fld dword ptr ss : [esp+0xB4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xB4]
        push ebp
        push esi
        fmul dword ptr ds : [ebx+0x20]
        lea esi, ds:[ebx+0x18]
        push edi
        sub esp, 0xC
        mov edi, ecx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x1C], edi
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xD0]
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xD0]
        fmul dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [ebx+0xC]
        lea ecx, ss:[esp+0x68]
        fstp dword ptr ds : [ebx+0xC]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [ebx+0x10]
        fstp dword ptr ds : [ebx+0x10]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [ebx+0x14]
        fstp dword ptr ds : [ebx+0x14]
        call public_6206c70
        mov eax, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [esp+0x8C], eax
        mov eax, dword ptr ds : [edi+0xC0]
        mov dword ptr ss : [esp+0x90], ecx
        mov dword ptr ss : [esp+0x94], edx
        mov ecx, dword ptr ds : [eax+0xA0]
        and ecx, 1
        cmp cl, 1
        jne public_6230345
        mov edx, esi
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, 0x5F3759DF
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x24], edx
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        sar eax, 1
        sub ecx, eax
        mov eax, 0x5F3759DF
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_624bab8]
        fsubr dword ptr ds : [public_624bac0]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x24]
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
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fmul dword ptr ds : [public_624bab8]
        fsubr dword ptr ds : [public_624bac0]
        fmul dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fabs 
        fcomp qword ptr ds : [public_624e7f8]
        fnstsw ax
        test ah, 5
        jp public_623011c
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x2C], 0
        call public_6246294
        fmul dword ptr ds : [public_624bab8]
        lea ecx, ss:[esp+0x28]
        fst dword ptr ss : [esp+0x14]
        fsin 
        fstp dword ptr ss : [esp+0x34]
        call public_6230690
        fdivr dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0x28]
        lea eax, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x14]
        fcos 
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        push edx
        push eax
        fstp dword ptr ss : [esp+0x44]
        call public_6206c40
        mov ebp, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x28]
        lea esi, ds:[ebx+0x58]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edi, esi
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 0xC
        mov dword ptr ds : [edi], ebp
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], edx
        mov edi, dword ptr ss : [esp+0x10]
        jmp public_6230239
        public_623011c : nop
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x28], 0
        call public_6246294
        fmul dword ptr ds : [public_624bab8]
        lea ecx, ss:[esp+0x28]
        fst dword ptr ss : [esp+0x14]
        fsin 
        fstp dword ptr ss : [esp+0x10]
        call public_6230690
        fdivr dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x28]
        lea eax, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fcos 
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push eax
        fstp dword ptr ss : [esp+0x44]
        call public_6206c40
        fld qword ptr ds : [public_624e7f0]
        fsin 
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x48], ecx
        add esp, 0xC
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0x3F800000
        fstp dword ptr ss : [esp+0x10]
        call public_6230690
        fdivr dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x1C]
        lea eax, ss:[esp+0x48]
        fstp dword ptr ss : [esp+0x10]
        fld qword ptr ds : [public_624e7f0]
        fcos 
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push eax
        fstp dword ptr ss : [esp+0x64]
        call public_6206c40
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x68], ecx
        mov dword ptr ss : [esp+0x6C], edx
        lea ecx, ss:[esp+0x64]
        mov dword ptr ss : [esp+0x70], eax
        lea edx, ss:[esp+0x44]
        push ecx
        lea eax, ss:[esp+0x58]
        push edx
        push eax
        call public_62307f0
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x64]
        lea esi, ds:[ebx+0x58]
        add esp, 0x18
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        public_6230239 : nop
        xor ebp, ebp
        mov dword ptr ds : [ebx+0x68], ebp
        mov ecx, dword ptr ds : [edi+0xC0]
        mov edx, dword ptr ds : [ecx+0xA0]
        and edx, 2
        cmp dl, 2
        jne public_6230311
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_624bab8]
        fnstsw ax
        test ah, 5
        jp public_6230288
        fld dword ptr ss : [esp+0xC4]
        mov dword ptr ds : [esi], 0x3F800000
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+4], ebp
        fadd dword ptr ds : [ebx+0x68]
        fadd dword ptr ds : [public_624c350]
        jmp public_6230293
        public_6230288 : nop
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0xC4]
        public_6230293 : nop
        fstp dword ptr ds : [ebx+0x68]
        fld dword ptr ds : [ebx+0x68]
        fcomp dword ptr ds : [public_624bac4]
        fnstsw ax
        and eax, 0x4100
        jne public_62302af
        mov dword ptr ds : [ebx+0x68], 0x3F800000
        public_62302af : nop
        mov eax, dword ptr ds : [ebx+0x68]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_6257ae8]
        cmp eax, ebp
        jne public_62302c9
        call public_623e830
        mov dword ptr ds : [public_6257ae8], eax
        public_62302c9 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[ebx+0x3C]
        push edx
        push esi
        lea edx, ss:[esp+0x40]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [public_6257ae8]
        cmp eax, ebp
        jne public_623030e
        call public_623e830
        mov dword ptr ds : [public_6257ae8], eax
        public_623030e : nop
        push edi
        jmp public_6230325
        public_6230311 : nop
        mov eax, dword ptr ds : [public_6257ae8]
        cmp eax, ebp
        jne public_6230324
        call public_623e830
        mov dword ptr ds : [public_6257ae8], eax
        public_6230324 : nop
        push esi
        public_6230325 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x9C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        lea esi, ss:[esp+0x98]
        lea edi, ss:[esp+0x68]
        mov ecx, 9
        rep movsd
        public_6230345 : nop
        mov ebx, dword ptr ds : [ebx+0x6C]
        lea ecx, ss:[esp+0x68]
        push ecx
        push 1
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0xC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 8
        UNREACHABLE_TRAP(0x622ff00)
    }
}

#undef public_623011c
#undef public_6230239
#undef public_6230288
#undef public_6230293
#undef public_62302af
#undef public_62302c9
#undef public_623030e
#undef public_6230311
#undef public_6230324
#undef public_6230325
#undef public_6230345
