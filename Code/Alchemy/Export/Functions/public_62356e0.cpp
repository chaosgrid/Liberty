#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6233040);
CLANG_FORWARD_PROC_SYMBOL(public_62356e0);

PROC_DECLARE(0x62356e0, internal_62356e0, public_62356e0);
extern "C" NAKED register_t __cdecl internal_62356e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 0xC
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_6233040
        UNREACHABLE_TRAP(0x62356e0)
    }
}
