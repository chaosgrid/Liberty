#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622f960);
CLANG_FORWARD_PROC_SYMBOL(public_6232090);

PROC_DECLARE(0x6232090, internal_6232090, public_6232090);
extern "C" NAKED register_t __cdecl internal_6232090()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 0xC
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_622f960
        UNREACHABLE_TRAP(0x6232090)
    }
}
