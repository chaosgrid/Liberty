#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003490);

#define public_100035a6 _public_100035a6

PROC_DECLARE(0x10003580, internal_10003580, public_10003580);
extern "C" NAKED register_t __cdecl internal_10003580()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov al, byte ptr ss : [esp+8]
        push 1
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        mov byte ptr ss : [esp+0x14], al
        call public_10003490
        cmp eax, 1
        jne public_100035a6
        movzx eax, byte ptr ss : [esp+8]
        ret 8
        public_100035a6 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x10003580)
    }
}

#undef public_100035a6
