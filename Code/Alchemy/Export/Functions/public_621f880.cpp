#include "Alchemy-PCH.h"


#define public_621f89f _public_621f89f
#define public_621f8c1 _public_621f8c1
#define public_621f97b _public_621f97b
#define public_621fa10 _public_621fa10
#define public_621fa13 _public_621fa13
#define public_621fa23 _public_621fa23
#define public_621fa2f _public_621fa2f

PROC_DECLARE(0x621f880, internal_621f880, public_621f880);
extern "C" NAKED register_t __cdecl internal_621f880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x28
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax+0x10]
        push edi
        mov edi, dword ptr ds : [eax+0xC]
        xor ebx, ebx
        cmp edi, ebp
        je public_621fa23
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        public_621f89f : nop
        mov eax, dword ptr ds : [edi]
        test ebx, ebx
        jne public_621f8c1
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x8C]
        test eax, eax
        jne public_621fa13
        mov ebx, 1
        jmp public_621fa13
        public_621f8c1 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x8C]
        test eax, eax
        jne public_621fa13
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [esi]
        mov eax, 0x5F3759DF
        inc ebx
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [esi+8]
        fst dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fst dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x3C]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x3C], eax
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fmul dword ptr ds : [public_624bab8]
        fsubr dword ptr ds : [public_624bac0]
        fmul dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fstp st(0)
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 5
        jp public_621f97b
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        jmp public_621fa13
        public_621f97b : nop
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_621fa13
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [esi+0xC]
        fadd dword ptr ss : [esp+0x3C]
        fmul qword ptr ds : [public_624bab0]
        fld dword ptr ss : [esp+0x3C]
        fcomp qword ptr ds : [public_624baa8]
        fnstsw ax
        test ah, 0x41
        jnp public_621fa10
        fld dword ptr ds : [public_624bac4]
        fdiv dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld st(1)
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x18]
        fld st(2)
        fsub dword ptr ds : [esi+0xC]
        fst dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x24]
        fxch 
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        public_621fa10 : nop
        fstp dword ptr ds : [esi+0xC]
        public_621fa13 : nop
        add edi, 0x10
        cmp edi, ebp
        jne public_621f89f
        test ebx, ebx
        pop esi
        jne public_621fa2f
        public_621fa23 : nop
        pop edi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x28
        ret 8
        public_621fa2f : nop
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x621f880)
    }
}

#undef public_621f89f
#undef public_621f8c1
#undef public_621f97b
#undef public_621fa10
#undef public_621fa13
#undef public_621fa23
#undef public_621fa2f
