#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d3b0);

PROC_DECLARE(0x622d3b0, internal_622d3b0, public_622d3b0);
extern "C" NAKED register_t __cdecl internal_622d3b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x622d3b0)
    }
}
