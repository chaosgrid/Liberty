#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219e10);
CLANG_FORWARD_PROC_SYMBOL(public_621a800);

PROC_DECLARE(0x621a800, internal_621a800, public_621a800);
extern "C" NAKED register_t __cdecl internal_621a800()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_6219e10
        UNREACHABLE_TRAP(0x621a800)
    }
}
