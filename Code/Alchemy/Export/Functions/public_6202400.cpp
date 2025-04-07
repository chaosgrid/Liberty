#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202400);
CLANG_FORWARD_PROC_SYMBOL(public_62273c0);

PROC_DECLARE(0x6202400, internal_6202400, public_6202400);
extern "C" NAKED register_t __cdecl internal_6202400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp public_62273c0
        UNREACHABLE_TRAP(0x6202400)
    }
}
