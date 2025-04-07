#include "Server-PCH.h"

PROC_DECLARE(0x6ce3060, internal_6ce3060, public_6ce3060);
extern "C" NAKED register_t __cdecl internal_6ce3060()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6d64f24
        ret 4
        UNREACHABLE_TRAP(0x6ce3060)
    }
}
