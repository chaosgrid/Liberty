#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003bd0);

#define public_10003e1e _public_10003e1e

PROC_DECLARE(0x10003e00, internal_10003e00, public_10003e00);
extern "C" NAKED register_t __cdecl internal_10003e00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push 1
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call public_10003bd0
        cmp eax, 1
        jne public_10003e1e
        movzx eax, byte ptr ss : [esp+4]
        ret 4
        public_10003e1e : nop
        or eax, 0xFFFFFFFF
        ret 4
        UNREACHABLE_TRAP(0x10003e00)
    }
}

#undef public_10003e1e
