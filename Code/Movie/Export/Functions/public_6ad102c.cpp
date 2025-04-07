#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad102c);

#define public_6ad1053 _public_6ad1053

PROC_DECLARE(0x6ad102c, internal_6ad102c, public_6ad102c);
extern "C" NAKED register_t __cdecl internal_6ad102c()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        jne public_6ad1053
        cmp dword ptr ds : [eax+0x10], 3
        jne public_6ad1053
        cmp dword ptr ds : [eax+0x14], 0x19930520
        jne public_6ad1053
        cmp dword ptr ds : [eax+0x1C], 0
        jne public_6ad1053
        push 1
        pop eax
        ret 
        public_6ad1053 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6ad102c)
    }
}

#undef public_6ad1053
