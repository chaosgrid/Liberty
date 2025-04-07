#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59db0);

#define public_6d59dc1 _public_6d59dc1
#define public_6d59dcf _public_6d59dcf
#define public_6d59dda _public_6d59dda

PROC_DECLARE(0x6d59db0, internal_6d59db0, public_6d59db0);
extern "C" NAKED register_t __cdecl internal_6d59db0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6d59dda
        push esi
        public_6d59dc1 : nop
        test eax, eax
        je public_6d59dcf
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_6d59dcf : nop
        add ecx, 8
        add eax, 8
        cmp ecx, edx
        jne public_6d59dc1
        pop esi
        public_6d59dda : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6d59db0)
    }
}

#undef public_6d59dc1
#undef public_6d59dcf
#undef public_6d59dda
