#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a0f0);

PROC_DECLARE(0x620a0f0, internal_620a0f0, public_620a0f0);
extern "C" NAKED register_t __cdecl internal_620a0f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x620a0f0)
    }
}
