#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eace60);

#define public_6eace77 _public_6eace77
#define public_6eacec0 _public_6eacec0
#define public_6eaced7 _public_6eaced7
#define public_6eaced9 _public_6eaced9
#define public_6eacee1 _public_6eacee1

PROC_DECLARE(0x6eace60, internal_6eace60, public_6eace60);
extern "C" NAKED register_t __cdecl internal_6eace60()
{
    __asm
    {
        fld dword ptr ds : [public_6fb444c]
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        je public_6eaced7
        public_6eace77 : nop
        fadd dword ptr ds : [eax+4]
        add eax, 8
        cmp eax, esi
        jne public_6eace77
        fst dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6eaced9
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, esi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_6fb4448]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [public_6fb444c]
        je public_6eaced7
        nop 
        lea esp, ss:[esp]
        public_6eacec0 : nop
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ss : [esp+0xC]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6eacee1
        add ecx, 8
        cmp ecx, esi
        jne public_6eacec0
        public_6eaced7 : nop
        fstp st(0)
        public_6eaced9 : nop
        pop edi
        mov eax, esi
        pop esi
        add esp, 8
        ret 
        public_6eacee1 : nop
        pop edi
        fstp st(0)
        mov eax, ecx
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6eace60)
    }
}

#undef public_6eace77
#undef public_6eacec0
#undef public_6eaced7
#undef public_6eaced9
#undef public_6eacee1
