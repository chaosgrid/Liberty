#include "Common-PCH.h"

PROC_DECLARE(0x632e780, internal_632e780, public_632e780);
extern "C" NAKED register_t __cdecl internal_632e780()
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
        neg eax
        ret 
        UNREACHABLE_TRAP(0x632e780)
    }
}
