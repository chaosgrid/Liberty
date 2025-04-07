#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622acd0);

PROC_DECLARE(0x622acd0, internal_622acd0, public_622acd0);
extern "C" NAKED register_t __cdecl internal_622acd0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x622acd0)
    }
}
