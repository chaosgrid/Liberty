#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1eb4);
CLANG_FORWARD_PROC_SYMBOL(public_6db20f0);

#define public_6db1ec5 _public_6db1ec5

PROC_DECLARE(0x6db1eb4, internal_6db1eb4, public_6db1eb4);
extern "C" NAKED register_t __cdecl internal_6db1eb4()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        je public_6db1ec5
        xor eax, eax
        ret 
        public_6db1ec5 : nop
        jmp public_6db20f0
        UNREACHABLE_TRAP(0x6db1eb4)
    }
}

#undef public_6db1ec5
