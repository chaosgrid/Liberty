#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217d60);

PROC_DECLARE(0x6217d60, internal_6217d60, public_6217d60);
extern "C" NAKED register_t __cdecl internal_6217d60()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], 0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6217d60)
    }
}
