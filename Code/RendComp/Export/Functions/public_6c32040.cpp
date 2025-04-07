#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c32040);

#define public_6c32062 _public_6c32062
#define public_6c32077 _public_6c32077
#define public_6c3207e _public_6c3207e

PROC_DECLARE(0x6c32040, internal_6c32040, public_6c32040);
extern "C" NAKED register_t __cdecl internal_6c32040()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push esi
        fcomp dword ptr ds : [public_6c36320]
        push edi
        fnstsw ax
        test ah, 5
        jnp public_6c32077
        mov edi, dword ptr ds : [ecx+4]
        xor edx, edx
        test edi, edi
        jle public_6c32077
        mov esi, dword ptr ds : [ecx+0x10]
        add esi, 4
        public_6c32062 : nop
        fld dword ptr ds : [esi]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 1
        je public_6c3207e
        inc edx
        add esi, 4
        cmp edx, edi
        jl public_6c32062
        public_6c32077 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        public_6c3207e : nop
        mov eax, dword ptr ds : [ecx]
        pop edi
        lea eax, ds:[eax+edx*8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c32040)
    }
}

#undef public_6c32062
#undef public_6c32077
#undef public_6c3207e
