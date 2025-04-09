#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428000);

#define public_428014 _public_428014
#define public_42801d _public_42801d
#define public_428025 _public_428025

PROC_DECLARE(0x428000, internal_428000, public_428000);
extern "C" NAKED register_t __cdecl internal_428000()
{
    __asm
    {
        mov edx, dword ptr ds : [public_667c70]
        mov ecx, dword ptr ds : [edx]
        xor eax, eax
        cmp ecx, edx
        je public_428025
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        public_428014 : nop
        mov edi, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [edi+0x18], esi
        jne public_42801d
        inc eax
        public_42801d : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_428014
        pop edi
        pop esi
        public_428025 : nop
        ret 
        UNREACHABLE_TRAP(0x428000)
    }
}

#undef public_428014
#undef public_42801d
#undef public_428025
