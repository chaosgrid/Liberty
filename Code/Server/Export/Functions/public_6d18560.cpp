#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15510);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d1857f _public_6d1857f

PROC_DECLARE(0x6d18560, internal_6d18560, public_6d18560);
extern "C" NAKED register_t __cdecl internal_6d18560()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        cmp eax, 0xFFFFFFFF
        je public_6d1857f
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d15510
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_6d1857f : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d18560)
    }
}

#undef public_6d1857f
