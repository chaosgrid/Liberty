#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a21f0);

#define public_4a2219 _public_4a2219
#define public_4a2234 _public_4a2234
#define public_4a225b _public_4a225b
#define public_4a227b _public_4a227b
#define public_4a2281 _public_4a2281
#define public_4a22e3 _public_4a22e3
#define public_4a22eb _public_4a22eb
#define public_4a22f8 _public_4a22f8

PROC_DECLARE(0x4a21f0, internal_4a21f0, public_4a21f0);
extern "C" NAKED register_t __cdecl internal_4a21f0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_4a22eb
        mov esi, dword ptr ds : [public_67204c]
        test esi, esi
        jne public_4a2219
        xor ebp, ebp
        jmp public_4a2234
        public_4a2219 : nop
        mov ecx, dword ptr ds : [public_672050]
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebp, edx
        public_4a2234 : nop
        fld dword ptr ds : [edi+0x7E4]
        fld dword ptr ds : [edi+0x3F8]
        fmul dword ptr ds : [public_5c75e0]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_4a225b
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4a225b : nop
        fxch 
        xor ebx, ebx
        test ebp, ebp
        fdiv st, st(1)
        fmul dword ptr ds : [public_5d3e6c]
        fstp st(1)
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jle public_4a22eb
        xor edi, edi
        jmp public_4a2281
        public_4a227b : nop
        mov esi, dword ptr ds : [public_67204c]
        public_4a2281 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+0x7E0]
        mov edx, dword ptr ds : [ecx]
        add esi, edi
        call dword ptr ds : [edx]
        cmp dword ptr ds : [esi+0x10], eax
        jne public_4a22e3
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        fsub dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [esi+8]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ss : [esp+0x14]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jnp public_4a22f8
        public_4a22e3 : nop
        inc ebx
        add edi, 0x18
        cmp ebx, ebp
        jl public_4a227b
        public_4a22eb : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x14
        ret 4
        public_4a22f8 : nop
        mov eax, dword ptr ds : [esi+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x4a21f0)
    }
}

#undef public_4a2219
#undef public_4a2234
#undef public_4a225b
#undef public_4a227b
#undef public_4a2281
#undef public_4a22e3
#undef public_4a22eb
#undef public_4a22f8
