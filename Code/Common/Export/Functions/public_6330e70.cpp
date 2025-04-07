#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261260);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_62dc410);
CLANG_FORWARD_PROC_SYMBOL(public_63310c0);
CLANG_FORWARD_PROC_SYMBOL(public_63311c0);
CLANG_FORWARD_PROC_SYMBOL(public_63311e0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);

#define public_6330ec1 _public_6330ec1
#define public_6330f45 _public_6330f45
#define public_6330f52 _public_6330f52
#define public_6330f54 _public_6330f54
#define public_6330f6e _public_6330f6e
#define public_6330f83 _public_6330f83
#define public_633102e _public_633102e
#define public_6331080 _public_6331080
#define public_6331089 _public_6331089
#define public_6331096 _public_6331096
#define public_63310a7 _public_63310a7

PROC_DECLARE(0x6330e70, internal_6330e70, public_6330e70);
extern "C" NAKED register_t __cdecl internal_6330e70()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov ebp, ecx
        mov dword ptr ds : [public_640a74c], edi
        mov dword ptr ds : [public_640a748], edi
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], ebp
        je public_63310a7
        mov ecx, esi
        call public_62c4780
        fsubr qword ptr ds : [public_6399410]
        mov ebx, dword ptr ss : [esp+0x50]
        fabs 
        fcomp qword ptr ds : [public_63a4950]
        fnstsw ax
        test ah, 5
        jnp public_6330f6e
        mov ebp, dword ptr ss : [esp+0x4C]
        add esi, 0x2C
        public_6330ec1 : nop
        mov eax, dword ptr ds : [esi-0x10]
        test eax, eax
        je public_6331089
        push ebp
        lea eax, ds:[esi-0xC]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        call public_6288800
        add esp, 0xC
        lea ecx, ss:[esp+0x20]
        call public_6347e60
        fst dword ptr ss : [esp+0x50]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 5
        jnp public_6330f45
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        lea ecx, ss:[esp+0x24]
        call public_62dc410
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[ebp+0xC]
        push ecx
        call public_62c47a0
        fcom dword ptr ds : [public_6399408]
        add esp, 8
        fnstsw ax
        test ah, 5
        jnp public_6330f52
        fmul dword ptr ss : [esp+0x50]
        fld dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x50]
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
        jne public_6330f54
        public_6330f45 : nop
        mov edx, dword ptr ds : [esi-0x10]
        push edx
        mov ecx, ebx
        call public_63311c0
        jmp public_6330f54
        public_6330f52 : nop
        fstp st(0)
        public_6330f54 : nop
        inc edi
        add esi, 0x14
        cmp edi, 8
        jb public_6330ec1
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 8
        public_6330f6e : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edi
        mov edi, dword ptr ss : [esp+0x4C]
        je public_6330f83
        push ebx
        push edi
        push eax
        mov ecx, ebp
        call public_63311e0
        public_6330f83 : nop
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        push esi
        push edi
        call public_63310c0
        add esp, 0x10
        test al, al
        je public_6331096
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [esi+eax*4+0x10]
        mov ebp, eax
        xor ebp, 3
        test ecx, ecx
        je public_633102e
        mov edx, edi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ecx
        lea eax, ds:[edi+0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], ecx
        push edi
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x40], edx
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x4C], eax
        call public_6288800
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x20]
        add esp, 0xC
        fmul dword ptr ss : [esp+0x14]
        push ebx
        lea eax, ss:[esp+0x30]
        push eax
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [esi+ecx*4+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        call public_63311e0
        public_633102e : nop
        mov eax, dword ptr ds : [esi+ebp*4+0x10]
        test eax, eax
        je public_6331089
        lea ecx, ss:[esp+0x2C]
        call public_6261260
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x3C], edx
        push ebx
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [esi+ebp*4+0x10]
        push edx
        mov dword ptr ss : [esp+0x4C], ecx
        push eax
        public_6331080 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_63311e0
        public_6331089 : nop
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 8
        public_6331096 : nop
        mov ecx, dword ptr ss : [esp+0x50]
        mov esi, dword ptr ds : [esi+ecx*4+0x10]
        test esi, esi
        je public_6331089
        push ebx
        push edi
        push esi
        jmp public_6331080
        public_63310a7 : nop
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x6330e70)
    }
}

#undef public_6330ec1
#undef public_6330f45
#undef public_6330f52
#undef public_6330f54
#undef public_6330f6e
#undef public_6330f83
#undef public_633102e
#undef public_6331080
#undef public_6331089
#undef public_6331096
#undef public_63310a7
