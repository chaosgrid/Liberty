#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);

#define public_627f7c1 _public_627f7c1
#define public_627f7c9 _public_627f7c9
#define public_627f7d4 _public_627f7d4

PROC_DECLARE(0x627f7b0, internal_627f7b0, public_627f7b0);
extern "C" NAKED register_t __cdecl internal_627f7b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_627f7d4
        push esi
        public_627f7c1 : nop
        test eax, eax
        je public_627f7c9
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_627f7c9 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_627f7c1
        pop esi
        public_627f7d4 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x627f7b0)
    }
}

#undef public_627f7c1
#undef public_627f7c9
#undef public_627f7d4
