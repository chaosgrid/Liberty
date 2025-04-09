#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58b770);

PROC_DECLARE(0x58b770, internal_58b770, public_58b770);
extern "C" NAKED register_t __cdecl internal_58b770()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x334]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+8], ecx
        ret 4
        UNREACHABLE_TRAP(0x58b770)
    }
}
