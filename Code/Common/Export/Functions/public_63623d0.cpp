#include "Common-PCH.h"

PROC_DECLARE(0x63623d0, internal_63623d0, public_63623d0);
extern "C" NAKED register_t __cdecl internal_63623d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 4
        UNREACHABLE_TRAP(0x63623d0)
    }
}
