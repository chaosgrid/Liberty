#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bcfa0);

#define public_62bcfb0 _public_62bcfb0
#define public_62bcfc4 _public_62bcfc4
#define public_62bcfe6 _public_62bcfe6

PROC_DECLARE(0x62bcfa0, internal_62bcfa0, public_62bcfa0);
extern "C" NAKED register_t __cdecl internal_62bcfa0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov edi, edi
        public_62bcfb0 : nop
        mov esi, dword ptr ds : [edx]
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 5
        jp public_62bcfc4
        add edx, 4
        jmp public_62bcfb0
        public_62bcfc4 : nop
        mov eax, dword ptr ds : [ecx-4]
        fld dword ptr ds : [edi+4]
        fcomp dword ptr ds : [eax+4]
        sub ecx, 4
        fnstsw ax
        test ah, 5
        jnp public_62bcfc4
        cmp ecx, edx
        jbe public_62bcfe6
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [ecx], esi
        add edx, 4
        jmp public_62bcfb0
        public_62bcfe6 : nop
        pop edi
        mov eax, edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62bcfa0)
    }
}

#undef public_62bcfb0
#undef public_62bcfc4
#undef public_62bcfe6
