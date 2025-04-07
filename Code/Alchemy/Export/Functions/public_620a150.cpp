#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a150);

PROC_DECLARE(0x620a150, internal_620a150, public_620a150);
extern "C" NAKED register_t __cdecl internal_620a150()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], 0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x620a150)
    }
}
