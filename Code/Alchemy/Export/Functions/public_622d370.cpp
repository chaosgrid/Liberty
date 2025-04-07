#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d370);

PROC_DECLARE(0x622d370, internal_622d370, public_622d370);
extern "C" NAKED register_t __cdecl internal_622d370()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], 0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x622d370)
    }
}
