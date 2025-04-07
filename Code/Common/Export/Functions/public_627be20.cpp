#include "Common-PCH.h"

PROC_DECLARE(0x627be20, internal_627be20, public_627be20);
extern "C" NAKED register_t __cdecl internal_627be20()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_639b5a4
        ret 4
        UNREACHABLE_TRAP(0x627be20)
    }
}
