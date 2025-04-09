#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);

#define public_42168f _public_42168f

PROC_DECLARE(0x421670, internal_421670, public_421670);
extern "C" NAKED register_t __cdecl internal_421670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [public_6168ac]
        mov dword ptr ds : [public_616888], eax
        xor eax, eax
        cmp cl, al
        mov dword ptr ds : [public_6168b4], eax
        jne public_42168f
        mov dword ptr ds : [public_6168a8], eax
        public_42168f : nop
        ret 
        UNREACHABLE_TRAP(0x421670)
    }
}

#undef public_42168f
