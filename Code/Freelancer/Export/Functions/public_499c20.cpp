#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4143c0);
CLANG_FORWARD_PROC_SYMBOL(public_4176c0);
CLANG_FORWARD_PROC_SYMBOL(public_417730);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_499c20);
CLANG_FORWARD_PROC_SYMBOL(public_49a2f0);

#define public_499c53 _public_499c53
#define public_499c6c _public_499c6c
#define public_499fce _public_499fce
#define public_49a086 _public_49a086
#define public_49a09f _public_49a09f
#define public_49a0b0 _public_49a0b0
#define public_49a10b _public_49a10b
#define public_49a11b _public_49a11b
#define public_49a1af _public_49a1af
#define public_49a1c7 _public_49a1c7

PROC_DECLARE(0x499c20, internal_499c20, public_499c20);
extern "C" NAKED register_t __cdecl internal_499c20()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+8]
        fmul dword ptr ds : [public_5d3eec]
        mov eax, dword ptr ds : [esi+0x7D0]
        xor ebx, ebx
        cmp eax, 1
        fmul dword ptr ds : [public_5d3ee8]
        fstp dword ptr ss : [esp+0x10]
        je public_499c53
        cmp eax, ebx
        jne public_499c6c
        public_499c53 : nop
        cmp byte ptr ds : [esi+0x478], bl
        je public_499fce
        cmp dword ptr ds : [esi+0x4A4], 2
        jne public_499fce
        public_499c6c : nop
        lea edi, ds:[esi+0x418]
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x30], edx
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x34], eax
        fld dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x38], ecx
        fmul dword ptr ds : [public_5c75e0]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x3C]
        fmul dword ptr ds : [public_5c75e0]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, edi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x24], eax
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x28], ecx
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], edx
        fmul dword ptr ds : [public_5c75e0]
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [public_5c75e0]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x20], edx
        fld dword ptr ds : [esi+0x3F8]
        lea eax, ds:[esi+0x46C]
        fsub dword ptr ds : [public_5c75dc]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        fst dword ptr ss : [esp+0x64]
        fmul st, st(2)
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], eax
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x64]
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x30], ecx
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fsub st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [esi+0x3F8]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x38]
        fadd st, st(1)
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x3C]
        fstp st(0)
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ds : [esi+0x3F8]
        mov ebp, dword ptr ss : [esp+0x68]
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x3C], edx
        fmul st, st(1)
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x40], eax
        fmul st, st(1)
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x28], eax
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x44], ecx
        fstp st(0)
        mov ecx, dword ptr ds : [edi+8]
        fld dword ptr ss : [ebp+0x30]
        mov dword ptr ss : [esp+0x2C], ecx
        fadd dword ptr ds : [esi+0x4A8]
        fld dword ptr ds : [esi+0x4A8]
        fadd st(0), st
        fdivp 
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [ebp+0x38]
        fadd dword ptr ds : [esi+0x4AC]
        fld dword ptr ds : [esi+0x4AC]
        fadd st(0), st
        fdivp 
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x30]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x34]
        fadd st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c75e0]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x28]
        fdivr dword ptr ss : [esp+0x3C]
        fxch 
        fdiv dword ptr ss : [esp+0x28]
        fchs 
        fstp dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [public_5d043c]
        fld dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5d3ee4]
        push ebp
        fild dword ptr ds : [public_610850]
        push edx
        lea ecx, ss:[esp+0x1C]
        lea edx, ss:[esp+0x6C]
        fdivr dword ptr ss : [ebp+0x7C]
        fst dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_5c75e0]
        mov eax, dword ptr ss : [esp+0x70]
        push eax
        push ecx
        fsubr st, st(2)
        push edx
        mov ecx, esi
        fstp dword ptr ss : [esp+0x78]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        call public_49a2f0
        test al, al
        je public_49a1c7
        fld dword ptr ss : [esp+0x64]
        mov eax, dword ptr ds : [esi+0x3D0]
        fld dword ptr ss : [esp+0x14]
        push eax
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x3D0]
        push 0x3CF5C28F
        fxch 
        push 0x3F800000
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [public_5cb88c]
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        fstp dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], ebx
        fstp dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x68], ebx
        call public_4176c0
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ds : [public_5cb88c]
        mov ecx, eax
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        lea eax, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x50], edx
        fstp dword ptr ss : [esp+0x50]
        push eax
        mov dword ptr ss : [esp+0x50], ecx
        call public_417730
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [public_5d3ee0]
        lea ecx, ss:[esp+0x40]
        push ecx
        mov dword ptr ss : [esp+0x38], eax
        fstp dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x3C], edx
        call public_417730
        mov ecx, dword ptr ss : [ebp+0x78]
        mov dword ptr ss : [esp+0x2C], eax
        add esp, 0x14
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, edx
        jmp public_49a1af
        public_499fce : nop
        mov edi, dword ptr ss : [esp+0x68]
        lea edx, ds:[edi+0x30]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x30], eax
        fld dword ptr ss : [esp+0x30]
        fdiv dword ptr ds : [esi+0x4A8]
        mov dword ptr ss : [esp+0x38], edx
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        push eax
        mov dword ptr ss : [esp+0x3C], ecx
        lea edx, ss:[esp+0x1C]
        lea eax, ss:[esp+0x6C]
        fld dword ptr ss : [esp+0x40]
        fdiv dword ptr ds : [esi+0x4AC]
        fxch 
        fmul dword ptr ds : [public_5d043c]
        fstp dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_5d3ee4]
        fild dword ptr ds : [public_610850]
        fdivr dword ptr ds : [edi+0x7C]
        fst dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ss : [esp+0x70]
        push ecx
        push edx
        fsubr dword ptr ss : [esp+0x40]
        push eax
        mov ecx, esi
        fstp dword ptr ss : [esp+0x78]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        call public_49a2f0
        test al, al
        fld dword ptr ss : [esp+0x64]
        jne public_49a11b
        fmul qword ptr ds : [public_5d3ed8]
        mov eax, dword ptr ds : [esi+0x86C]
        cmp eax, ebx
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24], ecx
        fld dword ptr ss : [esp+0x68]
        fmul qword ptr ds : [public_5d3ed0]
        fstp dword ptr ss : [esp+0x68]
        jne public_49a086
        xor edx, edx
        jmp public_49a09f
        public_49a086 : nop
        mov ecx, dword ptr ds : [esi+0x870]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_49a09f : nop
        cmp edx, ebx
        jle public_49a1c7
        xor edi, edi
        lea esp, ss:[esp]
        public_49a0b0 : nop
        mov ecx, dword ptr ds : [esi+0x86C]
        fld dword ptr ds : [ecx+edi+8]
        add ecx, edi
        fadd dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jnp public_49a10b
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 5
        jnp public_49a10b
        fld dword ptr ds : [ecx+0xC]
        fadd dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 5
        jnp public_49a10b
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 5
        jnp public_49a10b
        mov ecx, dword ptr ds : [ecx+0x10]
        cmp ecx, ebx
        je public_49a10b
        mov byte ptr ds : [ecx+0x81], 1
        public_49a10b : nop
        add edi, 0x14
        dec edx
        jne public_49a0b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        public_49a11b : nop
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x3D0]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x3D0]
        push ecx
        fxch 
        push 0x3CF5C28F
        fstp dword ptr ss : [esp+0x38]
        push 0x3F800000
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [public_5cb88c]
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        fstp dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], ebx
        fstp dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x68], ebx
        call public_4176c0
        mov dword ptr ss : [esp+0x34], edx
        mov edx, eax
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x64], eax
        call public_417730
        mov ecx, dword ptr ds : [edi+0x78]
        mov dword ptr ss : [esp+0x34], eax
        add esp, 0x10
        mov dword ptr ss : [esp+0x28], edx
        mov eax, edx
        public_49a1af : nop
        mov edx, dword ptr ss : [esp+0x24]
        push ebx
        push ebx
        push ecx
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x54], edx
        call public_4143c0
        public_49a1c7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x499c20)
    }
}

#undef public_499c53
#undef public_499c6c
#undef public_499fce
#undef public_49a086
#undef public_49a09f
#undef public_49a0b0
#undef public_49a10b
#undef public_49a11b
#undef public_49a1af
#undef public_49a1c7
