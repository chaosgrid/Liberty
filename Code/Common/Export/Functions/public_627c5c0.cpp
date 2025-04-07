#include "Common-PCH.h"

PROC_DECLARE(0x627c5c0, internal_627c5c0, public_627c5c0);
extern "C" NAKED register_t __cdecl internal_627c5c0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_639b59c
        ret 4
        UNREACHABLE_TRAP(0x627c5c0)
    }
}
