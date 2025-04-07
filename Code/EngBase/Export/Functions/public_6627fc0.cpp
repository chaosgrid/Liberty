#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627fc0);

#define public_6627fd5 _public_6627fd5

PROC_DECLARE(0x6627fc0, internal_6627fc0, public_6627fc0);
extern "C" NAKED register_t __cdecl internal_6627fc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6627fd5
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_662902c]
        public_6627fd5 : nop
        ret 
        UNREACHABLE_TRAP(0x6627fc0)
    }
}

#undef public_6627fd5
