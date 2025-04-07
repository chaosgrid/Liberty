#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c570);

PROC_DECLARE(0x635c570, internal_635c570, public_635c570);
extern "C" NAKED register_t __cdecl internal_635c570()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], eax
        shr eax, 0x17
        and eax, 0xFF
        sub eax, 0x7F
        ret 4
        UNREACHABLE_TRAP(0x635c570)
    }
}
