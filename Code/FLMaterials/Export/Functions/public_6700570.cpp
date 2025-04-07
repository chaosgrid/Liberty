#include "FLMaterials-PCH.h"

PROC_DECLARE(0x6700570, internal_6700570, public_6700570);
extern "C" NAKED register_t __cdecl internal_6700570()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x6700570)
    }
}
