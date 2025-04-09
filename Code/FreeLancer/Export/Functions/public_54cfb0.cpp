#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410960);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_537f40);
CLANG_FORWARD_PROC_SYMBOL(public_54cfb0);
CLANG_FORWARD_PROC_SYMBOL(public_555470);

#define public_54d0a7 _public_54d0a7
#define public_54d11e _public_54d11e
#define public_54d123 _public_54d123
#define public_54d153 _public_54d153
#define public_54d170 _public_54d170
#define public_54d1b5 _public_54d1b5
#define public_54d275 _public_54d275
#define public_54d317 _public_54d317
#define public_54d319 _public_54d319
#define public_54d323 _public_54d323
#define public_54d33c _public_54d33c
#define public_54d355 _public_54d355
#define public_54d36e _public_54d36e
#define public_54d387 _public_54d387
#define public_54d3a0 _public_54d3a0
#define public_54d3b9 _public_54d3b9
#define public_54d3fe _public_54d3fe
#define public_54d404 _public_54d404

PROC_DECLARE(0x54cfb0, internal_54cfb0, public_54cfb0);
extern "C" NAKED register_t __cdecl internal_54cfb0()
{
    __asm
    {
        sub esp, 0x110
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax]
        push 0
        mov dword ptr ss : [esp+0x40], ecx
        mov edx, dword ptr ds : [eax+4]
        push 0x42C80000
        lea ecx, ss:[esp+0x44]
        push ecx
        mov dword ptr ss : [esp+0x4C], edx
        mov eax, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x84]
        push 0x10
        push edx
        mov dword ptr ss : [esp+0x58], eax
        call public_537f40
        mov ebx, eax
        add esp, 0x14
        test ebx, ebx
        mov dword ptr ss : [esp+0x34], ebx
        je public_54d404
        push ebp
        push edi
        call public_555470
        movzx ecx, byte ptr ds : [eax+2]
        movzx edx, byte ptr ds : [eax+1]
        movzx eax, byte ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        xor ebp, ebp
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5c7f68]
        fxch 
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0x30]
        fstp dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0x34]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+0x38]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x20], ecx
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x28], eax
        xor eax, eax
        test ebx, ebx
        mov dword ptr ss : [esp+0x2C], eax
        jle public_54d123
        lea edi, ss:[esp+0xC8]
        public_54d0a7 : nop
        cmp eax, 4
        jge public_54d123
        mov ecx, dword ptr ss : [esp+ebp*4+0x80]
        cmp dword ptr ds : [ecx+0xB0], 3
        jne public_54d11e
        lea edx, ds:[edi+4]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ebx, ds:[edi-8]
        push ebx
        lea edx, ss:[esp+0x50]
        push edx
        call public_410960
        fld dword ptr ds : [edi]
        fld dword ptr ds : [edi-4]
        mov ecx, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ebx]
        inc ecx
        fld st(0)
        mov dword ptr ss : [esp+0x2C], ecx
        fmul st, st(1)
        add edi, 0x18
        fld st(2)
        mov eax, ecx
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [ebx]
        fstp dword ptr ds : [ebx]
        mov ebx, dword ptr ss : [esp+0x3C]
        fld st(0)
        fmul dword ptr ds : [edi-0x1C]
        fstp dword ptr ds : [edi-0x1C]
        fmul dword ptr ds : [edi-0x18]
        fstp dword ptr ds : [edi-0x18]
        public_54d11e : nop
        inc ebp
        cmp ebp, ebx
        jl public_54d0a7
        public_54d123 : nop
        cmp eax, 4
        fld dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        jl public_54d153
        mov dword ptr ss : [esp+0x2C], 4
        public_54d153 : nop
        mov ecx, dword ptr ds : [esi+0x44]
        test ecx, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [esp+0x10], 0
        jle public_54d3fe
        lea ebx, ds:[eax+0x14]
        lea esp, ss:[esp]
        public_54d170 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        jle public_54d323
        fld dword ptr ds : [public_6140a4]
        lea edi, ss:[esp+0xD0]
        fchs 
        mov ebp, eax
        fstp dword ptr ss : [esp+0x3C]
        public_54d1b5 : nop
        fld dword ptr ds : [edi-0x10]
        fmul dword ptr ds : [ebx-4]
        fld dword ptr ds : [edi-8]
        fmul dword ptr ds : [ebx+4]
        faddp 
        fld dword ptr ds : [edi-0xC]
        fmul dword ptr ds : [ebx]
        faddp 
        fst dword ptr ss : [esp+0x40]
        fcomp dword ptr ss : [esp+0x3C]
        fnstsw ax
        test ah, 0x41
        jne public_54d275
        fld dword ptr ds : [public_6140a4]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x80]
        fld dword ptr ds : [public_6140a4]
        fadd dword ptr ds : [public_5c75dc]
        fdivp 
        fld dword ptr ds : [edi-4]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [edi]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [edi+4]
        fmul st, st(3)
        fstp dword ptr ss : [esp+8]
        fmul st, st(2)
        fstp dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_422b80
        fld dword ptr ss : [esp+0x7C]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x74]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x84]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x80]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        public_54d275 : nop
        fld dword ptr ss : [esp+0x40]
        fchs 
        fcom dword ptr ss : [esp+0x3C]
        fnstsw ax
        test ah, 0x41
        jne public_54d317
        fadd dword ptr ds : [public_6140a4]
        sub esp, 0xC
        fld dword ptr ds : [public_6140a4]
        lea ecx, ss:[esp+0x5C]
        fadd dword ptr ds : [public_5c75dc]
        fdivp 
        fld dword ptr ds : [edi-4]
        fmul dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [edi]
        fld dword ptr ds : [esi+0x14]
        fmul dword ptr ds : [edi+4]
        fmul st, st(3)
        fstp dword ptr ss : [esp+8]
        fmul st, st(2)
        fstp dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_422b80
        fld dword ptr ss : [esp+0x58]
        sub esp, 0xC
        fadd dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x68]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        jmp public_54d319
        public_54d317 : nop
        fstp st(0)
        public_54d319 : nop
        add edi, 0x18
        dec ebp
        jne public_54d1b5
        public_54d323 : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_54d33c
        mov dword ptr ss : [esp+0x30], 0x3F800000
        public_54d33c : nop
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_54d355
        mov dword ptr ss : [esp+0x34], 0x3F800000
        public_54d355 : nop
        fld dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_54d36e
        mov dword ptr ss : [esp+0x38], 0x3F800000
        public_54d36e : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_54d387
        mov dword ptr ss : [esp+0x14], 0x3F800000
        public_54d387 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_54d3a0
        mov dword ptr ss : [esp+0x18], 0x3F800000
        public_54d3a0 : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jnp public_54d3b9
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        public_54d3b9 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        lea eax, ds:[ebx+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ds:[ebx+0x14]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x44]
        inc eax
        add ebx, 0x3C
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jl public_54d170
        public_54d3fe : nop
        pop edi
        mov byte ptr ds : [esi+0x7C], 1
        pop ebp
        public_54d404 : nop
        pop esi
        pop ebx
        add esp, 0x110
        ret 
        UNREACHABLE_TRAP(0x54cfb0)
    }
}

#undef public_54d0a7
#undef public_54d11e
#undef public_54d123
#undef public_54d153
#undef public_54d170
#undef public_54d1b5
#undef public_54d275
#undef public_54d317
#undef public_54d319
#undef public_54d323
#undef public_54d33c
#undef public_54d355
#undef public_54d36e
#undef public_54d387
#undef public_54d3a0
#undef public_54d3b9
#undef public_54d3fe
#undef public_54d404
