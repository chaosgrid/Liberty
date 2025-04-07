#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6210a40);

PROC_DECLARE(0x6210a40, internal_6210a40, public_6210a40);
extern "C" NAKED register_t __cdecl internal_6210a40()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], 0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6210a40)
    }
}
