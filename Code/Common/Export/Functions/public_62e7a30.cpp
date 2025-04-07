#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c47c0);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62d09b0);
CLANG_FORWARD_PROC_SYMBOL(public_62e0a60);
CLANG_FORWARD_PROC_SYMBOL(public_62e18f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e59b0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5af0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6070);
CLANG_FORWARD_PROC_SYMBOL(public_62e6150);
CLANG_FORWARD_PROC_SYMBOL(public_62e7a30);
CLANG_FORWARD_PROC_SYMBOL(public_62e8270);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);

#define public_62e7a7d _public_62e7a7d
#define public_62e7ad2 _public_62e7ad2
#define public_62e7ad4 _public_62e7ad4
#define public_62e7af3 _public_62e7af3
#define public_62e7af5 _public_62e7af5
#define public_62e7b26 _public_62e7b26
#define public_62e7b37 _public_62e7b37
#define public_62e7b39 _public_62e7b39
#define public_62e7b72 _public_62e7b72
#define public_62e7b74 _public_62e7b74
#define public_62e7bed _public_62e7bed
#define public_62e7c02 _public_62e7c02
#define public_62e7c04 _public_62e7c04
#define public_62e7c42 _public_62e7c42
#define public_62e7c44 _public_62e7c44
#define public_62e7c6d _public_62e7c6d
#define public_62e7c6f _public_62e7c6f
#define public_62e7c87 _public_62e7c87
#define public_62e7c8f _public_62e7c8f
#define public_62e7c9d _public_62e7c9d
#define public_62e7cb2 _public_62e7cb2
#define public_62e7cd4 _public_62e7cd4
#define public_62e7cd6 _public_62e7cd6
#define public_62e7ce7 _public_62e7ce7
#define public_62e7cf0 _public_62e7cf0
#define public_62e7d28 _public_62e7d28
#define public_62e7e2b _public_62e7e2b
#define public_62e7e6b _public_62e7e6b
#define public_62e7eb5 _public_62e7eb5
#define public_62e7f06 _public_62e7f06
#define public_62e7f35 _public_62e7f35
#define public_62e8076 _public_62e8076
#define public_62e81b5 _public_62e81b5
#define public_62e823c _public_62e823c
#define public_62e823e _public_62e823e
#define public_62e8242 _public_62e8242
#define public_62e825a _public_62e825a

PROC_DECLARE(0x62e7a30, internal_62e7a30, public_62e7a30);
extern "C" NAKED register_t __cdecl internal_62e7a30()
{
    __asm
    {
        sub esp, 0x184
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x68]
        call public_6347e60
        fst dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_63a078c]
        fnstsw ax
        test ah, 5
        jp public_62e7a7d
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x184
        ret 8
        public_62e7a7d : nop
        mov eax, dword ptr ds : [edi+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        xor ebp, ebp
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x54], 0x5368D4A5
        call dword ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [edi+4]
        add esi, 0x14FC
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_62c47c0
        fld dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        fmul dword ptr ds : [public_63ec6b0]
        fstp dword ptr ss : [esp+0x74]
        je public_62e7ad2
        add eax, 0xFFFFFFF8
        jmp public_62e7ad4
        public_62e7ad2 : nop
        xor eax, eax
        public_62e7ad4 : nop
        push eax
        lea eax, ss:[esp+0x60]
        push eax
        call public_62e6150
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        add esp, 8
        cmp eax, ebp
        je public_62e7af3
        add eax, 0xFFFFFFF8
        jmp public_62e7af5
        public_62e7af3 : nop
        xor eax, eax
        public_62e7af5 : nop
        push 3
        push 0x3F800000
        push eax
        call public_62e5af0
        fmul qword ptr ds : [public_639df88]
        add esp, 0xC
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jp public_62e7b26
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x184
        ret 8
        public_62e7b26 : nop
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        je public_62e7b37
        add eax, 0xFFFFFFF8
        jmp public_62e7b39
        public_62e7b37 : nop
        xor eax, eax
        public_62e7b39 : nop
        push 3
        push ebp
        push eax
        call public_62e59b0
        fdiv dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        add esp, 0xC
        cmp eax, ebp
        fadd dword ptr ds : [public_63a07e0]
        fst dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x30]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x78]
        fstp st(0)
        je public_62e7b72
        lea ecx, ds:[eax-8]
        jmp public_62e7b74
        public_62e7b72 : nop
        xor ecx, ecx
        public_62e7b74 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x24]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x28]
        test eax, eax
        jne public_62e7bed
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_639e6d0]
        fstp dword ptr ss : [esp+0x84]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_639e6d0]
        fstp dword ptr ss : [esp+0x8C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_639e6d0]
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_639e6d0]
        fstp dword ptr ss : [esp+0x88]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_639e6d0]
        fstp dword ptr ss : [esp+0x90]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_639e6d0]
        fstp dword ptr ss : [esp+0x98]
        public_62e7bed : nop
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov dword ptr ss : [esp+0x38], ebp
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        je public_62e7c02
        lea ecx, ds:[eax-8]
        jmp public_62e7c04
        public_62e7c02 : nop
        xor ecx, ecx
        public_62e7c04 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x38]
        push eax
        call dword ptr ds : [edx+0xB0]
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov dword ptr ss : [esp+0x10], ebp
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        je public_62e7c8f
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_62e7c8f
        lea ecx, ss:[esp+0x3C]
        call public_62e8270
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        je public_62e7c42
        lea ecx, ds:[eax-8]
        jmp public_62e7c44
        public_62e7c42 : nop
        xor ecx, ecx
        public_62e7c44 : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[edi+8]
        push eax
        lea eax, ss:[esp+0x40]
        push eax
        call dword ptr ds : [edx+0x118]
        test byte ptr ss : [esp+0x3C], 2
        jne public_62e7c87
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        je public_62e7c6d
        lea ecx, ds:[eax-8]
        jmp public_62e7c6f
        public_62e7c6d : nop
        xor ecx, ecx
        public_62e7c6f : nop
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        mov al, byte ptr ds : [edi+0x1D]
        push eax
        push 0x207F8010
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x104]
        public_62e7c87 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebp
        jne public_62e7c9d
        public_62e7c8f : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x184
        ret 8
        public_62e7c9d : nop
        mov eax, dword ptr ds : [ecx+0x800]
        xor edx, edx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x4C], edx
        jbe public_62e825a
        push ebx
        public_62e7cb2 : nop
        mov eax, dword ptr ds : [ecx+edx*8]
        cmp eax, ebp
        je public_62e8242
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_62e8242
        mov eax, dword ptr ds : [ecx+edx*8]
        cmp eax, ebp
        je public_62e7cd4
        lea ecx, ds:[eax-8]
        jmp public_62e7cd6
        public_62e7cd4 : nop
        xor ecx, ecx
        public_62e7cd6 : nop
        mov eax, dword ptr ds : [edi+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        je public_62e7ce7
        add eax, 0xFFFFFFF8
        jmp public_62e7cf0
        public_62e7ce7 : nop
        xor eax, eax
        lea esp, ss:[esp]
        public_62e7cf0 : nop
        push ecx
        push eax
        lea ecx, ss:[esp+0xCC]
        call public_62d09b0
        mov al, byte ptr ss : [esp+0x141]
        test al, al
        jne public_62e7d28
        mov ecx, dword ptr ss : [esp+0x148]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xCC]
        push eax
        call dword ptr ds : [edx+0x88]
        mov byte ptr ss : [esp+0x141], 1
        public_62e7d28 : nop
        mov ecx, dword ptr ss : [esp+0x19C]
        test dword ptr ss : [esp+0xCC], ecx
        je public_62e823e
        lea ecx, ss:[esp+0xC4]
        call public_62c47c0
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edx+0x24]
        push eax
        lea eax, ss:[esp+0xD4]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_6288800
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x34]
        add esp, 0xC
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_62e823e
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fcomp dword ptr ss : [esp+0x7C]
        fnstsw ax
        test ah, 0x41
        je public_62e823e
        mov ecx, dword ptr ss : [esp+0x148]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ss : [esp+0x198]
        je public_62e823e
        mov eax, dword ptr ds : [edi+4]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x148]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp eax, esi
        je public_62e823e
        mov al, byte ptr ss : [esp+0x141]
        test al, al
        jne public_62e7e2b
        mov ecx, dword ptr ss : [esp+0x148]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xCC]
        push eax
        call dword ptr ds : [edx+0x88]
        mov byte ptr ss : [esp+0x141], 1
        public_62e7e2b : nop
        test dword ptr ss : [esp+0xCC], 0x207F8010
        je public_62e823e
        mov al, byte ptr ss : [esp+0x142]
        test al, al
        jne public_62e7e6b
        mov ecx, dword ptr ss : [esp+0x148]
        lea eax, ss:[esp+0xD0]
        push eax
        lea eax, ss:[esp+0xE0]
        mov byte ptr ss : [esp+0x146], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e7e6b : nop
        fld dword ptr ss : [esp+0xDC]
        fcomp dword ptr ds : [public_63a0608]
        fnstsw ax
        test ah, 0x41
        je public_62e823e
        mov al, byte ptr ss : [esp+0x141]
        test al, al
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x38], ecx
        jne public_62e7eb5
        mov ecx, dword ptr ss : [esp+0x148]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xCC]
        push eax
        call dword ptr ds : [edx+0x88]
        mov byte ptr ss : [esp+0x141], 1
        public_62e7eb5 : nop
        mov ebx, dword ptr ss : [esp+0xCC]
        mov ecx, dword ptr ss : [esp+0x148]
        lea eax, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x54], ebp
        mov edx, dword ptr ds : [ecx]
        shr ebx, 0x1D
        push eax
        and bl, 1
        call dword ptr ds : [edx+0xB0]
        mov ecx, dword ptr ss : [esp+0x54]
        cmp ecx, ebp
        je public_62e7f06
        cmp dword ptr ss : [esp+0x3C], ebp
        je public_62e7f06
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        cmp esi, eax
        jne public_62e7f06
        mov bl, 1
        mov dword ptr ss : [esp+0x38], 0x3E99999A
        public_62e7f06 : nop
        mov al, byte ptr ss : [esp+0x142]
        test al, al
        jne public_62e7f35
        mov ecx, dword ptr ss : [esp+0x148]
        lea eax, ss:[esp+0xD0]
        push eax
        lea eax, ss:[esp+0xE0]
        mov byte ptr ss : [esp+0x146], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62e7f35 : nop
        mov ecx, dword ptr ss : [esp+0xD0]
        mov eax, dword ptr ss : [esp+0xD8]
        mov edx, dword ptr ss : [esp+0xD4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x148]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x164]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x164]
        fchs 
        fstp dword ptr ss : [esp+0x5C]
        call public_6347e60
        test bl, bl
        fmul dword ptr ss : [esp+0x38]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        je public_62e8076
        mov ecx, dword ptr ss : [esp+0x148]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xB8]
        push eax
        lea eax, ss:[esp+0xB0]
        push eax
        call dword ptr ds : [edx+0x28]
        test eax, eax
        jne public_62e823e
        fld dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0xB8]
        fadd dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0xAC]
        mov edx, dword ptr ss : [esp+0xB0]
        mov dword ptr ss : [esp+0x14C], ecx
        mov ecx, dword ptr ss : [esp+0xBC]
        mov dword ptr ss : [esp+0x150], eax
        mov eax, dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0xB4]
        mov dword ptr ss : [esp+0x158], ecx
        fadd dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x154], edx
        mov edx, dword ptr ss : [esp+0xC0]
        lea ecx, ss:[esp+0x14C]
        push ecx
        fstp dword ptr ss : [esp+0x160]
        mov ecx, dword ptr ss : [esp+0x14C]
        mov dword ptr ss : [esp+0x164], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x84], eax
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        lea eax, ss:[esp+0x90]
        push eax
        push ecx
        call public_62e0a60
        mov edx, dword ptr ss : [esp+0x90]
        add esp, 0x10
        dec eax
        neg eax
        sbb al, al
        inc al
        mov dword ptr ss : [esp+0x98], edx
        jmp public_62e81b5
        public_62e8076 : nop
        lea eax, ss:[esp+0xC4]
        push eax
        mov dword ptr ss : [esp+0x88], 0
        call public_62e6070
        fmul dword ptr ds : [public_63ec6b0]
        mov ecx, dword ptr ss : [esp+0x14C]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        fstp dword ptr ss : [esp+0x40]
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x188]
        call public_628b030
        lea ecx, ss:[esp+0xA0]
        push ecx
        lea ecx, ss:[esp+0x180]
        call public_62c5a70
        fld dword ptr ss : [esp+0x10]
        fchs 
        sub esp, 0xC
        fld dword ptr ss : [esp+0xB4]
        lea ecx, ss:[esp+0x78]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xB0]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xAC]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        fld dword ptr ss : [esp+0x74]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x17C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x7C]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x78]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x18]
        fchs 
        lea esi, ds:[edx+0x24]
        fld dword ptr ss : [esp+0x60]
        sub esp, 0xC
        fmul st, st(1)
        lea ecx, ss:[esp+0x194]
        fld dword ptr ss : [esp+0x70]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x74]
        fmul st, st(3)
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+8]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_628b030
        lea eax, ss:[esp+0x84]
        push eax
        mov eax, dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x174]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        lea ecx, ss:[esp+0x198]
        mov edx, dword ptr ss : [esp+0x88]
        push ecx
        push esi
        push edx
        call public_62e18f0
        add esp, 0x1C
        public_62e81b5 : nop
        test al, al
        je public_62e823e
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [eax+0x24]
        add eax, 0x24
        fld dword ptr ss : [esp+0x20]
        mov edx, 0x5F3759DF
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [eax+8]
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
        fst dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x40]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmulp 
        fcom dword ptr ss : [esp+0x58]
        fnstsw ax
        test ah, 5
        jp public_62e823c
        mov eax, dword ptr ss : [esp+0x148]
        fstp dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x48], eax
        jmp public_62e823e
        public_62e823c : nop
        fstp st(0)
        public_62e823e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        public_62e8242 : nop
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [ecx+0x800]
        inc edx
        cmp edx, eax
        mov dword ptr ss : [esp+0x50], edx
        jb public_62e7cb2
        pop ebx
        public_62e825a : nop
        mov eax, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        pop ebp
        add esp, 0x184
        ret 8
        UNREACHABLE_TRAP(0x62e7a30)
    }
}

#undef public_62e7a7d
#undef public_62e7ad2
#undef public_62e7ad4
#undef public_62e7af3
#undef public_62e7af5
#undef public_62e7b26
#undef public_62e7b37
#undef public_62e7b39
#undef public_62e7b72
#undef public_62e7b74
#undef public_62e7bed
#undef public_62e7c02
#undef public_62e7c04
#undef public_62e7c42
#undef public_62e7c44
#undef public_62e7c6d
#undef public_62e7c6f
#undef public_62e7c87
#undef public_62e7c8f
#undef public_62e7c9d
#undef public_62e7cb2
#undef public_62e7cd4
#undef public_62e7cd6
#undef public_62e7ce7
#undef public_62e7cf0
#undef public_62e7d28
#undef public_62e7e2b
#undef public_62e7e6b
#undef public_62e7eb5
#undef public_62e7f06
#undef public_62e7f35
#undef public_62e8076
#undef public_62e81b5
#undef public_62e823c
#undef public_62e823e
#undef public_62e8242
#undef public_62e825a
