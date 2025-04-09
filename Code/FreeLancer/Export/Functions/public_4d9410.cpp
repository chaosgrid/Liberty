#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d8e20);

#define public_4d943a _public_4d943a
#define public_4d944b _public_4d944b
#define public_4d9461 _public_4d9461

PROC_DECLARE(0x4d9410, internal_4d9410, public_4d9410);
extern "C" NAKED register_t __cdecl internal_4d9410()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 1
        jne public_4d9461
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_4d943a
        push 1
        mov dword ptr ds : [ecx+0x24], 2
        push 0xA
        add ecx, 0xFFFFFC98
        call public_4d8e20
        xor al, al
        ret 0xC
        public_4d943a : nop
        cmp eax, 0xFFFFFFFF
        jne public_4d944b
        mov dword ptr ds : [ecx+0x24], 2
        xor al, al
        ret 0xC
        public_4d944b : nop
        push 0
        mov dword ptr ds : [ecx+0x24], 3
        push 0xFFFFFFFF
        add ecx, 0xFFFFFC98
        call public_4d8e20
        public_4d9461 : nop
        xor al, al
        ret 0xC
        UNREACHABLE_TRAP(0x4d9410)
    }
}

#undef public_4d943a
#undef public_4d944b
#undef public_4d9461
