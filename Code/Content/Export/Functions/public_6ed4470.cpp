#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed4470);

#define public_6ed4481 _public_6ed4481
#define public_6ed4490 _public_6ed4490
#define public_6ed4493 _public_6ed4493

PROC_DECLARE(0x6ed4470, internal_6ed4470, public_6ed4470);
extern "C" NAKED register_t __cdecl internal_6ed4470()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x48]
        mov ecx, dword ptr ds : [ecx+0x4C]
        push esi
        xor eax, eax
        cmp edx, ecx
        je public_6ed4493
        mov esi, dword ptr ss : [esp+8]
        public_6ed4481 : nop
        cmp dword ptr ds : [edx], esi
        je public_6ed4490
        add edx, 0x48
        cmp edx, ecx
        jne public_6ed4481
        pop esi
        ret 4
        public_6ed4490 : nop
        lea eax, ds:[edx+8]
        public_6ed4493 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ed4470)
    }
}

#undef public_6ed4481
#undef public_6ed4490
#undef public_6ed4493
