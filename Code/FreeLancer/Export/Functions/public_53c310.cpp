#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f5e50);

PROC_DECLARE(0x53c310, internal_53c310, public_53c310);
extern "C" NAKED register_t __cdecl internal_53c310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, offset public_674c0c
        call public_4f5e50
        ret 0xC
        UNREACHABLE_TRAP(0x53c310)
    }
}
