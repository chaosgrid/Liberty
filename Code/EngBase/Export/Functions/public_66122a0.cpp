#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66122a0);

#define public_66122b1 _public_66122b1
#define public_66122c0 _public_66122c0
#define public_66122c5 _public_66122c5

PROC_DECLARE(0x66122a0, internal_66122a0, public_66122a0);
extern "C" NAKED register_t __cdecl internal_66122a0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+0x10]
        xor eax, eax
        push esi
        cmp edx, ecx
        jae public_66122c5
        mov esi, dword ptr ss : [esp+8]
        public_66122b1 : nop
        cmp dword ptr ds : [edx], esi
        je public_66122c0
        add edx, 4
        cmp edx, ecx
        jb public_66122b1
        pop esi
        ret 4
        public_66122c0 : nop
        mov eax, 1
        public_66122c5 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66122a0)
    }
}

#undef public_66122b1
#undef public_66122c0
#undef public_66122c5
