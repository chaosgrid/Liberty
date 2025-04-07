#include "Common-PCH.h"

PROC_DECLARE(0x6333040, internal_6333040, public_6333040);
extern "C" NAKED register_t __cdecl internal_6333040()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], offset public_63a4998
        ret 4
        UNREACHABLE_TRAP(0x6333040)
    }
}
