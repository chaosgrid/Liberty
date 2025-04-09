#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b3510);

PROC_DECLARE(0x5b3510, internal_5b3510, public_5b3510);
extern "C" NAKED register_t __cdecl internal_5b3510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax*4+public_67ed10]
        ret 
        UNREACHABLE_TRAP(0x5b3510)
    }
}
