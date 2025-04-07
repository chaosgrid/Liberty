#include "Common-PCH.h"

PROC_DECLARE(0x63295f0, internal_63295f0, public_63295f0);
extern "C" NAKED register_t __cdecl internal_63295f0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a4184
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x63295f0)
    }
}
