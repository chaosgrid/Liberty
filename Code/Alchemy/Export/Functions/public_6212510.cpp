#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620f830);
CLANG_FORWARD_PROC_SYMBOL(public_6212510);

PROC_DECLARE(0x6212510, internal_6212510, public_6212510);
extern "C" NAKED register_t __cdecl internal_6212510()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_620f830
        UNREACHABLE_TRAP(0x6212510)
    }
}
