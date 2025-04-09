#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b0f0);

#define public_53e3b0 _public_53e3b0

PROC_DECLARE(0x53e3a0, internal_53e3a0, public_53e3a0);
extern "C" NAKED register_t __cdecl internal_53e3a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_53e3b0
        mov eax, dword ptr ds : [public_5c700c]
        public_53e3b0 : nop
        push eax
        call public_46b0f0
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x53e3a0)
    }
}

#undef public_53e3b0
