#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8270);

PROC_DECLARE(0x62e8270, internal_62e8270, public_62e8270);
extern "C" NAKED register_t __cdecl internal_62e8270()
{
    __asm
    {
        mov eax, ecx
        and byte ptr ds : [eax], 0xF8
        and dword ptr ds : [eax+4], 0xE0000000
        ret 
        UNREACHABLE_TRAP(0x62e8270)
    }
}
