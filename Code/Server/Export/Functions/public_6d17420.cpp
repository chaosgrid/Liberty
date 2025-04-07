#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4eeb0);

#define public_6d17446 _public_6d17446
#define public_6d1745d _public_6d1745d

PROC_DECLARE(0x6d17420, internal_6d17420, public_6d17420);
extern "C" NAKED register_t __cdecl internal_6d17420()
{
    __asm
    {
        call dword ptr ds : [public_6d641c0]
        mov ecx, dword ptr ds : [public_6d90260]
        test al, al
        mov eax, dword ptr ss : [esp+8]
        jne public_6d17446
        mov edx, eax
        imul edx, 0x418
        push esi
        mov esi, dword ptr ds : [edx+ecx-0x24]
        test esi, esi
        pop esi
        je public_6d1745d
        public_6d17446 : nop
        mov edx, dword ptr ss : [esp+4]
        imul eax, 0x418
        push edx
        lea ecx, ds:[eax+ecx-0x418]
        call public_6d4eeb0
        public_6d1745d : nop
        ret 8
        UNREACHABLE_TRAP(0x6d17420)
    }
}

#undef public_6d17446
#undef public_6d1745d
