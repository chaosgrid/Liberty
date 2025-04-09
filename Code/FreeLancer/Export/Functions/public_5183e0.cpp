#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_51d7f0);

#define public_5183f2 _public_5183f2

PROC_DECLARE(0x5183e0, internal_5183e0, public_5183e0);
extern "C" NAKED register_t __cdecl internal_5183e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_45a740
        test al, al
        je public_5183f2
        xor al, al
        pop esi
        ret 4
        public_5183f2 : nop
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, esi
        call public_51d7f0
        test al, al
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5183e0)
    }
}

#undef public_5183f2
