#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bbe60);

PROC_DECLARE(0x62bbe60, internal_62bbe60, public_62bbe60);
extern "C" NAKED register_t __cdecl internal_62bbe60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [eax-4]
        ret 
        UNREACHABLE_TRAP(0x62bbe60)
    }
}
