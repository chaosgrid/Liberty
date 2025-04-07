#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c8690);

#define public_62c86ec _public_62c86ec
#define public_62c870b _public_62c870b
#define public_62c8726 _public_62c8726

PROC_DECLARE(0x62c8690, internal_62c8690, public_62c8690);
extern "C" NAKED register_t __cdecl internal_62c8690()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        fld dword ptr ds : [eax+0x1588]
        fadd dword ptr ds : [eax+0x158C]
        fadd dword ptr ds : [eax+0x1590]
        fadd dword ptr ds : [eax+0x1594]
        fstp dword ptr ss : [esp+8]
        call dword ptr ds : [public_6399308]
        mov esi, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_63997d0]
        fld dword ptr ds : [esi+0x1588]
        fld st(1)
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_62c86ec
        fstp st(0)
        xor eax, eax
        fstp st(0)
        pop esi
        add esp, 8
        ret 
        public_62c86ec : nop
        fadd dword ptr ds : [esi+0x158C]
        fld st(1)
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_62c870b
        fstp st(0)
        mov eax, 1
        fstp st(0)
        pop esi
        add esp, 8
        ret 
        public_62c870b : nop
        fadd dword ptr ds : [esi+0x1590]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        mov eax, 2
        jnp public_62c8726
        mov eax, 3
        public_62c8726 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62c8690)
    }
}

#undef public_62c86ec
#undef public_62c870b
#undef public_62c8726
