#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26c40);

#define public_6c26c56 _public_6c26c56
#define public_6c26c5f _public_6c26c5f
#define public_6c26c65 _public_6c26c65

PROC_DECLARE(0x6c26c40, internal_6c26c40, public_6c26c40);
extern "C" NAKED register_t __cdecl internal_6c26c40()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        xor eax, eax
        xor ecx, ecx
        test edi, edi
        jle public_6c26c65
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        public_6c26c56 : nop
        cmp dword ptr ds : [edx+ecx*4], esi
        jne public_6c26c5f
        mov dword ptr ds : [edx+ecx*4], eax
        inc eax
        public_6c26c5f : nop
        inc ecx
        cmp ecx, edi
        jl public_6c26c56
        pop esi
        public_6c26c65 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6c26c40)
    }
}

#undef public_6c26c56
#undef public_6c26c5f
#undef public_6c26c65
