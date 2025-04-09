#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e7950);

#define public_4e796c _public_4e796c

PROC_DECLARE(0x4e7950, internal_4e7950, public_4e7950);
extern "C" NAKED register_t __cdecl internal_4e7950()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x26
        jne public_4e796c
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [ecx+0x490]
        jne public_4e796c
        mov edx, dword ptr ds : [ecx-0x38]
        add ecx, 0xFFFFFFC8
        call dword ptr ds : [edx+0x30]
        public_4e796c : nop
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x4e7950)
    }
}

#undef public_4e796c
