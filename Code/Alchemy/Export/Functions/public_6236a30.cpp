#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236450);
CLANG_FORWARD_PROC_SYMBOL(public_6236a30);

PROC_DECLARE(0x6236a30, internal_6236a30, public_6236a30);
extern "C" NAKED register_t __cdecl internal_6236a30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 4
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_6236450
        UNREACHABLE_TRAP(0x6236a30)
    }
}
