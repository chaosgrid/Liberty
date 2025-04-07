#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6621710);

#define public_6621847 _public_6621847

PROC_DECLARE(0x6621830, internal_6621830, public_6621830);
extern "C" NAKED register_t __cdecl internal_6621830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        je public_6621847
        test eax, eax
        je public_6621847
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6621710
        public_6621847 : nop
        ret 8
        UNREACHABLE_TRAP(0x6621830)
    }
}

#undef public_6621847
