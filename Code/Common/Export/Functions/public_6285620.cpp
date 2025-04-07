#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285620);
CLANG_FORWARD_PROC_SYMBOL(public_6346170);

PROC_DECLARE(0x6285620, internal_6285620, public_6285620);
extern "C" NAKED register_t __cdecl internal_6285620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x54]
        jmp public_6346170
        UNREACHABLE_TRAP(0x6285620)
    }
}
