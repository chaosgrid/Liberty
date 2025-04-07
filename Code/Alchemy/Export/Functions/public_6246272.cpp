#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246272);
CLANG_FORWARD_PROC_SYMBOL(public_62464b8);

#define public_6246283 _public_6246283

PROC_DECLARE(0x6246272, internal_6246272, public_6246272);
extern "C" NAKED register_t __cdecl internal_6246272()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        je public_6246283
        xor eax, eax
        ret 
        public_6246283 : nop
        jmp public_62464b8
        UNREACHABLE_TRAP(0x6246272)
    }
}

#undef public_6246283
