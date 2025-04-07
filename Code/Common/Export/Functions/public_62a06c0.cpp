#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a06c0);

PROC_DECLARE(0x62a06c0, internal_62a06c0, public_62a06c0);
extern "C" NAKED register_t __cdecl internal_62a06c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0xC]
        ret 
        UNREACHABLE_TRAP(0x62a06c0)
    }
}
