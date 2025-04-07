#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63286a0);

PROC_DECLARE(0x63286a0, internal_63286a0, public_63286a0);
extern "C" NAKED register_t __cdecl internal_63286a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xC], eax
        mov edx, dword ptr ds : [edx]
        and edx, eax
        mov dword ptr ds : [ecx+4], edx
        ret 8
        UNREACHABLE_TRAP(0x63286a0)
    }
}
