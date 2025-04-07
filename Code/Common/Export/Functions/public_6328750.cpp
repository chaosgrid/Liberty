#include "Common-PCH.h"

PROC_DECLARE(0x6328750, internal_6328750, public_6328750);
extern "C" NAKED register_t __cdecl internal_6328750()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+4], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], offset public_63a3fec
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6328750)
    }
}
