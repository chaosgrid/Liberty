#include "Common-PCH.h"

PROC_DECLARE(0x632e760, internal_632e760, public_632e760);
extern "C" NAKED register_t __cdecl internal_632e760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call dword ptr ds : [public_639902c]
        add esp, 8
        neg eax
        sbb eax, eax
        inc eax
        ret 
        UNREACHABLE_TRAP(0x632e760)
    }
}
