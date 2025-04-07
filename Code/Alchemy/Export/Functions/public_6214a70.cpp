#include "Alchemy-PCH.h"

PROC_DECLARE(0x6214a70, internal_6214a70, public_6214a70);
extern "C" NAKED register_t __cdecl internal_6214a70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x80]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0x14]
        UNREACHABLE_TRAP(0x6214a70)
    }
}
