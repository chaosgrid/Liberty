#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6230370);
CLANG_FORWARD_PROC_SYMBOL(public_6231dc0);

PROC_DECLARE(0x6231dc0, internal_6231dc0, public_6231dc0);
extern "C" NAKED register_t __cdecl internal_6231dc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 0xC
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_6230370
        UNREACHABLE_TRAP(0x6231dc0)
    }
}
