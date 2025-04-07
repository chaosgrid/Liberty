#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6224c20);
CLANG_FORWARD_PROC_SYMBOL(public_6227330);

PROC_DECLARE(0x6227330, internal_6227330, public_6227330);
extern "C" NAKED register_t __cdecl internal_6227330()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_6224c20
        UNREACHABLE_TRAP(0x6227330)
    }
}
