#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215f40);
CLANG_FORWARD_PROC_SYMBOL(public_6219640);

PROC_DECLARE(0x6219640, internal_6219640, public_6219640);
extern "C" NAKED register_t __cdecl internal_6219640()
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
        jmp public_6215f40
        UNREACHABLE_TRAP(0x6219640)
    }
}
