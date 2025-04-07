#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec06fa _public_6ec06fa
#define public_6ec06fc _public_6ec06fc
#define public_6ec0713 _public_6ec0713

PROC_DECLARE(0x6ec0530, internal_6ec0530, public_6ec0530);
extern "C" NAKED register_t __cdecl internal_6ec0530()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea eax, ds:[esi+0xC]
        push eax
        xor bl, bl
        call public_6f15940
        mov ecx, dword ptr ds : [esi+4]
        add ecx, 0xC
        push ecx
        mov edi, eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec0713
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ec0713
        call public_6f478c0
        test eax, eax
        je public_6ec0713
        test edi, 0x3FFFFFFF
        je public_6ec0713
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        push edi
        call dword ptr ds : [public_6fb3664]
        add esp, 0xC
        test eax, eax
        jne public_6ec06fc
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+0x7C]
        fmul dword ptr ds : [esi+0x94]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0x80]
        fmul dword ptr ds : [esi+0x98]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x78]
        fmul dword ptr ds : [esi+0x90]
        faddp 
        fcom dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6ec06fa
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [esi+0x94]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x98]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+0x90]
        faddp 
        fadd dword ptr ds : [esi+0xA0]
        fdivrp 
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x78]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ds : [esi+0x7C]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [esi+0x80]
        fst dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6fb5810]
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [public_6fb444c]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_6ec06fa
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        test ah, 5
        jp public_6ec06fc
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+0x98]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [esi+0x94]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+0x90]
        faddp 
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6ec06fc
        fld dword ptr ds : [esi+0x84]
        fsub dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x88]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x8C]
        fsub dword ptr ss : [esp+0x18]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcomp dword ptr ds : [esi+0x9C]
        fnstsw ax
        test ah, 5
        jp public_6ec06fc
        mov bl, 1
        jmp public_6ec06fc
        public_6ec06fa : nop
        fstp st(0)
        public_6ec06fc : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        add esi, 0x78
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ecx
        public_6ec0713 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x6ec0530)
    }
}

#undef public_6ec06fa
#undef public_6ec06fc
#undef public_6ec0713
