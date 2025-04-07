#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232130);
CLANG_FORWARD_PROC_SYMBOL(public_62446a0);

PROC_DECLARE(0x6232130, internal_6232130, public_6232130);
extern "C" NAKED register_t __cdecl internal_6232130()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_62446a0
        UNREACHABLE_TRAP(0x6232130)
    }
}
