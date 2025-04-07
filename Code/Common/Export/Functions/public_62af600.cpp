#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af600);

PROC_DECLARE(0x62af600, internal_62af600, public_62af600);
extern "C" NAKED register_t __cdecl internal_62af600()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x98]
        inc eax
        mov dword ptr ds : [ecx+0x98], eax
        ret 
        UNREACHABLE_TRAP(0x62af600)
    }
}
