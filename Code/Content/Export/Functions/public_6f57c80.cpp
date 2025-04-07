#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);

PROC_DECLARE(0x6f57c80, internal_6f57c80, public_6f57c80);
extern "C" NAKED register_t __cdecl internal_6f57c80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x168]
        ret 
        UNREACHABLE_TRAP(0x6f57c80)
    }
}
