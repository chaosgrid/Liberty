#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226c10);

#define public_6226c2a _public_6226c2a

PROC_DECLARE(0x6226c10, internal_6226c10, public_6226c10);
extern "C" NAKED register_t __cdecl internal_6226c10()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xB7EE41C
        jne public_6226c2a
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x60], ecx
        xor eax, eax
        ret 0xC
        public_6226c2a : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6226c10)
    }
}

#undef public_6226c2a
