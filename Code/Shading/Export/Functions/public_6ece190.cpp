#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece190);

#define public_6ece1a1 _public_6ece1a1
#define public_6ece1a9 _public_6ece1a9
#define public_6ece1b4 _public_6ece1b4

PROC_DECLARE(0x6ece190, internal_6ece190, public_6ece190);
extern "C" NAKED register_t __cdecl internal_6ece190()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6ece1b4
        push esi
        public_6ece1a1 : nop
        test eax, eax
        je public_6ece1a9
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6ece1a9 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6ece1a1
        pop esi
        public_6ece1b4 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ece190)
    }
}

#undef public_6ece1a1
#undef public_6ece1a9
#undef public_6ece1b4
