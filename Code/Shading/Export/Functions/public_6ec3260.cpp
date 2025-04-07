#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec31a0);

#define public_6ec327d _public_6ec327d

PROC_DECLARE(0x6ec3260, internal_6ec3260, public_6ec3260);
extern "C" NAKED register_t __cdecl internal_6ec3260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push eax
        or esi, 0xFFFFFFFF
        call public_6ec31a0
        cmp eax, 0xFFFFFFFF
        je public_6ec327d
        xor eax, eax
        pop esi
        ret 8
        public_6ec327d : nop
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ec3260)
    }
}

#undef public_6ec327d
