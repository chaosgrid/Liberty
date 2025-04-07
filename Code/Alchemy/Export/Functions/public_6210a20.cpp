#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6210a20);

PROC_DECLARE(0x6210a20, internal_6210a20, public_6210a20);
extern "C" NAKED register_t __cdecl internal_6210a20()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], 0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6210a20)
    }
}
