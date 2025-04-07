#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a920);

PROC_DECLARE(0x620a920, internal_620a920, public_620a920);
extern "C" NAKED register_t __cdecl internal_620a920()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x620a920)
    }
}
