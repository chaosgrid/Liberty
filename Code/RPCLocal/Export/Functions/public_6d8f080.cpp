#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85e00);

#define public_6d8f094 _public_6d8f094

PROC_DECLARE(0x6d8f080, internal_6d8f080, public_6d8f080);
extern "C" NAKED register_t __cdecl internal_6d8f080()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6dbbd1c]
        test ecx, ecx
        je public_6d8f094
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_6d85e00
        public_6d8f094 : nop
        ret 8
        UNREACHABLE_TRAP(0x6d8f080)
    }
}

#undef public_6d8f094
