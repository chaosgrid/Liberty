#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f19c70);

#define public_6f19c85 _public_6f19c85
#define public_6f19c94 _public_6f19c94
#define public_6f19c96 _public_6f19c96

PROC_DECLARE(0x6f19c70, internal_6f19c70, public_6f19c70);
extern "C" NAKED register_t __cdecl internal_6f19c70()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x470]
        mov ecx, dword ptr ds : [edx]
        push esi
        xor al, al
        cmp ecx, edx
        je public_6f19c96
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6f19c85 : nop
        cmp dword ptr ds : [ecx+8], esi
        je public_6f19c94
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6f19c85
        pop esi
        ret 4
        public_6f19c94 : nop
        mov al, 1
        public_6f19c96 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f19c70)
    }
}

#undef public_6f19c85
#undef public_6f19c94
#undef public_6f19c96
