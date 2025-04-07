#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622c3d0);
CLANG_FORWARD_PROC_SYMBOL(public_622e9b0);

PROC_DECLARE(0x622e9b0, internal_622e9b0, public_622e9b0);
extern "C" NAKED register_t __cdecl internal_622e9b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 0xC
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_622c3d0
        UNREACHABLE_TRAP(0x622e9b0)
    }
}
