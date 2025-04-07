#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62144a0);

PROC_DECLARE(0x62144a0, internal_62144a0, public_62144a0);
extern "C" NAKED register_t __cdecl internal_62144a0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0x3F800000
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_624bca0
        mov dword ptr ds : [eax+0xC], 1
        ret 
        UNREACHABLE_TRAP(0x62144a0)
    }
}
