#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419050);

#define public_40e0a6 _public_40e0a6

PROC_DECLARE(0x40e080, internal_40e080, public_40e080);
extern "C" NAKED register_t __cdecl internal_40e080()
{
    __asm
    {
        push esi
        mov esi, ecx
        test esi, esi
        je public_40e0a6
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        call public_419050
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x20]
        push eax
        push 0
        push 0xC2
        push ecx
        call dword ptr ds : [public_41bbe8]
        public_40e0a6 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40e080)
    }
}

#undef public_40e0a6
