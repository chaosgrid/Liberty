#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f159c0);

#define public_6f159d5 _public_6f159d5
#define public_6f159e4 _public_6f159e4
#define public_6f159e7 _public_6f159e7

PROC_DECLARE(0x6f159c0, internal_6f159c0, public_6f159c0);
extern "C" NAKED register_t __cdecl internal_6f159c0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC8]
        mov ecx, dword ptr ds : [edx]
        push esi
        xor eax, eax
        cmp ecx, edx
        je public_6f159e7
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6f159d5 : nop
        cmp dword ptr ds : [ecx+8], esi
        je public_6f159e4
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6f159d5
        pop esi
        ret 4
        public_6f159e4 : nop
        lea eax, ds:[ecx+8]
        public_6f159e7 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f159c0)
    }
}

#undef public_6f159d5
#undef public_6f159e4
#undef public_6f159e7
