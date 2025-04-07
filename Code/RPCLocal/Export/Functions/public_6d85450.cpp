#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85450);

#define public_6d85461 _public_6d85461
#define public_6d85470 _public_6d85470

PROC_DECLARE(0x6d85450, internal_6d85450, public_6d85450);
extern "C" NAKED register_t __cdecl internal_6d85450()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6d85470
        push esi
        public_6d85461 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6d85461
        pop esi
        public_6d85470 : nop
        ret 
        UNREACHABLE_TRAP(0x6d85450)
    }
}

#undef public_6d85461
#undef public_6d85470
