#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a130);

PROC_DECLARE(0x620a130, internal_620a130, public_620a130);
extern "C" NAKED register_t __cdecl internal_620a130()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], 0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x620a130)
    }
}
