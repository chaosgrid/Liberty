#include "Alchemy-PCH.h"

PROC_DECLARE(0x623c460, internal_623c460, public_623c460);
extern "C" NAKED register_t __cdecl internal_623c460()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0xC], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623c460)
    }
}
