#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8ed90);

#define public_6d8eda7 _public_6d8eda7

PROC_DECLARE(0x6d8ed90, internal_6d8ed90, public_6d8ed90);
extern "C" NAKED register_t __cdecl internal_6d8ed90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_6d8eda7
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov dword ptr ds : [public_6dbbccc], eax
        call dword ptr ds : [public_6db312c]
        public_6d8eda7 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6d8ed90)
    }
}

#undef public_6d8eda7
