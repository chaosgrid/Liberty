#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2a80);

#define public_6da2a89 _public_6da2a89
#define public_6da2a94 _public_6da2a94

PROC_DECLARE(0x6da2a80, internal_6da2a80, public_6da2a80);
extern "C" NAKED register_t __cdecl internal_6da2a80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_6da2a89
        ret 
        public_6da2a89 : nop
        cmp eax, dword ptr ds : [public_6dbbf78]
        jbe public_6da2a94
        xor eax, eax
        ret 
        public_6da2a94 : nop
        mov eax, dword ptr ds : [eax*4+public_6dbb76c]
        ret 
        UNREACHABLE_TRAP(0x6da2a80)
    }
}

#undef public_6da2a89
#undef public_6da2a94
