#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8d40);

PROC_DECLARE(0x6ea8d40, internal_6ea8d40, public_6ea8d40);
extern "C" NAKED register_t __cdecl internal_6ea8d40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+0xC]
        ret 
        UNREACHABLE_TRAP(0x6ea8d40)
    }
}
