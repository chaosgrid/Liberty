#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284e10);

PROC_DECLARE(0x6284e10, internal_6284e10, public_6284e10);
extern "C" NAKED register_t __cdecl internal_6284e10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x54]
        add eax, 0x84
        ret 
        UNREACHABLE_TRAP(0x6284e10)
    }
}
