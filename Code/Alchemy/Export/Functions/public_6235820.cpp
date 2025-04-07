#include "Alchemy-PCH.h"

PROC_DECLARE(0x6235820, internal_6235820, public_6235820);
extern "C" NAKED register_t __cdecl internal_6235820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x1C], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6235820)
    }
}
