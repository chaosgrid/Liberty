#include "Common-PCH.h"

PROC_DECLARE(0x6329af0, internal_6329af0, public_6329af0);
extern "C" NAKED register_t __cdecl internal_6329af0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 8
        UNREACHABLE_TRAP(0x6329af0)
    }
}
