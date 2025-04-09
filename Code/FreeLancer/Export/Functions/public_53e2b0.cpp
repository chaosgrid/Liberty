#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_53e2ec _public_53e2ec

PROC_DECLARE(0x53e2b0, internal_53e2b0, public_53e2b0);
extern "C" NAKED register_t __cdecl internal_53e2b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push 0
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_53e2ec
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_53e2ec
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_53e2ec
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x1B4], edx
        public_53e2ec : nop
        ret 0xC
        UNREACHABLE_TRAP(0x53e2b0)
    }
}

#undef public_53e2ec
