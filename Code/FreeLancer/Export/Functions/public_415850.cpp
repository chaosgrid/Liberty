#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415850);

PROC_DECLARE(0x415850, internal_415850, public_415850);
extern "C" NAKED register_t __cdecl internal_415850()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x415850)
    }
}
