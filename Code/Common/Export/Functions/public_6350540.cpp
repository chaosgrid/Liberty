#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350540);

PROC_DECLARE(0x6350540, internal_6350540, public_6350540);
extern "C" NAKED register_t __cdecl internal_6350540()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], 0
        ret 8
        UNREACHABLE_TRAP(0x6350540)
    }
}
