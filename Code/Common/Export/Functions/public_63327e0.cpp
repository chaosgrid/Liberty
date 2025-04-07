#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63327e0);

PROC_DECLARE(0x63327e0, internal_63327e0, public_63327e0);
extern "C" NAKED register_t __cdecl internal_63327e0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+0x34], 0x14
        ret 
        UNREACHABLE_TRAP(0x63327e0)
    }
}
