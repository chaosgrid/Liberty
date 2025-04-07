#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220c80);

PROC_DECLARE(0x6220c80, internal_6220c80, public_6220c80);
extern "C" NAKED register_t __cdecl internal_6220c80()
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
        UNREACHABLE_TRAP(0x6220c80)
    }
}
