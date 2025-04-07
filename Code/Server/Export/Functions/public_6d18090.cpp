#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d180af _public_6d180af

PROC_DECLARE(0x6d18090, internal_6d18090, public_6d18090);
extern "C" NAKED register_t __cdecl internal_6d18090()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        cmp eax, 0xFFFFFFFF
        je public_6d180af
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d14cc0
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_6d180af : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d18090)
    }
}

#undef public_6d180af
