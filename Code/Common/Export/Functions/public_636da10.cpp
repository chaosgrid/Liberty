#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636da10);

PROC_DECLARE(0x636da10, internal_636da10, public_636da10);
extern "C" NAKED register_t __cdecl internal_636da10()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0x10]
        sub eax, dword ptr ds : [ecx+0x14]
        sar eax, 5
        ret 
        UNREACHABLE_TRAP(0x636da10)
    }
}
