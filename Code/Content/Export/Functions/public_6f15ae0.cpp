#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15ae0);

#define public_6f15af5 _public_6f15af5
#define public_6f15b04 _public_6f15b04
#define public_6f15b07 _public_6f15b07

PROC_DECLARE(0x6f15ae0, internal_6f15ae0, public_6f15ae0);
extern "C" NAKED register_t __cdecl internal_6f15ae0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xD4]
        mov ecx, dword ptr ds : [edx]
        push esi
        xor eax, eax
        cmp ecx, edx
        je public_6f15b07
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6f15af5 : nop
        cmp dword ptr ds : [ecx+0x3C], esi
        je public_6f15b04
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6f15af5
        pop esi
        ret 4
        public_6f15b04 : nop
        lea eax, ds:[ecx+8]
        public_6f15b07 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f15ae0)
    }
}

#undef public_6f15af5
#undef public_6f15b04
#undef public_6f15b07
