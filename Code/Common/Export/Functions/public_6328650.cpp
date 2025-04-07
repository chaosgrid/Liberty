#include "Common-PCH.h"

PROC_DECLARE(0x6328650, internal_6328650, public_6328650);
extern "C" NAKED register_t __cdecl internal_6328650()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a3f64
        mov ecx, dword ptr ds : [public_640957c]
        mov dword ptr ds : [eax+4], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        ret 
        UNREACHABLE_TRAP(0x6328650)
    }
}
