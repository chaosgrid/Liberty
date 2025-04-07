#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ff830);

#define public_62b6d3c _public_62b6d3c

PROC_DECLARE(0x62b6d20, internal_62b6d20, public_62b6d20);
extern "C" NAKED register_t __cdecl internal_62b6d20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push esi
        push eax
        push edx
        xor esi, esi
        call public_62ff830
        test eax, eax
        je public_62b6d3c
        mov eax, dword ptr ds : [eax]
        pop esi
        ret 8
        public_62b6d3c : nop
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62b6d20)
    }
}

#undef public_62b6d3c
