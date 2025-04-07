#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635aa10);

PROC_DECLARE(0x635aa10, internal_635aa10, public_635aa10);
extern "C" NAKED register_t __cdecl internal_635aa10()
{
    __asm
    {
        mov eax, ecx
        and dword ptr ds : [eax], 0x80000000
        ret 
        UNREACHABLE_TRAP(0x635aa10)
    }
}
