#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_6289c20);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62de2a0);
CLANG_FORWARD_PROC_SYMBOL(public_62de490);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fbc);

#define public_62de4b1 _public_62de4b1
#define public_62de4b3 _public_62de4b3
#define public_62de4c0 _public_62de4c0
#define public_62de4e9 _public_62de4e9
#define public_62de522 _public_62de522
#define public_62de554 _public_62de554
#define public_62de600 _public_62de600
#define public_62de6f4 _public_62de6f4
#define public_62de743 _public_62de743
#define public_62de7e0 _public_62de7e0
#define public_62de84d _public_62de84d
#define public_62de8ba _public_62de8ba
#define public_62de8e0 _public_62de8e0
#define public_62de9fe _public_62de9fe
#define public_62dea56 _public_62dea56
#define public_62dea7a _public_62dea7a
#define public_62debe1 _public_62debe1
#define public_62dec62 _public_62dec62
#define public_62dec88 _public_62dec88
#define public_62decaf _public_62decaf
#define public_62ded56 _public_62ded56
#define public_62ded6a _public_62ded6a
#define public_62ded94 _public_62ded94
#define public_62dedf6 _public_62dedf6
#define public_62def00 _public_62def00
#define public_62def35 _public_62def35
#define public_62def45 _public_62def45
#define public_62def95 _public_62def95
#define public_62defb8 _public_62defb8
#define public_62defe7 _public_62defe7
#define public_62deff4 _public_62deff4
#define public_62df0c1 _public_62df0c1
#define public_62df0cb _public_62df0cb
#define public_62df15f _public_62df15f
#define public_62df1d4 _public_62df1d4
#define public_62df1fa _public_62df1fa
#define public_62df220 _public_62df220
#define public_62df22c _public_62df22c
#define public_62df2a8 _public_62df2a8

PROC_DECLARE(0x62de490, internal_62de490, public_62de490);
extern "C" NAKED register_t __cdecl internal_62de490()
{
    __asm
    {
        sub esp, 0x220
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp]
        add eax, 0xF0
        mov eax, dword ptr ds : [eax]
        push esi
        xor esi, esi
        cmp eax, esi
        push edi
        je public_62de4b1
        lea ebx, ds:[eax-8]
        jmp public_62de4b3
        public_62de4b1 : nop
        xor ebx, ebx
        public_62de4b3 : nop
        lea ecx, ss:[ebp+0x14]
        mov edx, 0x19
        nop 
        lea esp, ss:[esp]
        public_62de4c0 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62de4e9
        fld dword ptr ds : [ecx]
        fsub dword ptr ss : [esp+0x234]
        fst dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62de4e9
        mov dword ptr ds : [ecx], esi
        public_62de4e9 : nop
        add ecx, 0x1C
        dec edx
        jne public_62de4c0
        fld dword ptr ss : [esp+0x234]
        fadd dword ptr ss : [ebp+0x10]
        fstp dword ptr ss : [ebp+0x10]
        fld dword ptr ss : [ebp+0x310]
        fsub dword ptr ss : [esp+0x234]
        fst dword ptr ss : [ebp+0x310]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jp public_62de522
        mov dword ptr ss : [ebp+0x310], esi
        public_62de522 : nop
        cmp dword ptr ss : [ebp+4], esi
        jne public_62de554
        pop edi
        mov dword ptr ss : [ebp+0x2F0], esi
        mov dword ptr ss : [ebp+0x314], esi
        mov dword ptr ss : [ebp+0x310], esi
        pop esi
        mov byte ptr ss : [ebp+0x2D4], 0
        mov byte ptr ss : [ebp+0x30C], 0
        pop ebp
        pop ebx
        add esp, 0x220
        ret 4
        public_62de554 : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0xA8]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0xA8]
        fmul dword ptr ss : [esp+0xA8]
        mov eax, 0x5F3759DF
        fld dword ptr ss : [esp+0xAC]
        fmul dword ptr ss : [esp+0xAC]
        faddp 
        fld dword ptr ss : [esp+0xB0]
        fmul dword ptr ss : [esp+0xB0]
        faddp 
        fst dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ss : [esp+0x7C]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x24], eax
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x24]
        fmulp 
        fst dword ptr ss : [esp+0x7C]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62de600
        pop edi
        mov dword ptr ss : [ebp+0x2F0], esi
        mov dword ptr ss : [ebp+0x314], esi
        mov dword ptr ss : [ebp+0x310], esi
        pop esi
        mov byte ptr ss : [ebp+0x2D4], 0
        mov byte ptr ss : [ebp+0x30C], 0
        pop ebp
        pop ebx
        add esp, 0x220
        ret 4
        public_62de600 : nop
        fld dword ptr ds : [public_63a05f8]
        fmul dword ptr ss : [ebp+0x10]
        fld qword ptr ds : [public_639c9e0]
        call public_6391fbc
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        fld dword ptr ds : [esi+8]
        sub esp, 0xC
        fld dword ptr ds : [esi+0x14]
        lea ecx, ss:[esp+0x7C]
        fld dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x98], esi
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [ebp+8]
        push ecx
        lea eax, ss:[esp+0x74]
        fstp dword ptr ss : [esp]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        call public_6288830
        lea edx, ss:[esp+0x68]
        push edx
        lea eax, ds:[esi+0x24]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        call public_62887d0
        mov ecx, 9
        lea edi, ss:[esp+0x100]
        rep movsd
        fld dword ptr ss : [esp+0x108]
        fld dword ptr ss : [esp+0x114]
        fld dword ptr ss : [esp+0x120]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ss : [esp+0xC]
        add esp, 0xC
        lea ecx, ss:[esp+0xA8]
        call public_628b030
        fld dword ptr ds : [public_63a05e4]
        fmul dword ptr ss : [ebp+8]
        fst dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62defb8
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_63a05e8]
        fnstsw ax
        test ah, 0x41
        jne public_62de6f4
        mov edx, dword ptr ds : [public_63a05e8]
        mov dword ptr ss : [esp+0x24], edx
        public_62de6f4 : nop
        fld dword ptr ds : [public_63a05e0]
        mov eax, dword ptr ds : [public_63fca10]
        test eax, eax
        fdiv dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [ebp+0xC]
        fld dword ptr ss : [esp+0x10]
        fcos 
        fld st(1)
        fmulp 
        fstp dword ptr ss : [esp+0x90]
        fld dword ptr ss : [esp+0x10]
        fsin 
        fmulp 
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ds : [public_63a05e0]
        fchs 
        fstp dword ptr ss : [esp+0x98]
        jne public_62de743
        call public_6391cf0
        mov dword ptr ds : [public_63fca10], eax
        public_62de743 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x90]
        push edx
        lea edx, ss:[esp+0xEC]
        push edx
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        lea edx, ss:[esp+0xC4]
        push edx
        call public_62887d0
        push 8
        lea eax, ss:[esp+0x140]
        push eax
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0xD0]
        push ecx
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        call public_6289c20
        mov edx, dword ptr ds : [ebx]
        mov esi, eax
        add esp, 0x20
        lea eax, ss:[esp+0xB4]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x58], esi
        call dword ptr ds : [edx+0x88]
        mov eax, dword ptr ds : [public_63fca14]
        test eax, eax
        mov ebx, dword ptr ds : [public_6399308]
        jne public_62de84d
        mov edi, 0x19
        lea esp, ss:[esp]
        public_62de7e0 : nop
        call ebx
        imul eax, 0x19
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov esi, eax
        sar esi, 0xF
        call ebx
        imul eax, 0x19
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edx, dword ptr ds : [esi*4+public_63fc9a0]
        sar eax, 0xF
        mov ecx, dword ptr ds : [eax*4+public_63fc9a0]
        lea eax, ds : [eax*4+public_63fc9a0]
        xor edx, ecx
        mov dword ptr ds : [esi*4+public_63fc9a0], edx
        mov ecx, edx
        mov edx, dword ptr ds : [eax]
        xor edx, ecx
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi*4+public_63fc9a0]
        mov eax, edx
        xor ecx, eax
        dec edi
        mov dword ptr ds : [esi*4+public_63fc9a0], ecx
        jne public_62de7e0
        mov esi, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [public_63fca14], 1
        public_62de84d : nop
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edx+0xC]
        add eax, 0x200
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x80], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x84], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x88], eax
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ss : [esp+0x88]
        mov byte ptr ss : [esp+0x23], 0
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x84]
        faddp 
        fld dword ptr ss : [esp+0x80]
        fmul dword ptr ss : [esp+0x80]
        faddp 
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62de8ba
        mov byte ptr ss : [esp+0x23], 1
        public_62de8ba : nop
        test esi, esi
        mov byte ptr ss : [esp+0x37], 0
        mov byte ptr ss : [ebp+0x30C], 0
        jle public_62dea7a
        mov dword ptr ss : [esp+0x6C], 0
        lea esi, ss:[esp+0x134]
        lea ecx, ds:[ecx]
        public_62de8e0 : nop
        mov edi, dword ptr ds : [esi-4]
        test edi, edi
        je public_62dea56
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_62dea56
        mov eax, dword ptr ds : [edi+0xE0]
        test eax, 0x20C150
        je public_62dea56
        cmp eax, dword ptr ss : [esp+0xB4]
        je public_62dea56
        lea edx, ss:[esp+0x48]
        push edx
        lea eax, ss:[esp+0x18]
        push esi
        push eax
        call public_6288800
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        mov edx, 0x5F3759DF
        fld dword ptr ss : [esp+0x24]
        mov al, byte ptr ss : [esp+0x2F]
        fmul dword ptr ss : [esp+0x24]
        add esp, 0xC
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fst dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x58]
        sar ecx, 1
        sub edx, ecx
        test al, al
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fstp st(0)
        je public_62de9fe
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        call public_6288800
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        mov ecx, 0x5F3759DF
        fld dword ptr ss : [esp+0x38]
        add esp, 0xC
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fst dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x58]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jnp public_62defb8
        public_62de9fe : nop
        fld dword ptr ss : [esp+0x58]
        mov byte ptr ss : [ebp+0x30C], 1
        fcomp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [edi+0xB0]
        mov dword ptr ss : [ebp+0x2F0], edx
        fnstsw ax
        test ah, 5
        jp public_62dea56
        mov ecx, esi
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0x2D8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        lea edx, ds:[esi+0xC]
        mov ecx, dword ptr ds : [edx]
        lea eax, ss:[ebp+0x2E4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ss : [esp+0x37], 1
        mov dword ptr ds : [eax+8], edx
        public_62dea56 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x54]
        inc eax
        add esi, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x6C], eax
        jl public_62de8e0
        mov al, byte ptr ss : [esp+0x37]
        test al, al
        jne public_62ded6a
        public_62dea7a : nop
        fld dword ptr ss : [ebp+0x310]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jp public_62ded56
        mov al, byte ptr ss : [esp+0x23]
        test al, al
        je public_62ded56
        push 1
        lea eax, ss:[esp+0x134]
        push eax
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        call public_6289c20
        add esp, 0x14
        test eax, eax
        jle public_62ded56
        fld dword ptr ss : [esp+0x88]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x90]
        fsub dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x8C]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
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
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0xA0]
        fld dword ptr ss : [esp+0xA4]
        fmul dword ptr ss : [esp+0x2C]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xA4]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x9C]
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0xA0]
        fmul dword ptr ss : [esp+0x28]
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0xA4]
        fld dword ptr ss : [esp+0xA0]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x9C]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld st(0)
        fabs 
        fcomp qword ptr ds : [public_63a0610]
        fnstsw ax
        test ah, 0x41
        jne public_62debe1
        mov eax, dword ptr ss : [esp+0x28]
        fstp st(0)
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        jmp public_62decaf
        public_62debe1 : nop
        fsubr qword ptr ds : [public_6399410]
        push ecx
        fmul dword ptr ds : [public_63ec6a8]
        lea ecx, ss:[esp+0x18]
        lea edx, ss:[esp+0x3C]
        fmul dword ptr ds : [public_639c13c]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x60]
        fsin 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6288830
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [public_63fca10]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x64], ecx
        mov dword ptr ss : [esp+0x68], edx
        jne public_62dec62
        call public_6391cf0
        mov dword ptr ds : [public_63fca10], eax
        public_62dec62 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x5C]
        push edx
        lea edx, ss:[esp+0x110]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_63fca10]
        test eax, eax
        jne public_62dec88
        call public_6391cf0
        mov dword ptr ds : [public_63fca10], eax
        public_62dec88 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x9C]
        push edx
        lea edx, ss:[esp+0x110]
        push edx
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        public_62decaf : nop
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_63a0608]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x20], eax
        fstp dword ptr ss : [esp+8]
        lea esi, ss:[ebp+0x2F4]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi], eax
        fmul dword ptr ds : [public_63a0608]
        mov dword ptr ds : [esi+4], ecx
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ds : [esi+8], edx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_63a0608]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x98]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x9C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xA0]
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x9C]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x90]
        mov ecx, dword ptr ss : [esp+0x94]
        mov edx, dword ptr ss : [esp+0x98]
        jmp public_62df2a8
        public_62ded56 : nop
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x2D4], 0
        pop ebp
        pop ebx
        add esp, 0x220
        ret 4
        public_62ded6a : nop
        fld dword ptr ss : [esp+0x24]
        mov byte ptr ss : [ebp+0x2D4], 1
        fmul qword ptr ds : [public_639df88]
        mov dword ptr ss : [esp+0x6C], 3
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp+0xB8]
        public_62ded94 : nop
        call ebx
        mov dword ptr ss : [esp+0x54], eax
        fild dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [public_63997d0]
        fmul dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x54]
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xB8]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_63fca10]
        test eax, eax
        fmul dword ptr ds : [public_63997d0]
        fmul qword ptr ds : [public_639c9e0]
        fld st(0)
        fcos 
        fmul dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x14]
        fsin 
        fmul dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x18]
        jne public_62dedf6
        call public_6391cf0
        mov dword ptr ds : [public_63fca10], eax
        public_62dedf6 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0xEC]
        push edx
        lea edx, ss:[esp+0x64]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x50]
        sub esp, 0xC
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x3C]
        fsub dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x40]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x24], ecx
        fld dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x34]
        fsub dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x28], edx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x2C]
        push 1
        fmul dword ptr ss : [esp+0x30]
        lea eax, ss:[esp+0xCC]
        fld dword ptr ss : [esp+0x34]
        push eax
        fmul dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x1C]
        push ecx
        faddp 
        lea edx, ss:[esp+0x54]
        fld dword ptr ss : [esp+0x34]
        push edx
        fmul dword ptr ss : [esp+0x38]
        push eax
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x44]
        call public_6289c20
        add esp, 0x14
        test eax, eax
        jle public_62def95
        fld dword ptr ds : [public_63a0604]
        mov esi, dword ptr ss : [ebp+0x2D0]
        or edi, 0xFFFFFFFF
        xor ecx, ecx
        lea ecx, ds:[ecx]
        public_62def00 : nop
        mov eax, esi
        cdq 
        mov ebx, 0x19
        idiv ebx
        lea ebx, ss:[ebp+0x14]
        imul edx, 0x1C
        fld dword ptr ds : [edx+ebx]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        add edx, ebx
        test ah, 0x41
        jnp public_62defe7
        fcom dword ptr ds : [edx]
        fnstsw ax
        test ah, 0x41
        jne public_62def35
        fstp st(0)
        mov edi, ecx
        fld dword ptr ds : [edx]
        public_62def35 : nop
        inc ecx
        inc esi
        cmp ecx, 0x19
        jl public_62def00
        imul edi, 0x1C
        fstp st(0)
        add edi, ebx
        mov edx, edi
        public_62def45 : nop
        test edx, edx
        mov ebx, dword ptr ds : [public_6399308]
        je public_62def95
        mov eax, dword ptr ss : [esp+0xCC]
        lea ecx, ds:[edx+4]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0xD0]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0xD4]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ss : [esp+0xD8]
        lea ecx, ds:[edx+0x10]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0xDC]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0xE0]
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [edx], 0x3F800000
        public_62def95 : nop
        dec dword ptr ss : [esp+0x6C]
        jne public_62ded94
        mov edx, dword ptr ss : [esp+0x8C]
        lea ecx, ss:[esp+0x5C]
        push ecx
        push edx
        lea ecx, ss:[ebp+0x14]
        call public_62de2a0
        test al, al
        jne public_62deff4
        public_62defb8 : nop
        mov byte ptr ss : [ebp+0x2D4], 0
        mov byte ptr ss : [ebp+0x30C], 0
        xor eax, eax
        pop edi
        mov dword ptr ss : [ebp+0x2F0], eax
        mov dword ptr ss : [ebp+0x314], eax
        pop esi
        mov dword ptr ss : [ebp+0x310], eax
        pop ebp
        pop ebx
        add esp, 0x220
        ret 4
        public_62defe7 : nop
        fstp st(0)
        mov dword ptr ds : [ebx+0x2BC], ecx
        jmp public_62def45
        public_62deff4 : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x60]
        lea esi, ss:[ebp+0x2F4]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [public_63a05fc]
        mov dword ptr ss : [ebp+0x310], edx
        fld dword ptr ss : [ebp+0x2E0]
        fsub dword ptr ss : [esp+0x50]
        sub esp, 0xC
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x2DC]
        fsub dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x2D8]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x40]
        mov ecx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fst dword ptr ss : [esp+0x8C]
        fld dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x8C]
        fcomp dword ptr ds : [public_639a1d0]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        fnstsw ax
        test ah, 0x41
        jne public_62df0c1
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fdiv dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [ebp+0x314]
        jmp public_62df0cb
        public_62df0c1 : nop
        mov dword ptr ss : [ebp+0x314], 0
        public_62df0cb : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [esi]
        faddp 
        fst dword ptr ss : [esp+0x10]
        fabs 
        fcomp qword ptr ds : [public_639fd40]
        fnstsw ax
        test ah, 0x41
        jp public_62df220
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ds : [esi+4]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ds : [esi]
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x10]
        fsubr qword ptr ds : [public_6399410]
        fmul dword ptr ds : [public_63a0600]
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62df15f
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_62df15f : nop
        fmul dword ptr ds : [public_639c13c]
        push ecx
        lea edx, ss:[esp+0x18]
        lea eax, ss:[esp+0x60]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x3C]
        fsin 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call public_6288830
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [public_63fca10]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], edx
        jne public_62df1d4
        call public_6391cf0
        mov dword ptr ds : [public_63fca10], eax
        public_62df1d4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x110]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_63fca10]
        test eax, eax
        jne public_62df1fa
        call public_6391cf0
        mov dword ptr ds : [public_63fca10], eax
        public_62df1fa : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        lea edx, ss:[esp+0x110]
        push edx
        lea edx, ss:[esp+0x64]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x64]
        jmp public_62df22c
        public_62df220 : nop
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x78]
        public_62df22c : nop
        mov dword ptr ss : [esp+0x14], eax
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], edx
        fmul dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi], eax
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ecx
        fmul dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+8], edx
        fstp dword ptr ss : [esp+0xC4]
        fxch 
        fmul dword ptr ds : [public_639e884]
        fstp dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [public_639e884]
        fld dword ptr ss : [esp+0xC4]
        fmul dword ptr ds : [public_639e884]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x38]
        fxch 
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x40]
        public_62df2a8 : nop
        add ebp, 0x300
        mov dword ptr ss : [ebp], eax
        pop edi
        mov dword ptr ss : [ebp+4], ecx
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0x220
        ret 4
        UNREACHABLE_TRAP(0x62de490)
    }
}

#undef public_62de4b1
#undef public_62de4b3
#undef public_62de4c0
#undef public_62de4e9
#undef public_62de522
#undef public_62de554
#undef public_62de600
#undef public_62de6f4
#undef public_62de743
#undef public_62de7e0
#undef public_62de84d
#undef public_62de8ba
#undef public_62de8e0
#undef public_62de9fe
#undef public_62dea56
#undef public_62dea7a
#undef public_62debe1
#undef public_62dec62
#undef public_62dec88
#undef public_62decaf
#undef public_62ded56
#undef public_62ded6a
#undef public_62ded94
#undef public_62dedf6
#undef public_62def00
#undef public_62def35
#undef public_62def45
#undef public_62def95
#undef public_62defb8
#undef public_62defe7
#undef public_62deff4
#undef public_62df0c1
#undef public_62df0cb
#undef public_62df15f
#undef public_62df1d4
#undef public_62df1fa
#undef public_62df220
#undef public_62df22c
#undef public_62df2a8
