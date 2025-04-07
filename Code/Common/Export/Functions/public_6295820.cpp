#include "Common-PCH.h"

PROC_DECLARE(0x6295820, internal_6295820, public_6295820);
extern "C" NAKED register_t __cdecl internal_6295820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x24], eax
        ret 4
        UNREACHABLE_TRAP(0x6295820)
    }
}
