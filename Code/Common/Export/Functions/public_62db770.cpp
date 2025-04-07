#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62db770);

PROC_DECLARE(0x62db770, internal_62db770, public_62db770);
extern "C" NAKED register_t __cdecl internal_62db770()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0
        ret 
        UNREACHABLE_TRAP(0x62db770)
    }
}
