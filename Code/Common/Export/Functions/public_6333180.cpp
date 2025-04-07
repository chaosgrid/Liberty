#include "Common-PCH.h"

PROC_DECLARE(0x6333180, internal_6333180, public_6333180);
extern "C" NAKED register_t __cdecl internal_6333180()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], 4
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax], offset public_63a4a00
        ret 8
        UNREACHABLE_TRAP(0x6333180)
    }
}
