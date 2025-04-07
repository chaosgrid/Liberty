#include "Common-PCH.h"


#define public_633ac96 _public_633ac96
#define public_633acbd _public_633acbd
#define public_633acf8 _public_633acf8

PROC_DECLARE(0x633ac30, internal_633ac30, public_633ac30);
extern "C" NAKED register_t __cdecl internal_633ac30()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [edi]
        mov esi, ecx
        fsub dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [esi+0x38]
        fstp dword ptr ss : [esp+0x10]
        call dword ptr ds : [eax+0x30]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_633ac96
        fld dword ptr ds : [public_6399408]
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        public_633ac96 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x48]
        fst dword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 1
        jne public_633acbd
        fld dword ptr ds : [public_6399408]
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        public_633acbd : nop
        fld dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x54]
        fsubr qword ptr ds : [public_6399410]
        fcompp 
        fnstsw ax
        test ah, 0x41
        je public_633acf8
        fld dword ptr ds : [esi+0x54]
        fcomp qword ptr ds : [public_639c2b8]
        fnstsw ax
        test ah, 5
        jnp public_633acf8
        fld dword ptr ss : [esp+0x18]
        pop edi
        fsubr qword ptr ds : [public_6399410]
        fdiv dword ptr ds : [esi+0x54]
        pop esi
        add esp, 0xC
        ret 4
        public_633acf8 : nop
        fld dword ptr ds : [public_639a1d0]
        pop edi
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x633ac30)
    }
}

#undef public_633ac96
#undef public_633acbd
#undef public_633acf8
