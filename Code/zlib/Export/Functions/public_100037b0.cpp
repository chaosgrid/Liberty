#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003260);
CLANG_FORWARD_PROC_SYMBOL(public_100037b0);

#define public_100037e0 _public_100037e0

PROC_DECLARE(0x100037b0, internal_100037b0, public_100037b0);
extern "C" NAKED register_t __cdecl internal_100037b0()
{
    __asm
    {
        push esi
        push edi
        mov esi, eax
        call public_10003260
        mov edi, eax
        call public_10003260
        shl eax, 8
        add edi, eax
        call public_10003260
        shl eax, 0x10
        add edi, eax
        call public_10003260
        cmp eax, 0xFFFFFFFF
        jne public_100037e0
        mov dword ptr ds : [esi+0x38], 0xFFFFFFFD
        public_100037e0 : nop
        shl eax, 0x18
        add eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x100037b0)
    }
}

#undef public_100037e0
