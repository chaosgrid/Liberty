#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7fa4);
CLANG_FORWARD_PROC_SYMBOL(public_5b81f2);

#define public_5b7fb5 _public_5b7fb5

PROC_DECLARE(0x5b7fa4, internal_5b7fa4, public_5b7fa4);
extern "C" NAKED register_t __cdecl internal_5b7fa4()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        je public_5b7fb5
        xor eax, eax
        ret 
        public_5b7fb5 : nop
        jmp public_5b81f2
        UNREACHABLE_TRAP(0x5b7fa4)
    }
}

#undef public_5b7fb5
