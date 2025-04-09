#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46bba0);

PROC_DECLARE(0x46bba0, internal_46bba0, public_46bba0);
extern "C" NAKED register_t __cdecl internal_46bba0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        ret 4
        UNREACHABLE_TRAP(0x46bba0)
    }
}
