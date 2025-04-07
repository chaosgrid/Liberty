#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418d80);
CLANG_FORWARD_PROC_SYMBOL(public_419978);

#define public_41999b _public_41999b

PROC_DECLARE(0x419978, internal_419978, public_419978);
extern "C" NAKED register_t __cdecl internal_419978()
{
    __asm
    {
        call public_418d80
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        test ecx, ecx
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [eax+0x1040], edx
        jne public_41999b
        push 0xFFFFFFFD
        call dword ptr ds : [public_41b8ec]
        pop ecx
        public_41999b : nop
        push 1
        pop eax
        ret 8
        UNREACHABLE_TRAP(0x419978)
    }
}

#undef public_41999b
