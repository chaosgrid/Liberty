#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f247d0);

#define public_6f247e1 _public_6f247e1
#define public_6f247f0 _public_6f247f0

PROC_DECLARE(0x6f247d0, internal_6f247d0, public_6f247d0);
extern "C" NAKED register_t __cdecl internal_6f247d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6f247f0
        push esi
        public_6f247e1 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6f247e1
        pop esi
        public_6f247f0 : nop
        ret 
        UNREACHABLE_TRAP(0x6f247d0)
    }
}

#undef public_6f247e1
#undef public_6f247f0
