#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63609f0);
CLANG_FORWARD_PROC_SYMBOL(public_6363280);

PROC_DECLARE(0x63609f0, internal_63609f0, public_63609f0);
extern "C" NAKED register_t __cdecl internal_63609f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        push edx
        call public_6363280
        ret 4
        UNREACHABLE_TRAP(0x63609f0)
    }
}
